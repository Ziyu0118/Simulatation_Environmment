// Generated by gencpp from file pr2_msgs/AccessPoint.msg
// DO NOT EDIT!


#ifndef PR2_MSGS_MESSAGE_ACCESSPOINT_H
#define PR2_MSGS_MESSAGE_ACCESSPOINT_H


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
struct AccessPoint_
{
  typedef AccessPoint_<ContainerAllocator> Type;

  AccessPoint_()
    : header()
    , essid()
    , macaddr()
    , signal(0)
    , noise(0)
    , snr(0)
    , channel(0)
    , rate()
    , tx_power()
    , quality(0)  {
    }
  AccessPoint_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , essid(_alloc)
    , macaddr(_alloc)
    , signal(0)
    , noise(0)
    , snr(0)
    , channel(0)
    , rate(_alloc)
    , tx_power(_alloc)
    , quality(0)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _essid_type;
  _essid_type essid;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _macaddr_type;
  _macaddr_type macaddr;

   typedef int32_t _signal_type;
  _signal_type signal;

   typedef int32_t _noise_type;
  _noise_type noise;

   typedef int32_t _snr_type;
  _snr_type snr;

   typedef int32_t _channel_type;
  _channel_type channel;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _rate_type;
  _rate_type rate;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _tx_power_type;
  _tx_power_type tx_power;

   typedef int32_t _quality_type;
  _quality_type quality;




  typedef boost::shared_ptr< ::pr2_msgs::AccessPoint_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::pr2_msgs::AccessPoint_<ContainerAllocator> const> ConstPtr;

}; // struct AccessPoint_

typedef ::pr2_msgs::AccessPoint_<std::allocator<void> > AccessPoint;

typedef boost::shared_ptr< ::pr2_msgs::AccessPoint > AccessPointPtr;
typedef boost::shared_ptr< ::pr2_msgs::AccessPoint const> AccessPointConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::pr2_msgs::AccessPoint_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::pr2_msgs::AccessPoint_<ContainerAllocator> >::stream(s, "", v);
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
struct IsFixedSize< ::pr2_msgs::AccessPoint_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::pr2_msgs::AccessPoint_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::pr2_msgs::AccessPoint_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::pr2_msgs::AccessPoint_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::pr2_msgs::AccessPoint_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::pr2_msgs::AccessPoint_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::pr2_msgs::AccessPoint_<ContainerAllocator> >
{
  static const char* value()
  {
    return "810217d9e35df31ffb396ea5673d7d1b";
  }

  static const char* value(const ::pr2_msgs::AccessPoint_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x810217d9e35df31fULL;
  static const uint64_t static_value2 = 0xfb396ea5673d7d1bULL;
};

template<class ContainerAllocator>
struct DataType< ::pr2_msgs::AccessPoint_<ContainerAllocator> >
{
  static const char* value()
  {
    return "pr2_msgs/AccessPoint";
  }

  static const char* value(const ::pr2_msgs::AccessPoint_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::pr2_msgs::AccessPoint_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# This message communicates the state of the PR2's wifi access point.\n\
Header header\n\
string essid\n\
string macaddr\n\
int32 signal\n\
int32 noise\n\
int32 snr\n\
int32 channel\n\
string rate\n\
string tx_power\n\
int32 quality\n\
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

  static const char* value(const ::pr2_msgs::AccessPoint_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::pr2_msgs::AccessPoint_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.essid);
      stream.next(m.macaddr);
      stream.next(m.signal);
      stream.next(m.noise);
      stream.next(m.snr);
      stream.next(m.channel);
      stream.next(m.rate);
      stream.next(m.tx_power);
      stream.next(m.quality);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct AccessPoint_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::pr2_msgs::AccessPoint_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::pr2_msgs::AccessPoint_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "essid: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.essid);
    s << indent << "macaddr: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.macaddr);
    s << indent << "signal: ";
    Printer<int32_t>::stream(s, indent + "  ", v.signal);
    s << indent << "noise: ";
    Printer<int32_t>::stream(s, indent + "  ", v.noise);
    s << indent << "snr: ";
    Printer<int32_t>::stream(s, indent + "  ", v.snr);
    s << indent << "channel: ";
    Printer<int32_t>::stream(s, indent + "  ", v.channel);
    s << indent << "rate: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.rate);
    s << indent << "tx_power: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.tx_power);
    s << indent << "quality: ";
    Printer<int32_t>::stream(s, indent + "  ", v.quality);
  }
};

} // namespace message_operations
} // namespace ros

#endif // PR2_MSGS_MESSAGE_ACCESSPOINT_H
