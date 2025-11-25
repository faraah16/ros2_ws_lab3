// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from fleet_interfaces:srv/AssignTask.idl
// generated code does not contain a copyright notice

#ifndef FLEET_INTERFACES__SRV__DETAIL__ASSIGN_TASK__STRUCT_HPP_
#define FLEET_INTERFACES__SRV__DETAIL__ASSIGN_TASK__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'waypoints'
#include "geometry_msgs/msg/detail/point__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__fleet_interfaces__srv__AssignTask_Request __attribute__((deprecated))
#else
# define DEPRECATED__fleet_interfaces__srv__AssignTask_Request __declspec(deprecated)
#endif

namespace fleet_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct AssignTask_Request_
{
  using Type = AssignTask_Request_<ContainerAllocator>;

  explicit AssignTask_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->robot_id = "";
      this->task_id = "";
      this->task_type = "";
      this->max_velocity = 0.0f;
      this->estimated_duration = 0.0f;
    }
  }

  explicit AssignTask_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : robot_id(_alloc),
    task_id(_alloc),
    task_type(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->robot_id = "";
      this->task_id = "";
      this->task_type = "";
      this->max_velocity = 0.0f;
      this->estimated_duration = 0.0f;
    }
  }

  // field types and members
  using _robot_id_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _robot_id_type robot_id;
  using _task_id_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _task_id_type task_id;
  using _task_type_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _task_type_type task_type;
  using _waypoints_type =
    std::vector<geometry_msgs::msg::Point_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<geometry_msgs::msg::Point_<ContainerAllocator>>>;
  _waypoints_type waypoints;
  using _max_velocity_type =
    float;
  _max_velocity_type max_velocity;
  using _estimated_duration_type =
    float;
  _estimated_duration_type estimated_duration;
  using _required_capabilities_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>>;
  _required_capabilities_type required_capabilities;

  // setters for named parameter idiom
  Type & set__robot_id(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->robot_id = _arg;
    return *this;
  }
  Type & set__task_id(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->task_id = _arg;
    return *this;
  }
  Type & set__task_type(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->task_type = _arg;
    return *this;
  }
  Type & set__waypoints(
    const std::vector<geometry_msgs::msg::Point_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<geometry_msgs::msg::Point_<ContainerAllocator>>> & _arg)
  {
    this->waypoints = _arg;
    return *this;
  }
  Type & set__max_velocity(
    const float & _arg)
  {
    this->max_velocity = _arg;
    return *this;
  }
  Type & set__estimated_duration(
    const float & _arg)
  {
    this->estimated_duration = _arg;
    return *this;
  }
  Type & set__required_capabilities(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>> & _arg)
  {
    this->required_capabilities = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    fleet_interfaces::srv::AssignTask_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const fleet_interfaces::srv::AssignTask_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<fleet_interfaces::srv::AssignTask_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<fleet_interfaces::srv::AssignTask_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      fleet_interfaces::srv::AssignTask_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<fleet_interfaces::srv::AssignTask_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      fleet_interfaces::srv::AssignTask_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<fleet_interfaces::srv::AssignTask_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<fleet_interfaces::srv::AssignTask_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<fleet_interfaces::srv::AssignTask_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__fleet_interfaces__srv__AssignTask_Request
    std::shared_ptr<fleet_interfaces::srv::AssignTask_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__fleet_interfaces__srv__AssignTask_Request
    std::shared_ptr<fleet_interfaces::srv::AssignTask_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const AssignTask_Request_ & other) const
  {
    if (this->robot_id != other.robot_id) {
      return false;
    }
    if (this->task_id != other.task_id) {
      return false;
    }
    if (this->task_type != other.task_type) {
      return false;
    }
    if (this->waypoints != other.waypoints) {
      return false;
    }
    if (this->max_velocity != other.max_velocity) {
      return false;
    }
    if (this->estimated_duration != other.estimated_duration) {
      return false;
    }
    if (this->required_capabilities != other.required_capabilities) {
      return false;
    }
    return true;
  }
  bool operator!=(const AssignTask_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct AssignTask_Request_

// alias to use template instance with default allocator
using AssignTask_Request =
  fleet_interfaces::srv::AssignTask_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace fleet_interfaces


#ifndef _WIN32
# define DEPRECATED__fleet_interfaces__srv__AssignTask_Response __attribute__((deprecated))
#else
# define DEPRECATED__fleet_interfaces__srv__AssignTask_Response __declspec(deprecated)
#endif

namespace fleet_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct AssignTask_Response_
{
  using Type = AssignTask_Response_<ContainerAllocator>;

  explicit AssignTask_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->message = "";
      this->assigned_robot_id = "";
      this->estimated_completion_time = 0.0f;
    }
  }

  explicit AssignTask_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : message(_alloc),
    assigned_robot_id(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->message = "";
      this->assigned_robot_id = "";
      this->estimated_completion_time = 0.0f;
    }
  }

  // field types and members
  using _success_type =
    bool;
  _success_type success;
  using _message_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _message_type message;
  using _assigned_robot_id_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _assigned_robot_id_type assigned_robot_id;
  using _estimated_completion_time_type =
    float;
  _estimated_completion_time_type estimated_completion_time;

  // setters for named parameter idiom
  Type & set__success(
    const bool & _arg)
  {
    this->success = _arg;
    return *this;
  }
  Type & set__message(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->message = _arg;
    return *this;
  }
  Type & set__assigned_robot_id(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->assigned_robot_id = _arg;
    return *this;
  }
  Type & set__estimated_completion_time(
    const float & _arg)
  {
    this->estimated_completion_time = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    fleet_interfaces::srv::AssignTask_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const fleet_interfaces::srv::AssignTask_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<fleet_interfaces::srv::AssignTask_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<fleet_interfaces::srv::AssignTask_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      fleet_interfaces::srv::AssignTask_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<fleet_interfaces::srv::AssignTask_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      fleet_interfaces::srv::AssignTask_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<fleet_interfaces::srv::AssignTask_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<fleet_interfaces::srv::AssignTask_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<fleet_interfaces::srv::AssignTask_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__fleet_interfaces__srv__AssignTask_Response
    std::shared_ptr<fleet_interfaces::srv::AssignTask_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__fleet_interfaces__srv__AssignTask_Response
    std::shared_ptr<fleet_interfaces::srv::AssignTask_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const AssignTask_Response_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    if (this->message != other.message) {
      return false;
    }
    if (this->assigned_robot_id != other.assigned_robot_id) {
      return false;
    }
    if (this->estimated_completion_time != other.estimated_completion_time) {
      return false;
    }
    return true;
  }
  bool operator!=(const AssignTask_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct AssignTask_Response_

// alias to use template instance with default allocator
using AssignTask_Response =
  fleet_interfaces::srv::AssignTask_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace fleet_interfaces

namespace fleet_interfaces
{

namespace srv
{

struct AssignTask
{
  using Request = fleet_interfaces::srv::AssignTask_Request;
  using Response = fleet_interfaces::srv::AssignTask_Response;
};

}  // namespace srv

}  // namespace fleet_interfaces

#endif  // FLEET_INTERFACES__SRV__DETAIL__ASSIGN_TASK__STRUCT_HPP_
