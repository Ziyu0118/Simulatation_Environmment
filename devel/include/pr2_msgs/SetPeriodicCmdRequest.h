// Generated by gencpp from file pr2_msgs/SetPeriodicCmdRequest.msg
// DO NOT EDIT!


#ifndef PR2_MSGS_MESSAGE_SETPERIODICCMDREQUEST_H
#define PR2_MSGS_MESSAGE_SETPERIODICCMDREQUEST_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <pr2_msgs/PeriodicCmd.h>

namespace pr2_msgs
{
template <class ContainerAllocator>
struct SetPeriodicCmdRequest_
{
  typedef SetPeriodicCmdRequest_<ContainerAllocator> Type;

  SetPeriodicCmdRequest_()
    : command()  {
    }
  SetPeriodicCmdRequest_(const ContainerAllocator& _alloc)
    : command(_alloc)  {
  (void)_alloc;
    }



   typedef  ::pr2_msgs::PeriodicCmd_<ContainerAllocator>  _command_type;
  _command_type command;




  typedef boost::shared_ptr< ::pr2_msgs::SetPeriodicCmdRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::pr2_msgs::SetPeriodicCmdRequest_<ContainerAllocator> const> ConstPtr;

}; // struct SetPeriodicCmdRequest_

typedef ::pr2_msgs::SetPeriodicCmdRequest_<std::allocator<void> > SetPeriodicCmdRequest;

typedef boost::shared_ptr< ::pr2_msgs::SetPeriodicCmdRequest > SetPeriodicCmdRequestPtr;
typedef boost::shared_ptr< ::pr2_msgs::SetPeriodicCmdRequest const> SetPeriodicCmdRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::pr2_msgs::SetPeriodicCmdRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::pr2_msgs::SetPeriodicCmdRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace pr2_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'std_msgs': ['/opt/ros/indigo/share/std_msgs/cmake/../msg'], 'geometry_msgs': ['/opt/ros/indigo/share/geometry_msgs/cmake/../msg'], 'pr2_msgs': ['/home/ziyubian/catkin_ws/src/pr2_common/pr2_msgs/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::pr2_msgs::SetPeriodicCmdRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::pr2_msgs::SetPeriodicCmdRequest_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::pr2_msgs::SetPeriodicCmdRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::pr2_msgs::SetPeriodicCmdRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::pr2_msgs::SetPeriodicCmdRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::pr2_msgs::SetPeriodicCmdRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::pr2_msgs::SetPeriodicCmdRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "d4deedcc194c4a77110f7228904ee733";
  }

  static const char* value(const ::pr2_msgs::SetPeriodicCmdRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xd4deedcc194c4a77ULL;
  static const uint64_t static_value2 = 0x110f7228904ee733ULL;
};

template<class ContainerAllocator>
struct DataType< ::pr2_msgs::SetPeriodicCmdRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "pr2_msgs/SetPeriodicCmdRequest";
  }

  static const char* value(const ::pr2_msgs::SetPeriodicCmdRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::pr2_msgs::SetPeriodicCmdRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "pr2_msgs/PeriodicCmd command\n\
\n\
================================================================================\n\
MSG: pr2_msgs/PeriodicCmd\n\
# This message is used to set the parameters of a profile executed by the\n\
# laser tilt controller.\n\
Header header\n\
string profile\n\
float64 period\n\
float64 amplitude\n\
float64 offset\n\
\n\
================================================================================\n\
MSG: std_msgs/Header\n\
# Standard metadata for higher-level stamped data types.\n\
# This is generally used to communicate timestamped data \n\
# in a particular coordinate frame.\n\
# \n\
# sequence ID: consecutively increasing ID \n\
uint32 seq\n\
#Two-integer timestamp that is expressed as:\n\
# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')\n\
# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')\n\
# time-handling sugar is provided by the client library\n\
time stamp\n\
#Frame this data is associated with\n\
# 0: no frame\n\
# 1: global frame\n\
string frame_id\n\
";
  }

  static const char* value(const ::pr2_msgs::SetPeriodicCmdRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::pr2_msgs::SetPeriodicCmdRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.command);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct SetPeriodicCmdRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::pr2_msgs::SetPeriodicCmdRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::pr2_msgs::SetPeriodicCmdRequest_<ContainerAllocator>& v)
  {
    s << indent << "command: ";
    s << std::endl;
    Printer< ::pr2_msgs::PeriodicCmd_<ContainerAllocator> >::stream(s, indent + "  ", v.command);
  }
};

} // namespace message_operations
} // namespace ros

#endif // PR2_MSGS_MESSAGE_SETPERIODICCMDREQUEST_H
