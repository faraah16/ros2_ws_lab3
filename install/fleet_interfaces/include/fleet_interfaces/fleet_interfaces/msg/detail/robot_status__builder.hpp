// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from fleet_interfaces:msg/RobotStatus.idl
// generated code does not contain a copyright notice

#ifndef FLEET_INTERFACES__MSG__DETAIL__ROBOT_STATUS__BUILDER_HPP_
#define FLEET_INTERFACES__MSG__DETAIL__ROBOT_STATUS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "fleet_interfaces/msg/detail/robot_status__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace fleet_interfaces
{

namespace msg
{

namespace builder
{

class Init_RobotStatus_tasks_completed
{
public:
  explicit Init_RobotStatus_tasks_completed(::fleet_interfaces::msg::RobotStatus & msg)
  : msg_(msg)
  {}
  ::fleet_interfaces::msg::RobotStatus tasks_completed(::fleet_interfaces::msg::RobotStatus::_tasks_completed_type arg)
  {
    msg_.tasks_completed = std::move(arg);
    return std::move(msg_);
  }

private:
  ::fleet_interfaces::msg::RobotStatus msg_;
};

class Init_RobotStatus_distance_traveled
{
public:
  explicit Init_RobotStatus_distance_traveled(::fleet_interfaces::msg::RobotStatus & msg)
  : msg_(msg)
  {}
  Init_RobotStatus_tasks_completed distance_traveled(::fleet_interfaces::msg::RobotStatus::_distance_traveled_type arg)
  {
    msg_.distance_traveled = std::move(arg);
    return Init_RobotStatus_tasks_completed(msg_);
  }

private:
  ::fleet_interfaces::msg::RobotStatus msg_;
};

class Init_RobotStatus_active_errors
{
public:
  explicit Init_RobotStatus_active_errors(::fleet_interfaces::msg::RobotStatus & msg)
  : msg_(msg)
  {}
  Init_RobotStatus_distance_traveled active_errors(::fleet_interfaces::msg::RobotStatus::_active_errors_type arg)
  {
    msg_.active_errors = std::move(arg);
    return Init_RobotStatus_distance_traveled(msg_);
  }

private:
  ::fleet_interfaces::msg::RobotStatus msg_;
};

class Init_RobotStatus_active_warnings
{
public:
  explicit Init_RobotStatus_active_warnings(::fleet_interfaces::msg::RobotStatus & msg)
  : msg_(msg)
  {}
  Init_RobotStatus_active_errors active_warnings(::fleet_interfaces::msg::RobotStatus::_active_warnings_type arg)
  {
    msg_.active_warnings = std::move(arg);
    return Init_RobotStatus_active_errors(msg_);
  }

private:
  ::fleet_interfaces::msg::RobotStatus msg_;
};

class Init_RobotStatus_network_signal
{
public:
  explicit Init_RobotStatus_network_signal(::fleet_interfaces::msg::RobotStatus & msg)
  : msg_(msg)
  {}
  Init_RobotStatus_active_warnings network_signal(::fleet_interfaces::msg::RobotStatus::_network_signal_type arg)
  {
    msg_.network_signal = std::move(arg);
    return Init_RobotStatus_active_warnings(msg_);
  }

private:
  ::fleet_interfaces::msg::RobotStatus msg_;
};

class Init_RobotStatus_cpu_temperature
{
public:
  explicit Init_RobotStatus_cpu_temperature(::fleet_interfaces::msg::RobotStatus & msg)
  : msg_(msg)
  {}
  Init_RobotStatus_network_signal cpu_temperature(::fleet_interfaces::msg::RobotStatus::_cpu_temperature_type arg)
  {
    msg_.cpu_temperature = std::move(arg);
    return Init_RobotStatus_network_signal(msg_);
  }

private:
  ::fleet_interfaces::msg::RobotStatus msg_;
};

class Init_RobotStatus_is_operational
{
public:
  explicit Init_RobotStatus_is_operational(::fleet_interfaces::msg::RobotStatus & msg)
  : msg_(msg)
  {}
  Init_RobotStatus_cpu_temperature is_operational(::fleet_interfaces::msg::RobotStatus::_is_operational_type arg)
  {
    msg_.is_operational = std::move(arg);
    return Init_RobotStatus_cpu_temperature(msg_);
  }

private:
  ::fleet_interfaces::msg::RobotStatus msg_;
};

class Init_RobotStatus_task_progress
{
public:
  explicit Init_RobotStatus_task_progress(::fleet_interfaces::msg::RobotStatus & msg)
  : msg_(msg)
  {}
  Init_RobotStatus_is_operational task_progress(::fleet_interfaces::msg::RobotStatus::_task_progress_type arg)
  {
    msg_.task_progress = std::move(arg);
    return Init_RobotStatus_is_operational(msg_);
  }

private:
  ::fleet_interfaces::msg::RobotStatus msg_;
};

class Init_RobotStatus_task_status
{
public:
  explicit Init_RobotStatus_task_status(::fleet_interfaces::msg::RobotStatus & msg)
  : msg_(msg)
  {}
  Init_RobotStatus_task_progress task_status(::fleet_interfaces::msg::RobotStatus::_task_status_type arg)
  {
    msg_.task_status = std::move(arg);
    return Init_RobotStatus_task_progress(msg_);
  }

private:
  ::fleet_interfaces::msg::RobotStatus msg_;
};

class Init_RobotStatus_current_task_id
{
public:
  explicit Init_RobotStatus_current_task_id(::fleet_interfaces::msg::RobotStatus & msg)
  : msg_(msg)
  {}
  Init_RobotStatus_task_status current_task_id(::fleet_interfaces::msg::RobotStatus::_current_task_id_type arg)
  {
    msg_.current_task_id = std::move(arg);
    return Init_RobotStatus_task_status(msg_);
  }

private:
  ::fleet_interfaces::msg::RobotStatus msg_;
};

class Init_RobotStatus_battery_health
{
public:
  explicit Init_RobotStatus_battery_health(::fleet_interfaces::msg::RobotStatus & msg)
  : msg_(msg)
  {}
  Init_RobotStatus_current_task_id battery_health(::fleet_interfaces::msg::RobotStatus::_battery_health_type arg)
  {
    msg_.battery_health = std::move(arg);
    return Init_RobotStatus_current_task_id(msg_);
  }

private:
  ::fleet_interfaces::msg::RobotStatus msg_;
};

class Init_RobotStatus_is_charging
{
public:
  explicit Init_RobotStatus_is_charging(::fleet_interfaces::msg::RobotStatus & msg)
  : msg_(msg)
  {}
  Init_RobotStatus_battery_health is_charging(::fleet_interfaces::msg::RobotStatus::_is_charging_type arg)
  {
    msg_.is_charging = std::move(arg);
    return Init_RobotStatus_battery_health(msg_);
  }

private:
  ::fleet_interfaces::msg::RobotStatus msg_;
};

class Init_RobotStatus_battery_percentage
{
public:
  explicit Init_RobotStatus_battery_percentage(::fleet_interfaces::msg::RobotStatus & msg)
  : msg_(msg)
  {}
  Init_RobotStatus_is_charging battery_percentage(::fleet_interfaces::msg::RobotStatus::_battery_percentage_type arg)
  {
    msg_.battery_percentage = std::move(arg);
    return Init_RobotStatus_is_charging(msg_);
  }

private:
  ::fleet_interfaces::msg::RobotStatus msg_;
};

class Init_RobotStatus_battery_current
{
public:
  explicit Init_RobotStatus_battery_current(::fleet_interfaces::msg::RobotStatus & msg)
  : msg_(msg)
  {}
  Init_RobotStatus_battery_percentage battery_current(::fleet_interfaces::msg::RobotStatus::_battery_current_type arg)
  {
    msg_.battery_current = std::move(arg);
    return Init_RobotStatus_battery_percentage(msg_);
  }

private:
  ::fleet_interfaces::msg::RobotStatus msg_;
};

class Init_RobotStatus_battery_voltage
{
public:
  explicit Init_RobotStatus_battery_voltage(::fleet_interfaces::msg::RobotStatus & msg)
  : msg_(msg)
  {}
  Init_RobotStatus_battery_current battery_voltage(::fleet_interfaces::msg::RobotStatus::_battery_voltage_type arg)
  {
    msg_.battery_voltage = std::move(arg);
    return Init_RobotStatus_battery_current(msg_);
  }

private:
  ::fleet_interfaces::msg::RobotStatus msg_;
};

class Init_RobotStatus_velocity
{
public:
  explicit Init_RobotStatus_velocity(::fleet_interfaces::msg::RobotStatus & msg)
  : msg_(msg)
  {}
  Init_RobotStatus_battery_voltage velocity(::fleet_interfaces::msg::RobotStatus::_velocity_type arg)
  {
    msg_.velocity = std::move(arg);
    return Init_RobotStatus_battery_voltage(msg_);
  }

private:
  ::fleet_interfaces::msg::RobotStatus msg_;
};

class Init_RobotStatus_pose
{
public:
  explicit Init_RobotStatus_pose(::fleet_interfaces::msg::RobotStatus & msg)
  : msg_(msg)
  {}
  Init_RobotStatus_velocity pose(::fleet_interfaces::msg::RobotStatus::_pose_type arg)
  {
    msg_.pose = std::move(arg);
    return Init_RobotStatus_velocity(msg_);
  }

private:
  ::fleet_interfaces::msg::RobotStatus msg_;
};

class Init_RobotStatus_location
{
public:
  explicit Init_RobotStatus_location(::fleet_interfaces::msg::RobotStatus & msg)
  : msg_(msg)
  {}
  Init_RobotStatus_pose location(::fleet_interfaces::msg::RobotStatus::_location_type arg)
  {
    msg_.location = std::move(arg);
    return Init_RobotStatus_pose(msg_);
  }

private:
  ::fleet_interfaces::msg::RobotStatus msg_;
};

class Init_RobotStatus_robot_type
{
public:
  explicit Init_RobotStatus_robot_type(::fleet_interfaces::msg::RobotStatus & msg)
  : msg_(msg)
  {}
  Init_RobotStatus_location robot_type(::fleet_interfaces::msg::RobotStatus::_robot_type_type arg)
  {
    msg_.robot_type = std::move(arg);
    return Init_RobotStatus_location(msg_);
  }

private:
  ::fleet_interfaces::msg::RobotStatus msg_;
};

class Init_RobotStatus_robot_id
{
public:
  explicit Init_RobotStatus_robot_id(::fleet_interfaces::msg::RobotStatus & msg)
  : msg_(msg)
  {}
  Init_RobotStatus_robot_type robot_id(::fleet_interfaces::msg::RobotStatus::_robot_id_type arg)
  {
    msg_.robot_id = std::move(arg);
    return Init_RobotStatus_robot_type(msg_);
  }

private:
  ::fleet_interfaces::msg::RobotStatus msg_;
};

class Init_RobotStatus_header
{
public:
  Init_RobotStatus_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RobotStatus_robot_id header(::fleet_interfaces::msg::RobotStatus::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_RobotStatus_robot_id(msg_);
  }

private:
  ::fleet_interfaces::msg::RobotStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::fleet_interfaces::msg::RobotStatus>()
{
  return fleet_interfaces::msg::builder::Init_RobotStatus_header();
}

}  // namespace fleet_interfaces

#endif  // FLEET_INTERFACES__MSG__DETAIL__ROBOT_STATUS__BUILDER_HPP_
