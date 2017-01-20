#include "ros/ros.h"
#include <sensor_msgs/Joy.h>
#include <geometry_msgs/Twist.h>


void onJoy(ros::Publisher& pub, const sensor_msgs::Joy::ConstPtr& msg)
{
  // inspired from http://sirien.metz.supelec.fr/depot/SIR/RobotiqueAutonome/robotique_autonome_be/nodes/joy_to_twist.py
  double linear = msg->axes[1];
  double angular = msg->axes[3];
  geometry_msgs::Twist cmd;
  cmd.linear.x = 3 * linear;
  cmd.angular.z = 3 * angular;
  pub.publish(cmd);
}

int main(int argc, char **argv)
{
  ros::init(argc, argv, "joyControl");

  ros::NodeHandle n;
  ros::Publisher pub = n.advertise<geometry_msgs::Twist>("/vrep/twistCommand", 1);
  ros::Subscriber sub = n.subscribe<sensor_msgs::Joy>("joy", 1, boost::bind(onJoy, boost::ref(pub), _1));


  /**
   * ros::spin() will enter a loop, pumping callbacks.  With this version, all
   * callbacks will be called from within this thread (the main one).  ros::spin()
   * will exit when Ctrl-C is pressed, or the node is shutdown by the master.
   */
  ros::spin();

  return 0;
}