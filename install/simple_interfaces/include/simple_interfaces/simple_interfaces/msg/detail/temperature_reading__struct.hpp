// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from simple_interfaces:msg/TemperatureReading.idl
// generated code does not contain a copyright notice

#ifndef SIMPLE_INTERFACES__MSG__DETAIL__TEMPERATURE_READING__STRUCT_HPP_
#define SIMPLE_INTERFACES__MSG__DETAIL__TEMPERATURE_READING__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__simple_interfaces__msg__TemperatureReading __attribute__((deprecated))
#else
# define DEPRECATED__simple_interfaces__msg__TemperatureReading __declspec(deprecated)
#endif

namespace simple_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct TemperatureReading_
{
  using Type = TemperatureReading_<ContainerAllocator>;

  explicit TemperatureReading_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->temperature = 0.0f;
      this->sensor_id = "";
    }
  }

  explicit TemperatureReading_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : sensor_id(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->temperature = 0.0f;
      this->sensor_id = "";
    }
  }

  // field types and members
  using _temperature_type =
    float;
  _temperature_type temperature;
  using _sensor_id_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _sensor_id_type sensor_id;

  // setters for named parameter idiom
  Type & set__temperature(
    const float & _arg)
  {
    this->temperature = _arg;
    return *this;
  }
  Type & set__sensor_id(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->sensor_id = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    simple_interfaces::msg::TemperatureReading_<ContainerAllocator> *;
  using ConstRawPtr =
    const simple_interfaces::msg::TemperatureReading_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<simple_interfaces::msg::TemperatureReading_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<simple_interfaces::msg::TemperatureReading_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      simple_interfaces::msg::TemperatureReading_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<simple_interfaces::msg::TemperatureReading_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      simple_interfaces::msg::TemperatureReading_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<simple_interfaces::msg::TemperatureReading_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<simple_interfaces::msg::TemperatureReading_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<simple_interfaces::msg::TemperatureReading_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__simple_interfaces__msg__TemperatureReading
    std::shared_ptr<simple_interfaces::msg::TemperatureReading_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__simple_interfaces__msg__TemperatureReading
    std::shared_ptr<simple_interfaces::msg::TemperatureReading_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TemperatureReading_ & other) const
  {
    if (this->temperature != other.temperature) {
      return false;
    }
    if (this->sensor_id != other.sensor_id) {
      return false;
    }
    return true;
  }
  bool operator!=(const TemperatureReading_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TemperatureReading_

// alias to use template instance with default allocator
using TemperatureReading =
  simple_interfaces::msg::TemperatureReading_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace simple_interfaces

#endif  // SIMPLE_INTERFACES__MSG__DETAIL__TEMPERATURE_READING__STRUCT_HPP_
