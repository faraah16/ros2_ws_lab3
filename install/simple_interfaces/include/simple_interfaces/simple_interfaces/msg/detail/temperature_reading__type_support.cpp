// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from simple_interfaces:msg/TemperatureReading.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "simple_interfaces/msg/detail/temperature_reading__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace simple_interfaces
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void TemperatureReading_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) simple_interfaces::msg::TemperatureReading(_init);
}

void TemperatureReading_fini_function(void * message_memory)
{
  auto typed_message = static_cast<simple_interfaces::msg::TemperatureReading *>(message_memory);
  typed_message->~TemperatureReading();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember TemperatureReading_message_member_array[2] = {
  {
    "temperature",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(simple_interfaces::msg::TemperatureReading, temperature),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "sensor_id",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(simple_interfaces::msg::TemperatureReading, sensor_id),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers TemperatureReading_message_members = {
  "simple_interfaces::msg",  // message namespace
  "TemperatureReading",  // message name
  2,  // number of fields
  sizeof(simple_interfaces::msg::TemperatureReading),
  TemperatureReading_message_member_array,  // message members
  TemperatureReading_init_function,  // function to initialize message memory (memory has to be allocated)
  TemperatureReading_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t TemperatureReading_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &TemperatureReading_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace simple_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<simple_interfaces::msg::TemperatureReading>()
{
  return &::simple_interfaces::msg::rosidl_typesupport_introspection_cpp::TemperatureReading_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, simple_interfaces, msg, TemperatureReading)() {
  return &::simple_interfaces::msg::rosidl_typesupport_introspection_cpp::TemperatureReading_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
