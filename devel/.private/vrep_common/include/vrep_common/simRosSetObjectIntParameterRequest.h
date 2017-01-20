// Generated by gencpp from file vrep_common/simRosSetObjectIntParameterRequest.msg
// DO NOT EDIT!


#ifndef VREP_COMMON_MESSAGE_SIMROSSETOBJECTINTPARAMETERREQUEST_H
#define VREP_COMMON_MESSAGE_SIMROSSETOBJECTINTPARAMETERREQUEST_H


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
struct simRosSetObjectIntParameterRequest_
{
  typedef simRosSetObjectIntParameterRequest_<ContainerAllocator> Type;

  simRosSetObjectIntParameterRequest_()
    : handle(0)
    , parameter(0)
    , parameterValue(0)  {
    }
  simRosSetObjectIntParameterRequest_(const ContainerAllocator& _alloc)
    : handle(0)
    , parameter(0)
    , parameterValue(0)  {
  (void)_alloc;
    }



   typedef int32_t _handle_type;
  _handle_type handle;

   typedef int32_t _parameter_type;
  _parameter_type parameter;

   typedef int32_t _parameterValue_type;
  _parameterValue_type parameterValue;




  typedef boost::shared_ptr< ::vrep_common::simRosSetObjectIntParameterRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::vrep_common::simRosSetObjectIntParameterRequest_<ContainerAllocator> const> ConstPtr;

}; // struct simRosSetObjectIntParameterRequest_

typedef ::vrep_common::simRosSetObjectIntParameterRequest_<std::allocator<void> > simRosSetObjectIntParameterRequest;

typedef boost::shared_ptr< ::vrep_common::simRosSetObjectIntParameterRequest > simRosSetObjectIntParameterRequestPtr;
typedef boost::shared_ptr< ::vrep_common::simRosSetObjectIntParameterRequest const> simRosSetObjectIntParameterRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::vrep_common::simRosSetObjectIntParameterRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::vrep_common::simRosSetObjectIntParameterRequest_<ContainerAllocator> >::stream(s, "", v);
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
struct IsFixedSize< ::vrep_common::simRosSetObjectIntParameterRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::vrep_common::simRosSetObjectIntParameterRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::vrep_common::simRosSetObjectIntParameterRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::vrep_common::simRosSetObjectIntParameterRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::vrep_common::simRosSetObjectIntParameterRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::vrep_common::simRosSetObjectIntParameterRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::vrep_common::simRosSetObjectIntParameterRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "31bdad5c2b1f7cc8b85b4047431fdd27";
  }

  static const char* value(const ::vrep_common::simRosSetObjectIntParameterRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x31bdad5c2b1f7cc8ULL;
  static const uint64_t static_value2 = 0xb85b4047431fdd27ULL;
};

template<class ContainerAllocator>
struct DataType< ::vrep_common::simRosSetObjectIntParameterRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "vrep_common/simRosSetObjectIntParameterRequest";
  }

  static const char* value(const ::vrep_common::simRosSetObjectIntParameterRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::vrep_common::simRosSetObjectIntParameterRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "\n\
\n\
\n\
\n\
int32 handle\n\
int32 parameter\n\
int32 parameterValue\n\
";
  }

  static const char* value(const ::vrep_common::simRosSetObjectIntParameterRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::vrep_common::simRosSetObjectIntParameterRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.handle);
      stream.next(m.parameter);
      stream.next(m.parameterValue);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER;
  }; // struct simRosSetObjectIntParameterRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::vrep_common::simRosSetObjectIntParameterRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::vrep_common::simRosSetObjectIntParameterRequest_<ContainerAllocator>& v)
  {
    s << indent << "handle: ";
    Printer<int32_t>::stream(s, indent + "  ", v.handle);
    s << indent << "parameter: ";
    Printer<int32_t>::stream(s, indent + "  ", v.parameter);
    s << indent << "parameterValue: ";
    Printer<int32_t>::stream(s, indent + "  ", v.parameterValue);
  }
};

} // namespace message_operations
} // namespace ros

#endif // VREP_COMMON_MESSAGE_SIMROSSETOBJECTINTPARAMETERREQUEST_H
