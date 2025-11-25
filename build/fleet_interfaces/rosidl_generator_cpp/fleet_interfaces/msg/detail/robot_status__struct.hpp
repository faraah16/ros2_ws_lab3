// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from fleet_interfaces:msg/RobotStatus.idl
// generated code does not contain a copyright notice

#ifndef FLEET_INTERFACES__MSG__DETAIL__ROBOT_STATUS__STRUCT_HPP_
#define FLEET_INTERFACES__MSG__DETAIL__ROBOT_STATUS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.hpp"
// Member 'pose'
#include "geometry_msgs/msg/detail/pose__struct.hpp"
// Member 'velocity'
#include "geometry_msgs/msg/detail/twist__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__fleet_interfaces__msg__RobotStatus __attribute__((deprecated))
#else
# define DEPRECATED__fleet_interfaces__msg__RobotStatus __declspec(deprecated)
#endif

namespace fleet_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct RobotStatus_
{
  using Type = RobotStatus_<ContainerAllocator>;

  explicit RobotStatus_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    pose(_init),
    velocity(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->robot_id = "";
      this->robot_type = "";
      this->location = "";
      this->battery_voltage = 0.0f;
      this->battery_current = 0.0f;
      this->battery_percentage = 0;
      this->is_charging = false;
      this->battery_health = "";
      this->current_task_id = "";
      this->task_status = "";
      this->task_progress = 0;
      this->is_operational = false;
      this->cpu_temperature = 0.0f;
      this->network_signal = 0;
      this->distance_traveled = 0.0f;
      this->tasks_completed = 0ul;
    }
  }

  explicit RobotStatus_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    robot_id(_alloc),
    robot_type(_alloc),
    location(_alloc),
    pose(_alloc, _init),
    velocity(_alloc, _init),
    battery_health(_alloc),
    current_task_id(_alloc),
    task_status(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->robot_id = "";
      this->robot_type = "";
      this->location = "";
      this->battery_voltage = 0.0f;
      this->battery_current = 0.0f;
      this->battery_percentage = 0;
      this->is_charging = false;
      this->battery_health = "";
      this->current_task_id = "";
      this->task_status = "";
      this->task_progress = 0;
      this->is_operational = false;
      this->cpu_temperature = 0.0f;
      this->network_signal = 0;
      this->distance_traveled = 0.0f;
      this->tasks_completed = 0ul;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _robot_id_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _robot_id_type robot_id;
  using _robot_type_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _robot_type_type robot_type;
  using _location_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _location_type location;
  using _pose_type =
    geometry_msgs::msg::Pose_<ContainerAllocator>;
  _pose_type pose;
  using _velocity_type =
    geometry_msgs::msg::Twist_<ContainerAllocator>;
  _velocity_type velocity;
  using _battery_voltage_type =
    float;
  _battery_voltage_type battery_voltage;
  using _battery_current_type =
    float;
  _battery_current_type battery_current;
  using _battery_percentage_type =
    uint8_t;
  _battery_percentage_type battery_percentage;
  using _is_charging_type =
    bool;
  _is_charging_type is_charging;
  using _battery_health_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _battery_health_type battery_health;
  using _current_task_id_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _current_task_id_type current_task_id;
  using _task_status_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _task_status_type task_status;
  using _task_progress_type =
    uint8_t;
  _task_progress_type task_progress;
  using _is_operational_type =
    bool;
  _is_operational_type is_operational;
  using _cpu_temperature_type =
    float;
  _cpu_temperature_type cpu_temperature;
  using _network_signal_type =
    uint8_t;
  _network_signal_type network_signal;
  using _active_warnings_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>>;
  _active_warnings_type active_warnings;
  using _active_errors_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>>;
  _active_errors_type active_errors;
  using _distance_traveled_type =
    float;
  _distance_traveled_type distance_traveled;
  using _tasks_completed_type =
    uint32_t;
  _tasks_completed_type tasks_completed;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__robot_id(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->robot_id = _arg;
    return *this;
  }
  Type & set__robot_type(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->robot_type = _arg;
    return *this;
  }
  Type & set__location(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->location = _arg;
    return *this;
  }
  Type & set__pose(
    const geometry_msgs::msg::Pose_<ContainerAllocator> & _arg)
  {
    this->pose = _arg;
    return *this;
  }
  Type & set__velocity(
    const geometry_msgs::msg::Twist_<ContainerAllocator> & _arg)
  {
    this->velocity = _arg;
    return *this;
  }
  Type & set__battery_voltage(
    const float & _arg)
  {
    this->battery_voltage = _arg;
    return *this;
  }
  Type & set__battery_current(
    const float & _arg)
  {
    this->battery_current = _arg;
    return *this;
  }
  Type & set__battery_percentage(
    const uint8_t & _arg)
  {
    this->battery_percentage = _arg;
    return *this;
  }
  Type & set__is_charging(
    const bool & _arg)
  {
    this->is_charging = _arg;
    return *this;
  }
  Type & set__battery_health(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->battery_health = _arg;
    return *this;
  }
  Type & set__current_task_id(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->current_task_id = _arg;
    return *this;
  }
  Type & set__task_status(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->task_status = _arg;
    return *this;
  }
  Type & set__task_progress(
    const uint8_t & _arg)
  {
    this->task_progress = _arg;
    return *this;
  }
  Type & set__is_operational(
    const bool & _arg)
  {
    this->is_operational = _arg;
    return *this;
  }
  Type & set__cpu_temperature(
    const float & _arg)
  {
    this->cpu_temperature = _arg;
    return *this;
  }
  Type & set__network_signal(
    const uint8_t & _arg)
  {
    this->network_signal = _arg;
    return *this;
  }
  Type & set__active_warnings(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>> & _arg)
  {
    this->active_warnings = _arg;
    return *this;
  }
  Type & set__active_errors(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>> & _arg)
  {
    this->active_errors = _arg;
    return *this;
  }
  Type & set__distance_traveled(
    const float & _arg)
  {
    this->distance_traveled = _arg;
    return *this;
  }
  Type & set__tasks_completed(
    const uint32_t & _arg)
  {
    this->tasks_completed = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    fleet_interfaces::msg::RobotStatus_<ContainerAllocator> *;
  using ConstRawPtr =
    const fleet_interfaces::msg::RobotStatus_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<fleet_interfaces::msg::RobotStatus_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<fleet_interfaces::msg::RobotStatus_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      fleet_interfaces::msg::RobotStatus_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<fleet_interfaces::msg::RobotStatus_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      fleet_interfaces::msg::RobotStatus_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<fleet_interfaces::msg::RobotStatus_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<fleet_interfaces::msg::RobotStatus_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<fleet_interfaces::msg::RobotStatus_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__fleet_interfaces__msg__RobotStatus
    std::shared_ptr<fleet_interfaces::msg::RobotStatus_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__fleet_interfaces__msg__RobotStatus
    std::shared_ptr<fleet_interfaces::msg::RobotStatus_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RobotStatus_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->robot_id != other.robot_id) {
      return false;
    }
    if (this->robot_type != other.robot_type) {
      return false;
    }
    if (this->location != other.location) {
      return false;
    }
    if (this->pose != other.pose) {
      return false;
    }
    if (this->velocity != other.velocity) {
      return false;
    }
    if (this->battery_voltage != other.battery_voltage) {
      return false;
    }
    if (this->battery_current != other.battery_current) {
      return false;
    }
    if (this->battery_percentage != other.battery_percentage) {
      return false;
    }
    if (this->is_charging != other.is_charging) {
      return false;
    }
    if (this->battery_health != other.battery_health) {
      return false;
    }
    if (this->current_task_id != other.current_task_id) {
      return false;
    }
    if (this->task_status != other.task_status) {
      return false;
    }
    if (this->task_progress != other.task_progress) {
      return false;
    }
    if (this->is_operational != other.is_operational) {
      return false;
    }
    if (this->cpu_temperature != other.cpu_temperature) {
      return false;
    }
    if (this->network_signal != other.network_signal) {
      return false;
    }
    if (this->active_warnings != other.active_warnings) {
      return false;
    }
    if (this->active_errors != other.active_errors) {
      return false;
    }
    if (this->distance_traveled != other.distance_traveled) {
      return false;
    }
    if (this->tasks_completed != other.tasks_completed) {
      return false;
    }
    return true;
  }
  bool operator!=(const RobotStatus_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RobotStatus_

// alias to use template instance with default allocator
using RobotStatus =
  fleet_interfaces::msg::RobotStatus_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace fleet_interfaces

#endif  // FLEET_INTERFACES__MSG__DETAIL__ROBOT_STATUS__STRUCT_HPP_
