// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from simple_interfaces:msg/TemperatureReading.idl
// generated code does not contain a copyright notice

#ifndef SIMPLE_INTERFACES__MSG__DETAIL__TEMPERATURE_READING__BUILDER_HPP_
#define SIMPLE_INTERFACES__MSG__DETAIL__TEMPERATURE_READING__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "simple_interfaces/msg/detail/temperature_reading__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace simple_interfaces
{

namespace msg
{

namespace builder
{

class Init_TemperatureReading_sensor_id
{
public:
  explicit Init_TemperatureReading_sensor_id(::simple_interfaces::msg::TemperatureReading & msg)
  : msg_(msg)
  {}
  ::simple_interfaces::msg::TemperatureReading sensor_id(::simple_interfaces::msg::TemperatureReading::_sensor_id_type arg)
  {
    msg_.sensor_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::simple_interfaces::msg::TemperatureReading msg_;
};

class Init_TemperatureReading_temperature
{
public:
  Init_TemperatureReading_temperature()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TemperatureReading_sensor_id temperature(::simple_interfaces::msg::TemperatureReading::_temperature_type arg)
  {
    msg_.temperature = std::move(arg);
    return Init_TemperatureReading_sensor_id(msg_);
  }

private:
  ::simple_interfaces::msg::TemperatureReading msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::simple_interfaces::msg::TemperatureReading>()
{
  return simple_interfaces::msg::builder::Init_TemperatureReading_temperature();
}

}  // namespace simple_interfaces

#endif  // SIMPLE_INTERFACES__MSG__DETAIL__TEMPERATURE_READING__BUILDER_HPP_
