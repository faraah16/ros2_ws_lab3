// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from fleet_interfaces:msg/FleetCommand.idl
// generated code does not contain a copyright notice

#ifndef FLEET_INTERFACES__MSG__DETAIL__FLEET_COMMAND__BUILDER_HPP_
#define FLEET_INTERFACES__MSG__DETAIL__FLEET_COMMAND__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "fleet_interfaces/msg/detail/fleet_command__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace fleet_interfaces
{

namespace msg
{

namespace builder
{

class Init_FleetCommand_allow_interruption
{
public:
  explicit Init_FleetCommand_allow_interruption(::fleet_interfaces::msg::FleetCommand & msg)
  : msg_(msg)
  {}
  ::fleet_interfaces::msg::FleetCommand allow_interruption(::fleet_interfaces::msg::FleetCommand::_allow_interruption_type arg)
  {
    msg_.allow_interruption = std::move(arg);
    return std::move(msg_);
  }

private:
  ::fleet_interfaces::msg::FleetCommand msg_;
};

class Init_FleetCommand_timeout
{
public:
  explicit Init_FleetCommand_timeout(::fleet_interfaces::msg::FleetCommand & msg)
  : msg_(msg)
  {}
  Init_FleetCommand_allow_interruption timeout(::fleet_interfaces::msg::FleetCommand::_timeout_type arg)
  {
    msg_.timeout = std::move(arg);
    return Init_FleetCommand_allow_interruption(msg_);
  }

private:
  ::fleet_interfaces::msg::FleetCommand msg_;
};

class Init_FleetCommand_max_velocity
{
public:
  explicit Init_FleetCommand_max_velocity(::fleet_interfaces::msg::FleetCommand & msg)
  : msg_(msg)
  {}
  Init_FleetCommand_timeout max_velocity(::fleet_interfaces::msg::FleetCommand::_max_velocity_type arg)
  {
    msg_.max_velocity = std::move(arg);
    return Init_FleetCommand_timeout(msg_);
  }

private:
  ::fleet_interfaces::msg::FleetCommand msg_;
};

class Init_FleetCommand_priority
{
public:
  explicit Init_FleetCommand_priority(::fleet_interfaces::msg::FleetCommand & msg)
  : msg_(msg)
  {}
  Init_FleetCommand_max_velocity priority(::fleet_interfaces::msg::FleetCommand::_priority_type arg)
  {
    msg_.priority = std::move(arg);
    return Init_FleetCommand_max_velocity(msg_);
  }

private:
  ::fleet_interfaces::msg::FleetCommand msg_;
};

class Init_FleetCommand_task_description
{
public:
  explicit Init_FleetCommand_task_description(::fleet_interfaces::msg::FleetCommand & msg)
  : msg_(msg)
  {}
  Init_FleetCommand_priority task_description(::fleet_interfaces::msg::FleetCommand::_task_description_type arg)
  {
    msg_.task_description = std::move(arg);
    return Init_FleetCommand_priority(msg_);
  }

private:
  ::fleet_interfaces::msg::FleetCommand msg_;
};

class Init_FleetCommand_target_position
{
public:
  explicit Init_FleetCommand_target_position(::fleet_interfaces::msg::FleetCommand & msg)
  : msg_(msg)
  {}
  Init_FleetCommand_task_description target_position(::fleet_interfaces::msg::FleetCommand::_target_position_type arg)
  {
    msg_.target_position = std::move(arg);
    return Init_FleetCommand_task_description(msg_);
  }

private:
  ::fleet_interfaces::msg::FleetCommand msg_;
};

class Init_FleetCommand_command_type
{
public:
  explicit Init_FleetCommand_command_type(::fleet_interfaces::msg::FleetCommand & msg)
  : msg_(msg)
  {}
  Init_FleetCommand_target_position command_type(::fleet_interfaces::msg::FleetCommand::_command_type_type arg)
  {
    msg_.command_type = std::move(arg);
    return Init_FleetCommand_target_position(msg_);
  }

private:
  ::fleet_interfaces::msg::FleetCommand msg_;
};

class Init_FleetCommand_robot_type_filter
{
public:
  explicit Init_FleetCommand_robot_type_filter(::fleet_interfaces::msg::FleetCommand & msg)
  : msg_(msg)
  {}
  Init_FleetCommand_command_type robot_type_filter(::fleet_interfaces::msg::FleetCommand::_robot_type_filter_type arg)
  {
    msg_.robot_type_filter = std::move(arg);
    return Init_FleetCommand_command_type(msg_);
  }

private:
  ::fleet_interfaces::msg::FleetCommand msg_;
};

class Init_FleetCommand_target_robot_ids
{
public:
  explicit Init_FleetCommand_target_robot_ids(::fleet_interfaces::msg::FleetCommand & msg)
  : msg_(msg)
  {}
  Init_FleetCommand_robot_type_filter target_robot_ids(::fleet_interfaces::msg::FleetCommand::_target_robot_ids_type arg)
  {
    msg_.target_robot_ids = std::move(arg);
    return Init_FleetCommand_robot_type_filter(msg_);
  }

private:
  ::fleet_interfaces::msg::FleetCommand msg_;
};

class Init_FleetCommand_timestamp
{
public:
  explicit Init_FleetCommand_timestamp(::fleet_interfaces::msg::FleetCommand & msg)
  : msg_(msg)
  {}
  Init_FleetCommand_target_robot_ids timestamp(::fleet_interfaces::msg::FleetCommand::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_FleetCommand_target_robot_ids(msg_);
  }

private:
  ::fleet_interfaces::msg::FleetCommand msg_;
};

class Init_FleetCommand_command_id
{
public:
  Init_FleetCommand_command_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_FleetCommand_timestamp command_id(::fleet_interfaces::msg::FleetCommand::_command_id_type arg)
  {
    msg_.command_id = std::move(arg);
    return Init_FleetCommand_timestamp(msg_);
  }

private:
  ::fleet_interfaces::msg::FleetCommand msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::fleet_interfaces::msg::FleetCommand>()
{
  return fleet_interfaces::msg::builder::Init_FleetCommand_command_id();
}

}  // namespace fleet_interfaces

#endif  // FLEET_INTERFACES__MSG__DETAIL__FLEET_COMMAND__BUILDER_HPP_
