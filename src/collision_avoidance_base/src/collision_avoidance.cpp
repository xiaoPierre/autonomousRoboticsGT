
#include <ros/ros.h>
#include <geometry_msgs/Twist.h>
#include <sensor_msgs/PointCloud2.h>
#include <pcl_ros/point_cloud.h>
#include <pcl/point_types.h>
#include <numeric>


class CollisionAvoidance {
    protected:
        ros::Subscriber scanSub;
        ros::Subscriber velSub;
        ros::Publisher velPub;

        ros::NodeHandle nh;

        // This might be useful
        double radius;

        pcl::PointCloud<pcl::PointXYZ> lastpc;

        void velocity_filter(const geometry_msgs::TwistConstPtr msg) {
            geometry_msgs::Twist filtered = findClosestAcceptableVelocity(*msg);
            velPub.publish(filtered);
        }

        void pc_callback(const sensor_msgs::PointCloud2ConstPtr msg) {
            pcl::fromROSMsg(*msg, lastpc);
	    /*
            unsigned int n = lastpc.size();
            ROS_INFO("New point cloud: %d points",n);
            for (unsigned int i=0;i<n;i++) {
                float x = lastpc[i].x;
                float y = lastpc[i].y;
                float z = lastpc[i].z;
                ROS_INFO("%d %.3f %.3f %.3f",i,x,y,z);
            }
            printf("\n\n\n");
	    */
        }

        geometry_msgs::Twist findClosestAcceptableVelocity(const geometry_msgs::Twist & desired) {
            geometry_msgs::Twist res = desired;
            // TODO: modify desired using the laser point cloud (lastpc)


            std::vector<pcl::PointXYZ> concernedPoints;
            std::vector<double> positionX;
            unsigned int n = lastpc.size();
            for (unsigned int i = 0; i < n; ++i)
            {
            	if ((lastpc[i].y >= -1 * radius) && (lastpc[i].y <= radius))
            	{
            		// point in the motion direction
            		if (lastpc[i].x > 0)
            		{
            			concernedPoints.push_back(lastpc[i]);
            			positionX.push_back(lastpc[i].x);
            		}
            	}
            }
            std::cout << "the number of points in the direction is " << concernedPoints.size() << std::endl;

            double minDistance = *std::min_element(positionX.begin(), positionX.end());

            //double minDistance = (double)std::accumulate(positionX.begin(), positionX.end(),0.0) / positionX.size();
            std::cout << "the minimum distance is " << minDistance << std::endl;


            /*
            unsigned int n1 = concernedPoints.size();
            ROS_INFO("New point cloud: %d points",n1);
            for (unsigned int i=0;i<n1;i++) {
                float x = concernedPoints[i].x;
                float y = concernedPoints[i].y;
                float z = concernedPoints[i].z;
                ROS_INFO("%d %.3f %.3f %.3f",i,x,y,z);
            }
            printf("\n\n\n");
	       */
	    if (minDistance > 2.5) // safe
	    {
		res.linear.x = desired.linear.x;
            }
	    else
 	    {
            	// smooth linear scaling
            	res.linear.x = desired.linear.x * minDistance / 5;
	    }
            std::cout << "the original linear velocity is " << desired.linear.x << std::endl;

            std::cout << "the result linear velocity is " << res.linear.x << std::endl;
            // if the distance is less than a threshold, stop the robot
            if (std::abs(minDistance) < 0.5)
            {
            	res.linear.x = 0;
            }

            return res;
        }

    public:
        CollisionAvoidance() : nh("~"), radius(1.0) {
            scanSub = nh.subscribe("/vrep/hokuyoSensor",1,&CollisionAvoidance::pc_callback,this);
            velSub = nh.subscribe("/teleop/cmd_vel",1,&CollisionAvoidance::velocity_filter,this);
            velPub = nh.advertise<geometry_msgs::Twist>("/vrep/twistCommand",1);
            nh.param("radius",radius,0.05);
        }

};

int main(int argc, char * argv[]) 
{
    ros::init(argc,argv,"collision_avoidance");

    CollisionAvoidance ca;

    ros::spin();
    // TODO: implement a security layer
}


