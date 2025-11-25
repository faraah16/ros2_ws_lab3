// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from fleet_interfaces:srv/AssignTask.idl
// generated code does not contain a copyright notice

#ifndef FLEET_INTERFACES__SRV__DETAIL__ASSIGN_TASK__BUILDER_HPP_
#define FLEET_INTERFACES__SRV__DETAIL__ASSIGN_TASK__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "fleet_interfaces/srv/detail/assign_task__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace fleet_interfaces
{

namespace srv
{

namespace builder
{

class Init_AssignTask_Request_required_capabilities
{
public:
  explicit Init_AssignTask_Request_required_capabilities(::fleet_interfaces::srv::AssignTask_Request & msg)
  : msg_(msg)
  {}
  ::fleet_interfaces::srv::AssignTask_Request required_capabilities(::fleet_interfaces::srv::AssignTask_Request::_required_capabilities_type arg)
  {
    msg_.required_capabilities = std::move(arg);
    return std::move(msg_);
  }

private:
  ::fleet_interfaces::srv::AssignTask_Request msg_;
};

class Init_AssignTask_Request_estimated_duration
{
public:
  explicit Init_AssignTask_Request_estimated_duration(::fleet_interfaces::srv::AssignTask_Request & msg)
  : msg_(msg)
  {}
  Init_AssignTask_Request_required_capabilities estimated_duration(::fleet_interfaces::srv::AssignTask_Request::_estimated_duration_type arg)
  {
    msg_.estimated_duration = std::move(arg);
    return Init_AssignTask_Request_required_capabilities(msg_);
  }

private:
  ::fleet_interfaces::srv::AssignTask_Request msg_;
};

class Init_AssignTask_Request_max_velocity
{
public:
  explicit Init_AssignTask_Request_max_velocity(::fleet_interfaces::srv::AssignTask_Request & msg)
  : msg_(msg)
  {}
  Init_AssignTask_Request_estimated_duration max_velocity(::fleet_interfaces::srv::AssignTask_Request::_max_velocity_type arg)
  {
    msg_.max_velocity = std::move(arg);
    return Init_AssignTask_Request_estimated_duration(msg_);
  }

private:
  ::fleet_interfaces::srv::AssignTask_Request msg_;
};

class Init_AssignTask_Request_waypoints
{
public:
  explicit Init_AssignTask_Request_waypoints(::fleet_interfaces::srv::AssignTask_Request & msg)
  : msg_(msg)
  {}
  Init_AssignTask_Request_max_velocity waypoints(::fleet_interfaces::srv::AssignTask_Request::_waypoints_type arg)
  {
    msg_.waypoints = std::move(arg);
    return Init_AssignTask_Request_max_velocity(msg_);
  }

private:
  ::fleet_interfaces::srv::AssignTask_Request msg_;
};

class Init_AssignTask_Request_task_type
{
public:
  explicit Init_AssignTask_Request_task_type(::fleet_interfaces::srv::AssignTask_Request & msg)
  : msg_(msg)
  {}
  Init_AssignTask_Request_waypoints task_type(::fleet_interfaces::srv::AssignTask_Request::_task_type_type arg)
  {
    msg_.task_type = std::move(arg);
    return Init_AssignTask_Request_waypoints(msg_);
  }

private:
  ::fleet_interfaces::srv::AssignTask_Request msg_;
};

class Init_AssignTask_Request_task_id
{
public:
  explicit Init_AssignTask_Request_task_id(::fleet_interfaces::srv::AssignTask_Request & msg)
  : msg_(msg)
  {}
  Init_AssignTask_Request_task_type task_id(::fleet_interfaces::srv::AssignTask_Request::_task_id_type arg)
  {
    msg_.task_id = std::move(arg);
    return Init_AssignTask_Request_task_type(msg_);
  }

private:
  ::fleet_interfaces::srv::AssignTask_Request msg_;
};

class Init_AssignTask_Request_robot_id
{
public:
  Init_AssignTask_Request_robot_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AssignTask_Request_task_id robot_id(::fleet_interfaces::srv::AssignTask_Request::_robot_id_type arg)
  {
    msg_.robot_id = std::move(arg);
    return Init_AssignTask_Request_task_id(msg_);
  }

private:
  ::fleet_interfaces::srv::AssignTask_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::fleet_interfaces::srv::AssignTask_Request>()
{
  return fleet_interfaces::srv::builder::Init_AssignTask_Request_robot_id();
}

}  // namespace fleet_interfaces


namespace fleet_interfaces
{

namespace srv
{

namespace builder
{

class Init_AssignTask_Response_estimated_completion_time
{
public:
  explicit Init_AssignTask_Response_estimated_completion_time(::fleet_interfaces::srv::AssignTask_Response & msg)
  : msg_(msg)
  {}
  ::fleet_interfaces::srv::AssignTask_Response estimated_completion_time(::fleet_interfaces::srv::AssignTask_Response::_estimated_completion_time_type arg)
  {
    msg_.estimated_completion_time = std::move(arg);
    return std::move(msg_);
  }

private:
  ::fleet_interfaces::srv::AssignTask_Response msg_;
};

class Init_AssignTask_Response_assigned_robot_id
{
public:
  explicit Init_AssignTask_Response_assigned_robot_id(::fleet_interfaces::srv::AssignTask_Response & msg)
  : msg_(msg)
  {}
  Init_AssignTask_Response_estimated_completion_time assigned_robot_id(::fleet_interfaces::srv::AssignTask_Response::_assigned_robot_id_type arg)
  {
    msg_.assigned_robot_id = std::move(arg);
    return Init_AssignTask_Response_estimated_completion_time(msg_);
  }

private:
  ::fleet_interfaces::srv::AssignTask_Response msg_;
};

class Init_AssignTask_Response_message
{
public:
  explicit Init_AssignTask_Response_message(::fleet_interfaces::srv::AssignTask_Response & msg)
  : msg_(msg)
  {}
  Init_AssignTask_Response_assigned_robot_id message(::fleet_interfaces::srv::AssignTask_Response::_message_type arg)
  {
    msg_.message = std::move(arg);
    return Init_AssignTask_Response_assigned_robot_id(msg_);
  }

private:
  ::fleet_interfaces::srv::AssignTask_Response msg_;
};

class Init_AssignTask_Response_success
{
public:
  Init_AssignTask_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AssignTask_Response_message success(::fleet_interfaces::srv::AssignTask_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_AssignTask_Response_message(msg_);
  }

private:
  ::fleet_interfaces::srv::AssignTask_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::fleet_interfaces::srv::AssignTask_Response>()
{
  return fleet_interfaces::srv::builder::Init_AssignTask_Response_success();
}

}  // namespace fleet_interfaces

#endif  // FLEET_INTERFACES__SRV__DETAIL__ASSIGN_TASK__BUILDER_HPP_
