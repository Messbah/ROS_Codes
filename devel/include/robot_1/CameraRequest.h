// Generated by gencpp from file robot_1/CameraRequest.msg
// DO NOT EDIT!


#ifndef ROBOT_1_MESSAGE_CAMERAREQUEST_H
#define ROBOT_1_MESSAGE_CAMERAREQUEST_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace robot_1
{
template <class ContainerAllocator>
struct CameraRequest_
{
  typedef CameraRequest_<ContainerAllocator> Type;

  CameraRequest_()
    : angles(0.0)  {
    }
  CameraRequest_(const ContainerAllocator& _alloc)
    : angles(0.0)  {
  (void)_alloc;
    }



   typedef float _angles_type;
  _angles_type angles;





  typedef boost::shared_ptr< ::robot_1::CameraRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::robot_1::CameraRequest_<ContainerAllocator> const> ConstPtr;

}; // struct CameraRequest_

typedef ::robot_1::CameraRequest_<std::allocator<void> > CameraRequest;

typedef boost::shared_ptr< ::robot_1::CameraRequest > CameraRequestPtr;
typedef boost::shared_ptr< ::robot_1::CameraRequest const> CameraRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::robot_1::CameraRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::robot_1::CameraRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::robot_1::CameraRequest_<ContainerAllocator1> & lhs, const ::robot_1::CameraRequest_<ContainerAllocator2> & rhs)
{
  return lhs.angles == rhs.angles;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::robot_1::CameraRequest_<ContainerAllocator1> & lhs, const ::robot_1::CameraRequest_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace robot_1

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::robot_1::CameraRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::robot_1::CameraRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::robot_1::CameraRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::robot_1::CameraRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::robot_1::CameraRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::robot_1::CameraRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::robot_1::CameraRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "47d0f04bda78eec1a5109b1334da1dfd";
  }

  static const char* value(const ::robot_1::CameraRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x47d0f04bda78eec1ULL;
  static const uint64_t static_value2 = 0xa5109b1334da1dfdULL;
};

template<class ContainerAllocator>
struct DataType< ::robot_1::CameraRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "robot_1/CameraRequest";
  }

  static const char* value(const ::robot_1::CameraRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::robot_1::CameraRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "float32 angles\n"
;
  }

  static const char* value(const ::robot_1::CameraRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::robot_1::CameraRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.angles);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct CameraRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::robot_1::CameraRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::robot_1::CameraRequest_<ContainerAllocator>& v)
  {
    s << indent << "angles: ";
    Printer<float>::stream(s, indent + "  ", v.angles);
  }
};

} // namespace message_operations
} // namespace ros

#endif // ROBOT_1_MESSAGE_CAMERAREQUEST_H