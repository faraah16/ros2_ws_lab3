// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from fleet_interfaces:msg/FleetCommand.idl
// generated code does not contain a copyright notice

#ifndef FLEET_INTERFACES__MSG__DETAIL__FLEET_COMMAND__STRUCT_HPP_
#define FLEET_INTERFACES__MSG__DETAIL__FLEET_COMMAND__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'timestamp'
#include "builtin_interfaces/msg/detail/time__struct.hpp"
// Member 'target_position'
#include "geometry_msgs/msg/detail/point__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__fleet_interfaces__msg__FleetCommand __attribute__((deprecated))
#else
# define DEPRECATED__fleet_interfaces__msg__FleetCommand __declspec(deprecated)
#endif

namespace fleet_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct FleetCommand_
{
  using Type = FleetCommand_<ContainerAllocator>;

  explicit FleetCommand_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : timestamp(_init),
    target_position(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->command_id = "";
      this->robot_type_filter = "";
      this->command_type = "";
      this->task_description = "";
      this->priority = 0;
      this->max_velocity = 0.0f;
      this->timeout = 0.0f;
      this->allow_interruption = false;
    }
  }

  explicit FleetCommand_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : command_id(_alloc),
    timestamp(_alloc, _init),
    robot_type_filter(_alloc),
    command_type(_alloc),
    target_position(_alloc, _init),
    task_description(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->command_id = "";
      this->robot_type_filter = "";
      this->command_type = "";
      this->task_description = "";
      this->priority = 0;
      this->max_velocity = 0.0f;
      this->timeout = 0.0f;
      this->allow_interruption = false;
    }
  }

  // field types and members
  using _command_id_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _command_id_type command_id;
  using _timestamp_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _timestamp_type timestamp;
  using _target_robot_ids_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>>;
  _target_robot_ids_type target_robot_ids;
  using _robot_type_filter_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _robot_type_filter_type robot_type_filter;
  using _command_type_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _command_type_type command_type;
  using _target_position_type =
    geometry_msgs::msg::Point_<ContainerAllocator>;
  _target_position_type target_position;
  using _task_description_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _task_description_type task_description;
  using _priority_type =
    uint8_t;
  _priority_type priority;
  using _max_velocity_type =
    float;
  _max_velocity_type max_velocity;
  using _timeout_type =
    float;
  _timeout_type timeout;
  using _allow_interruption_type =
    bool;
  _allow_interruption_type allow_interruption;

  // setters for named parameter idiom
  Type & set__command_id(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->command_id = _arg;
    return *this;
  }
  Type & set__timestamp(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->timestamp = _arg;
    return *this;
  }
  Type & set__target_robot_ids(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>> & _arg)
  {
    this->target_robot_ids = _arg;
    return *this;
  }
  Type & set__robot_type_filter(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->robot_type_filter = _arg;
    return *this;
  }
  Type & set__command_type(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->command_type = _arg;
    return *this;
  }
  Type & set__target_position(
    const geometry_msgs::msg::Point_<ContainerAllocator> & _arg)
  {
    this->target_position = _arg;
    return *this;
  }
  Type & set__task_description(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->task_description = _arg;
    return *this;
  }
  Type & set__priority(
    const uint8_t & _arg)
  {
    this->priority = _arg;
    return *this;
  }
  Type & set__max_velocity(
    const float & _arg)
  {
    this->max_velocity = _arg;
    return *this;
  }
  Type & set__timeout(
    const float & _arg)
  {
    this->timeout = _arg;
    return *this;
  }
  Type & set__allow_interruption(
    const bool & _arg)
  {
    this->allow_interruption = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    fleet_interfaces::msg::FleetCommand_<ContainerAllocator> *;
  using ConstRawPtr =
    const fleet_interfaces::msg::FleetCommand_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<fleet_interfaces::msg::FleetCommand_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<fleet_interfaces::msg::FleetCommand_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      fleet_interfaces::msg::FleetCommand_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<fleet_interfaces::msg::FleetCommand_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      fleet_interfaces::msg::FleetCommand_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<fleet_interfaces::msg::FleetCommand_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<fleet_interfaces::msg::FleetCommand_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<fleet_interfaces::msg::FleetCommand_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__fleet_interfaces__msg__FleetCommand
    std::shared_ptr<fleet_interfaces::msg::FleetCommand_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__fleet_interfaces__msg__FleetCommand
    std::shared_ptr<fleet_interfaces::msg::FleetCommand_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const FleetCommand_ & other) const
  {
    if (this->command_id != other.command_id) {
      return false;
    }
    if (this->timestamp != other.timestamp) {
      return false;
    }
    if (this->target_robot_ids != other.target_robot_ids) {
      return false;
    }
    if (this->robot_type_filter != other.robot_type_filter) {
      return false;
    }
    if (this->command_type != other.command_type) {
      return false;
    }
    if (this->target_position != other.target_position) {
      return false;
    }
    if (this->task_description != other.task_description) {
      return false;
    }
    if (this->priority != other.priority) {
      return false;
    }
    if (this->max_velocity != other.max_velocity) {
      return false;
    }
    if (this->timeout != other.timeout) {
      return false;
    }
    if (this->allow_interruption != other.allow_interruption) {
      return false;
    }
    return true;
  }
  bool operator!=(const FleetCommand_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct FleetCommand_

// alias to use template instance with default allocator
using FleetCommand =
  fleet_interfaces::msg::FleetCommand_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace fleet_interfaces

#endif  // FLEET_INTERFACES__MSG__DETAIL__FLEET_COMMAND__STRUCT_HPP_
