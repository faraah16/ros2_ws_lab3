// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from fleet_interfaces:srv/GetFleetStatus.idl
// generated code does not contain a copyright notice

#ifndef FLEET_INTERFACES__SRV__DETAIL__GET_FLEET_STATUS__BUILDER_HPP_
#define FLEET_INTERFACES__SRV__DETAIL__GET_FLEET_STATUS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "fleet_interfaces/srv/detail/get_fleet_status__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace fleet_interfaces
{

namespace srv
{

namespace builder
{

class Init_GetFleetStatus_Request_robot_type_filter
{
public:
  explicit Init_GetFleetStatus_Request_robot_type_filter(::fleet_interfaces::srv::GetFleetStatus_Request & msg)
  : msg_(msg)
  {}
  ::fleet_interfaces::srv::GetFleetStatus_Request robot_type_filter(::fleet_interfaces::srv::GetFleetStatus_Request::_robot_type_filter_type arg)
  {
    msg_.robot_type_filter = std::move(arg);
    return std::move(msg_);
  }

private:
  ::fleet_interfaces::srv::GetFleetStatus_Request msg_;
};

class Init_GetFleetStatus_Request_include_offline_robots
{
public:
  Init_GetFleetStatus_Request_include_offline_robots()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GetFleetStatus_Request_robot_type_filter include_offline_robots(::fleet_interfaces::srv::GetFleetStatus_Request::_include_offline_robots_type arg)
  {
    msg_.include_offline_robots = std::move(arg);
    return Init_GetFleetStatus_Request_robot_type_filter(msg_);
  }

private:
  ::fleet_interfaces::srv::GetFleetStatus_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::fleet_interfaces::srv::GetFleetStatus_Request>()
{
  return fleet_interfaces::srv::builder::Init_GetFleetStatus_Request_include_offline_robots();
}

}  // namespace fleet_interfaces


namespace fleet_interfaces
{

namespace srv
{

namespace builder
{

class Init_GetFleetStatus_Response_average_battery_level
{
public:
  explicit Init_GetFleetStatus_Response_average_battery_level(::fleet_interfaces::srv::GetFleetStatus_Response & msg)
  : msg_(msg)
  {}
  ::fleet_interfaces::srv::GetFleetStatus_Response average_battery_level(::fleet_interfaces::srv::GetFleetStatus_Response::_average_battery_level_type arg)
  {
    msg_.average_battery_level = std::move(arg);
    return std::move(msg_);
  }

private:
  ::fleet_interfaces::srv::GetFleetStatus_Response msg_;
};

class Init_GetFleetStatus_Response_robot_ids
{
public:
  explicit Init_GetFleetStatus_Response_robot_ids(::fleet_interfaces::srv::GetFleetStatus_Response & msg)
  : msg_(msg)
  {}
  Init_GetFleetStatus_Response_average_battery_level robot_ids(::fleet_interfaces::srv::GetFleetStatus_Response::_robot_ids_type arg)
  {
    msg_.robot_ids = std::move(arg);
    return Init_GetFleetStatus_Response_average_battery_level(msg_);
  }

private:
  ::fleet_interfaces::srv::GetFleetStatus_Response msg_;
};

class Init_GetFleetStatus_Response_robots_with_errors
{
public:
  explicit Init_GetFleetStatus_Response_robots_with_errors(::fleet_interfaces::srv::GetFleetStatus_Response & msg)
  : msg_(msg)
  {}
  Init_GetFleetStatus_Response_robot_ids robots_with_errors(::fleet_interfaces::srv::GetFleetStatus_Response::_robots_with_errors_type arg)
  {
    msg_.robots_with_errors = std::move(arg);
    return Init_GetFleetStatus_Response_robot_ids(msg_);
  }

private:
  ::fleet_interfaces::srv::GetFleetStatus_Response msg_;
};

class Init_GetFleetStatus_Response_robots_charging
{
public:
  explicit Init_GetFleetStatus_Response_robots_charging(::fleet_interfaces::srv::GetFleetStatus_Response & msg)
  : msg_(msg)
  {}
  Init_GetFleetStatus_Response_robots_with_errors robots_charging(::fleet_interfaces::srv::GetFleetStatus_Response::_robots_charging_type arg)
  {
    msg_.robots_charging = std::move(arg);
    return Init_GetFleetStatus_Response_robots_with_errors(msg_);
  }

private:
  ::fleet_interfaces::srv::GetFleetStatus_Response msg_;
};

class Init_GetFleetStatus_Response_robots_on_task
{
public:
  explicit Init_GetFleetStatus_Response_robots_on_task(::fleet_interfaces::srv::GetFleetStatus_Response & msg)
  : msg_(msg)
  {}
  Init_GetFleetStatus_Response_robots_charging robots_on_task(::fleet_interfaces::srv::GetFleetStatus_Response::_robots_on_task_type arg)
  {
    msg_.robots_on_task = std::move(arg);
    return Init_GetFleetStatus_Response_robots_charging(msg_);
  }

private:
  ::fleet_interfaces::srv::GetFleetStatus_Response msg_;
};

class Init_GetFleetStatus_Response_operational_robots
{
public:
  explicit Init_GetFleetStatus_Response_operational_robots(::fleet_interfaces::srv::GetFleetStatus_Response & msg)
  : msg_(msg)
  {}
  Init_GetFleetStatus_Response_robots_on_task operational_robots(::fleet_interfaces::srv::GetFleetStatus_Response::_operational_robots_type arg)
  {
    msg_.operational_robots = std::move(arg);
    return Init_GetFleetStatus_Response_robots_on_task(msg_);
  }

private:
  ::fleet_interfaces::srv::GetFleetStatus_Response msg_;
};

class Init_GetFleetStatus_Response_total_robots
{
public:
  Init_GetFleetStatus_Response_total_robots()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GetFleetStatus_Response_operational_robots total_robots(::fleet_interfaces::srv::GetFleetStatus_Response::_total_robots_type arg)
  {
    msg_.total_robots = std::move(arg);
    return Init_GetFleetStatus_Response_operational_robots(msg_);
  }

private:
  ::fleet_interfaces::srv::GetFleetStatus_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::fleet_interfaces::srv::GetFleetStatus_Response>()
{
  return fleet_interfaces::srv::builder::Init_GetFleetStatus_Response_total_robots();
}

}  // namespace fleet_interfaces

#endif  // FLEET_INTERFACES__SRV__DETAIL__GET_FLEET_STATUS__BUILDER_HPP_
