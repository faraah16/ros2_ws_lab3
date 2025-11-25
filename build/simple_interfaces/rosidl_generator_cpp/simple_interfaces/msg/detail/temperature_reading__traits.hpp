// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from simple_interfaces:msg/TemperatureReading.idl
// generated code does not contain a copyright notice

#ifndef SIMPLE_INTERFACES__MSG__DETAIL__TEMPERATURE_READING__TRAITS_HPP_
#define SIMPLE_INTERFACES__MSG__DETAIL__TEMPERATURE_READING__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "simple_interfaces/msg/detail/temperature_reading__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace simple_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const TemperatureReading & msg,
  std::ostream & out)
{
  out << "{";
  // member: temperature
  {
    out << "temperature: ";
    rosidl_generator_traits::value_to_yaml(msg.temperature, out);
    out << ", ";
  }

  // member: sensor_id
  {
    out << "sensor_id: ";
    rosidl_generator_traits::value_to_yaml(msg.sensor_id, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const TemperatureReading & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: temperature
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "temperature: ";
    rosidl_generator_traits::value_to_yaml(msg.temperature, out);
    out << "\n";
  }

  // member: sensor_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sensor_id: ";
    rosidl_generator_traits::value_to_yaml(msg.sensor_id, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const TemperatureReading & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace simple_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use simple_interfaces::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const simple_interfaces::msg::TemperatureReading & msg,
  std::ostream & out, size_t indentation = 0)
{
  simple_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use simple_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const simple_interfaces::msg::TemperatureReading & msg)
{
  return simple_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<simple_interfaces::msg::TemperatureReading>()
{
  return "simple_interfaces::msg::TemperatureReading";
}

template<>
inline const char * name<simple_interfaces::msg::TemperatureReading>()
{
  return "simple_interfaces/msg/TemperatureReading";
}

template<>
struct has_fixed_size<simple_interfaces::msg::TemperatureReading>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<simple_interfaces::msg::TemperatureReading>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<simple_interfaces::msg::TemperatureReading>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // SIMPLE_INTERFACES__MSG__DETAIL__TEMPERATURE_READING__TRAITS_HPP_
