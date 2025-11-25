// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__rosidl_typesupport_fastrtps_cpp.hpp.em
// with input from simple_interfaces:msg/TemperatureReading.idl
// generated code does not contain a copyright notice

#ifndef SIMPLE_INTERFACES__MSG__DETAIL__TEMPERATURE_READING__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
#define SIMPLE_INTERFACES__MSG__DETAIL__TEMPERATURE_READING__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_

#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "simple_interfaces/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
#include "simple_interfaces/msg/detail/temperature_reading__struct.hpp"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

#include "fastcdr/Cdr.h"

namespace simple_interfaces
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_simple_interfaces
cdr_serialize(
  const simple_interfaces::msg::TemperatureReading & ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_simple_interfaces
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  simple_interfaces::msg::TemperatureReading & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_simple_interfaces
get_serialized_size(
  const simple_interfaces::msg::TemperatureReading & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_simple_interfaces
max_serialized_size_TemperatureReading(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace simple_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_simple_interfaces
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, simple_interfaces, msg, TemperatureReading)();

#ifdef __cplusplus
}
#endif

#endif  // SIMPLE_INTERFACES__MSG__DETAIL__TEMPERATURE_READING__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
