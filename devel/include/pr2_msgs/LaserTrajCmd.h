// Generated by gencpp from file pr2_msgs/LaserTrajCmd.msg
// DO NOT EDIT!


#ifndef PR2_MSGS_MESSAGE_LASERTRAJCMD_H
#define PR2_MSGS_MESSAGE_LASERTRAJCMD_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>

namespace pr2_msgs
{
template <class ContainerAllocator>
struct LaserTrajCmd_
{
  typedef LaserTrajCmd_<ContainerAllocator> Type;

  LaserTrajCmd_()
    : header()
    , profile()
    , position()
    , time_from_start()
    , max_velocity(0.0)
    , max_acceleration(0.0)  {
    }
  LaserTrajCmd_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , profile(_alloc)
    , position(_alloc)
    , time_from_start(_alloc)
    , max_velocity(0.0)
    , max_acceleration(0.0)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _profile_type;
  _profile_type profile;

   typedef std::vector<double, typename ContainerAllocator::template rebind<double>::other >  _position_type;
  _position_type position;

   typedef std::vector<ros::Duration, typename ContainerAllocator::template rebind<ros::Duration>::other >  _time_from_start_type;
  _time_from_start_type time_from_start;

   typedef double _max_velocity_type;
  _max_velocity_type max_velocity;

   typedef double _max_acceleration_type;
  _max_acceleration_type max_acceleration;




  typedef boost::shared_ptr< ::pr2_msgs::LaserTrajCmd_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::pr2_msgs::LaserTrajCmd_<ContainerAllocator> const> ConstPtr;

}; // struct LaserTrajCmd_

typedef ::pr2_msgs::LaserTrajCmd_<std::allocator<void> > LaserTrajCmd;

typedef boost::shared_ptr< ::pr2_msgs::LaserTrajCmd > LaserTrajCmdPtr;
typedef boost::shared_ptr< ::pr2_msgs::LaserTrajCmd const> LaserTrajCmdConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::pr2_msgs::LaserTrajCmd_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::pr2_msgs::LaserTrajCmd_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace pr2_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': True}
// {'std_msgs': ['/opt/ros/indigo/share/std_msgs/cmake/../msg'], 'geometry_msgs': ['/opt/ros/indigo/share/geometry_msgs/cmake/../msg'], 'pr2_msgs': ['/home/ziyubian/catkin_ws/src/pr2_common/pr2_msgs/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::pr2_msgs::LaserTrajCmd_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::pr2_msgs::LaserTrajCmd_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::pr2_msgs::LaserTrajCmd_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::pr2_msgs::LaserTrajCmd_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::pr2_msgs::LaserTrajCmd_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::pr2_msgs::LaserTrajCmd_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::pr2_msgs::LaserTrajCmd_<ContainerAllocator> >
{
  static const char* value()
  {
    return "68a1665e9079049dce55a0384cb2e9b5";
  }

  static const char* value(const ::pr2_msgs::LaserTrajCmd_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x68a1665e9079049dULL;
  static const uint64_t static_value2 = 0xce55a0384cb2e9b5ULL;
};

template<class ContainerAllocator>
struct DataType< ::pr2_msgs::LaserTrajCmd_<ContainerAllocator> >
{
  static const char* value()
  {
    return "pr2_msgs/LaserTrajCmd";
  }

  static const char* value(const ::pr2_msgs::LaserTrajCmd_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::pr2_msgs::LaserTrajCmd_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# This message is used to set the profile that the tilt laser controller\n\
# executes.\n\
Header header\n\
string profile              # options are currently \"linear\" or \"linear_blended\"\n\
float64[] position          # Laser positions\n\
duration[] time_from_start  # Times to reach laser positions in seconds\n\
float64 max_velocity        # Set <= 0 to use default\n\
float64 max_acceleration    # Set <= 0 to use default\n\
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

  static const char* value(const ::pr2_msgs::LaserTrajCmd_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::pr2_msgs::LaserTrajCmd_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.profile);
      stream.next(m.position);
      stream.next(m.time_from_start);
      stream.next(m.max_velocity);
      stream.next(m.max_acceleration);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct LaserTrajCmd_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::pr2_msgs::LaserTrajCmd_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::pr2_msgs::LaserTrajCmd_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "profile: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.profile);
    s << indent << "position[]" << std::endl;
    for (size_t i = 0; i < v.position.size(); ++i)
    {
      s << indent << "  position[" << i << "]: ";
      Printer<double>::stream(s, indent + "  ", v.position[i]);
    }
    s << indent << "time_from_start[]" << std::endl;
    for (size_t i = 0; i < v.time_from_start.size(); ++i)
    {
      s << indent << "  time_from_start[" << i << "]: ";
      Printer<ros::Duration>::stream(s, indent + "  ", v.time_from_start[i]);
    }
    s << indent << "max_velocity: ";
    Printer<double>::stream(s, indent + "  ", v.max_velocity);
    s << indent << "max_acceleration: ";
    Printer<double>::stream(s, indent + "  ", v.max_acceleration);
  }
};

} // namespace message_operations
} // namespace ros

#endif // PR2_MSGS_MESSAGE_LASERTRAJCMD_H
