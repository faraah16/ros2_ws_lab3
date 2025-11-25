// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from fleet_interfaces:srv/GetFleetStatus.idl
// generated code does not contain a copyright notice

#ifndef FLEET_INTERFACES__SRV__DETAIL__GET_FLEET_STATUS__STRUCT_HPP_
#define FLEET_INTERFACES__SRV__DETAIL__GET_FLEET_STATUS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__fleet_interfaces__srv__GetFleetStatus_Request __attribute__((deprecated))
#else
# define DEPRECATED__fleet_interfaces__srv__GetFleetStatus_Request __declspec(deprecated)
#endif

namespace fleet_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GetFleetStatus_Request_
{
  using Type = GetFleetStatus_Request_<ContainerAllocator>;

  explicit GetFleetStatus_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->include_offline_robots = false;
      this->robot_type_filter = "";
    }
  }

  explicit GetFleetStatus_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : robot_type_filter(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->include_offline_robots = false;
      this->robot_type_filter = "";
    }
  }

  // field types and members
  using _include_offline_robots_type =
    bool;
  _include_offline_robots_type include_offline_robots;
  using _robot_type_filter_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _robot_type_filter_type robot_type_filter;

  // setters for named parameter idiom
  Type & set__include_offline_robots(
    const bool & _arg)
  {
    this->include_offline_robots = _arg;
    return *this;
  }
  Type & set__robot_type_filter(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->robot_type_filter = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    fleet_interfaces::srv::GetFleetStatus_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const fleet_interfaces::srv::GetFleetStatus_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<fleet_interfaces::srv::GetFleetStatus_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<fleet_interfaces::srv::GetFleetStatus_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      fleet_interfaces::srv::GetFleetStatus_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<fleet_interfaces::srv::GetFleetStatus_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      fleet_interfaces::srv::GetFleetStatus_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<fleet_interfaces::srv::GetFleetStatus_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<fleet_interfaces::srv::GetFleetStatus_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<fleet_interfaces::srv::GetFleetStatus_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__fleet_interfaces__srv__GetFleetStatus_Request
    std::shared_ptr<fleet_interfaces::srv::GetFleetStatus_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__fleet_interfaces__srv__GetFleetStatus_Request
    std::shared_ptr<fleet_interfaces::srv::GetFleetStatus_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetFleetStatus_Request_ & other) const
  {
    if (this->include_offline_robots != other.include_offline_robots) {
      return false;
    }
    if (this->robot_type_filter != other.robot_type_filter) {
      return false;
    }
    return true;
  }
  bool operator!=(const GetFleetStatus_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetFleetStatus_Request_

// alias to use template instance with default allocator
using GetFleetStatus_Request =
  fleet_interfaces::srv::GetFleetStatus_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace fleet_interfaces


#ifndef _WIN32
# define DEPRECATED__fleet_interfaces__srv__GetFleetStatus_Response __attribute__((deprecated))
#else
# define DEPRECATED__fleet_interfaces__srv__GetFleetStatus_Response __declspec(deprecated)
#endif

namespace fleet_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GetFleetStatus_Response_
{
  using Type = GetFleetStatus_Response_<ContainerAllocator>;

  explicit GetFleetStatus_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->total_robots = 0ul;
      this->operational_robots = 0ul;
      this->robots_on_task = 0ul;
      this->robots_charging = 0ul;
      this->robots_with_errors = 0ul;
      this->average_battery_level = 0.0f;
    }
  }

  explicit GetFleetStatus_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->total_robots = 0ul;
      this->operational_robots = 0ul;
      this->robots_on_task = 0ul;
      this->robots_charging = 0ul;
      this->robots_with_errors = 0ul;
      this->average_battery_level = 0.0f;
    }
  }

  // field types and members
  using _total_robots_type =
    uint32_t;
  _total_robots_type total_robots;
  using _operational_robots_type =
    uint32_t;
  _operational_robots_type operational_robots;
  using _robots_on_task_type =
    uint32_t;
  _robots_on_task_type robots_on_task;
  using _robots_charging_type =
    uint32_t;
  _robots_charging_type robots_charging;
  using _robots_with_errors_type =
    uint32_t;
  _robots_with_errors_type robots_with_errors;
  using _robot_ids_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>>;
  _robot_ids_type robot_ids;
  using _average_battery_level_type =
    float;
  _average_battery_level_type average_battery_level;

  // setters for named parameter idiom
  Type & set__total_robots(
    const uint32_t & _arg)
  {
    this->total_robots = _arg;
    return *this;
  }
  Type & set__operational_robots(
    const uint32_t & _arg)
  {
    this->operational_robots = _arg;
    return *this;
  }
  Type & set__robots_on_task(
    const uint32_t & _arg)
  {
    this->robots_on_task = _arg;
    return *this;
  }
  Type & set__robots_charging(
    const uint32_t & _arg)
  {
    this->robots_charging = _arg;
    return *this;
  }
  Type & set__robots_with_errors(
    const uint32_t & _arg)
  {
    this->robots_with_errors = _arg;
    return *this;
  }
  Type & set__robot_ids(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>> & _arg)
  {
    this->robot_ids = _arg;
    return *this;
  }
  Type & set__average_battery_level(
    const float & _arg)
  {
    this->average_battery_level = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    fleet_interfaces::srv::GetFleetStatus_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const fleet_interfaces::srv::GetFleetStatus_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<fleet_interfaces::srv::GetFleetStatus_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<fleet_interfaces::srv::GetFleetStatus_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      fleet_interfaces::srv::GetFleetStatus_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<fleet_interfaces::srv::GetFleetStatus_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      fleet_interfaces::srv::GetFleetStatus_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<fleet_interfaces::srv::GetFleetStatus_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<fleet_interfaces::srv::GetFleetStatus_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<fleet_interfaces::srv::GetFleetStatus_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__fleet_interfaces__srv__GetFleetStatus_Response
    std::shared_ptr<fleet_interfaces::srv::GetFleetStatus_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__fleet_interfaces__srv__GetFleetStatus_Response
    std::shared_ptr<fleet_interfaces::srv::GetFleetStatus_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetFleetStatus_Response_ & other) const
  {
    if (this->total_robots != other.total_robots) {
      return false;
    }
    if (this->operational_robots != other.operational_robots) {
      return false;
    }
    if (this->robots_on_task != other.robots_on_task) {
      return false;
    }
    if (this->robots_charging != other.robots_charging) {
      return false;
    }
    if (this->robots_with_errors != other.robots_with_errors) {
      return false;
    }
    if (this->robot_ids != other.robot_ids) {
      return false;
    }
    if (this->average_battery_level != other.average_battery_level) {
      return false;
    }
    return true;
  }
  bool operator!=(const GetFleetStatus_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetFleetStatus_Response_

// alias to use template instance with default allocator
using GetFleetStatus_Response =
  fleet_interfaces::srv::GetFleetStatus_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace fleet_interfaces

namespace fleet_interfaces
{

namespace srv
{

struct GetFleetStatus
{
  using Request = fleet_interfaces::srv::GetFleetStatus_Request;
  using Response = fleet_interfaces::srv::GetFleetStatus_Response;
};

}  // namespace srv

}  // namespace fleet_interfaces

#endif  // FLEET_INTERFACES__SRV__DETAIL__GET_FLEET_STATUS__STRUCT_HPP_
