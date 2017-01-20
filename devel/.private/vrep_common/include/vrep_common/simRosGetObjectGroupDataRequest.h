// Generated by gencpp from file vrep_common/simRosGetObjectGroupDataRequest.msg
// DO NOT EDIT!


#ifndef VREP_COMMON_MESSAGE_SIMROSGETOBJECTGROUPDATAREQUEST_H
#define VREP_COMMON_MESSAGE_SIMROSGETOBJECTGROUPDATAREQUEST_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace vrep_common
{
template <class ContainerAllocator>
struct simRosGetObjectGroupDataRequest_
{
  typedef simRosGetObjectGroupDataRequest_<ContainerAllocator> Type;

  simRosGetObjectGroupDataRequest_()
    : objectType(0)
    , dataType(0)  {
    }
  simRosGetObjectGroupDataRequest_(const ContainerAllocator& _alloc)
    : objectType(0)
    , dataType(0)  {
  (void)_alloc;
    }



   typedef int32_t _objectType_type;
  _objectType_type objectType;

   typedef int32_t _dataType_type;
  _dataType_type dataType;




  typedef boost::shared_ptr< ::vrep_common::simRosGetObjectGroupDataRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::vrep_common::simRosGetObjectGroupDataRequest_<ContainerAllocator> const> ConstPtr;

}; // struct simRosGetObjectGroupDataRequest_

typedef ::vrep_common::simRosGetObjectGroupDataRequest_<std::allocator<void> > simRosGetObjectGroupDataRequest;

typedef boost::shared_ptr< ::vrep_common::simRosGetObjectGroupDataRequest > simRosGetObjectGroupDataRequestPtr;
typedef boost::shared_ptr< ::vrep_common::simRosGetObjectGroupDataRequest const> simRosGetObjectGroupDataRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::vrep_common::simRosGetObjectGroupDataRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::vrep_common::simRosGetObjectGroupDataRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace vrep_common

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'sensor_msgs': ['/opt/ros/kinetic/share/sensor_msgs/cmake/../msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'geometry_msgs': ['/opt/ros/kinetic/share/geometry_msgs/cmake/../msg'], 'vrep_common': ['/home/zhang/catkin_ws/src/vrep_common/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::vrep_common::simRosGetObjectGroupDataRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::vrep_common::simRosGetObjectGroupDataRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::vrep_common::simRosGetObjectGroupDataRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::vrep_common::simRosGetObjectGroupDataRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::vrep_common::simRosGetObjectGroupDataRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::vrep_common::simRosGetObjectGroupDataRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::vrep_common::simRosGetObjectGroupDataRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "f25e144fb8e81818d3b3ee5f47698859";
  }

  static const char* value(const ::vrep_common::simRosGetObjectGroupDataRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xf25e144fb8e81818ULL;
  static const uint64_t static_value2 = 0xd3b3ee5f47698859ULL;
};

template<class ContainerAllocator>
struct DataType< ::vrep_common::simRosGetObjectGroupDataRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "vrep_common/simRosGetObjectGroupDataRequest";
  }

  static const char* value(const ::vrep_common::simRosGetObjectGroupDataRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::vrep_common::simRosGetObjectGroupDataRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "\n\
\n\
\n\
\n\
int32 objectType\n\
int32 dataType\n\
";
  }

  static const char* value(const ::vrep_common::simRosGetObjectGroupDataRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::vrep_common::simRosGetObjectGroupDataRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.objectType);
      stream.next(m.dataType);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER;
  }; // struct simRosGetObjectGroupDataRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::vrep_common::simRosGetObjectGroupDataRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::vrep_common::simRosGetObjectGroupDataRequest_<ContainerAllocator>& v)
  {
    s << indent << "objectType: ";
    Printer<int32_t>::stream(s, indent + "  ", v.objectType);
    s << indent << "dataType: ";
    Printer<int32_t>::stream(s, indent + "  ", v.dataType);
  }
};

} // namespace message_operations
} // namespace ros

#endif // VREP_COMMON_MESSAGE_SIMROSGETOBJECTGROUPDATAREQUEST_H
