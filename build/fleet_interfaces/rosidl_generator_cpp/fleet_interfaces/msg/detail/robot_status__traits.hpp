// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from fleet_interfaces:msg/RobotStatus.idl
// generated code does not contain a copyright notice

#ifndef FLEET_INTERFACES__MSG__DETAIL__ROBOT_STATUS__TRAITS_HPP_
#define FLEET_INTERFACES__MSG__DETAIL__ROBOT_STATUS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "fleet_interfaces/msg/detail/robot_status__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'pose'
#include "geometry_msgs/msg/detail/pose__traits.hpp"
// Member 'velocity'
#include "geometry_msgs/msg/detail/twist__traits.hpp"

namespace fleet_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const RobotStatus & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: robot_id
  {
    out << "robot_id: ";
    rosidl_generator_traits::value_to_yaml(msg.robot_id, out);
    out << ", ";
  }

  // member: robot_type
  {
    out << "robot_type: ";
    rosidl_generator_traits::value_to_yaml(msg.robot_type, out);
    out << ", ";
  }

  // member: location
  {
    out << "location: ";
    rosidl_generator_traits::value_to_yaml(msg.location, out);
    out << ", ";
  }

  // member: pose
  {
    out << "pose: ";
    to_flow_style_yaml(msg.pose, out);
    out << ", ";
  }

  // member: velocity
  {
    out << "velocity: ";
    to_flow_style_yaml(msg.velocity, out);
    out << ", ";
  }

  // member: battery_voltage
  {
    out << "battery_voltage: ";
    rosidl_generator_traits::value_to_yaml(msg.battery_voltage, out);
    out << ", ";
  }

  // member: battery_current
  {
    out << "battery_current: ";
    rosidl_generator_traits::value_to_yaml(msg.battery_current, out);
    out << ", ";
  }

  // member: battery_percentage
  {
    out << "battery_percentage: ";
    rosidl_generator_traits::value_to_yaml(msg.battery_percentage, out);
    out << ", ";
  }

  // member: is_charging
  {
    out << "is_charging: ";
    rosidl_generator_traits::value_to_yaml(msg.is_charging, out);
    out << ", ";
  }

  // member: battery_health
  {
    out << "battery_health: ";
    rosidl_generator_traits::value_to_yaml(msg.battery_health, out);
    out << ", ";
  }

  // member: current_task_id
  {
    out << "current_task_id: ";
    rosidl_generator_traits::value_to_yaml(msg.current_task_id, out);
    out << ", ";
  }

  // member: task_status
  {
    out << "task_status: ";
    rosidl_generator_traits::value_to_yaml(msg.task_status, out);
    out << ", ";
  }

  // member: task_progress
  {
    out << "task_progress: ";
    rosidl_generator_traits::value_to_yaml(msg.task_progress, out);
    out << ", ";
  }

  // member: is_operational
  {
    out << "is_operational: ";
    rosidl_generator_traits::value_to_yaml(msg.is_operational, out);
    out << ", ";
  }

  // member: cpu_temperature
  {
    out << "cpu_temperature: ";
    rosidl_generator_traits::value_to_yaml(msg.cpu_temperature, out);
    out << ", ";
  }

  // member: network_signal
  {
    out << "network_signal: ";
    rosidl_generator_traits::value_to_yaml(msg.network_signal, out);
    out << ", ";
  }

  // member: active_warnings
  {
    if (msg.active_warnings.size() == 0) {
      out << "active_warnings: []";
    } else {
      out << "active_warnings: [";
      size_t pending_items = msg.active_warnings.size();
      for (auto item : msg.active_warnings) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: active_errors
  {
    if (msg.active_errors.size() == 0) {
      out << "active_errors: []";
    } else {
      out << "active_errors: [";
      size_t pending_items = msg.active_errors.size();
      for (auto item : msg.active_errors) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: distance_traveled
  {
    out << "distance_traveled: ";
    rosidl_generator_traits::value_to_yaml(msg.distance_traveled, out);
    out << ", ";
  }

  // member: tasks_completed
  {
    out << "tasks_completed: ";
    rosidl_generator_traits::value_to_yaml(msg.tasks_completed, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const RobotStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: header
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "header:\n";
    to_block_style_yaml(msg.header, out, indentation + 2);
  }

  // member: robot_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "robot_id: ";
    rosidl_generator_traits::value_to_yaml(msg.robot_id, out);
    out << "\n";
  }

  // member: robot_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "robot_type: ";
    rosidl_generator_traits::value_to_yaml(msg.robot_type, out);
    out << "\n";
  }

  // member: location
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "location: ";
    rosidl_generator_traits::value_to_yaml(msg.location, out);
    out << "\n";
  }

  // member: pose
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pose:\n";
    to_block_style_yaml(msg.pose, out, indentation + 2);
  }

  // member: velocity
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "velocity:\n";
    to_block_style_yaml(msg.velocity, out, indentation + 2);
  }

  // member: battery_voltage
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "battery_voltage: ";
    rosidl_generator_traits::value_to_yaml(msg.battery_voltage, out);
    out << "\n";
  }

  // member: battery_current
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "battery_current: ";
    rosidl_generator_traits::value_to_yaml(msg.battery_current, out);
    out << "\n";
  }

  // member: battery_percentage
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "battery_percentage: ";
    rosidl_generator_traits::value_to_yaml(msg.battery_percentage, out);
    out << "\n";
  }

  // member: is_charging
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "is_charging: ";
    rosidl_generator_traits::value_to_yaml(msg.is_charging, out);
    out << "\n";
  }

  // member: battery_health
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "battery_health: ";
    rosidl_generator_traits::value_to_yaml(msg.battery_health, out);
    out << "\n";
  }

  // member: current_task_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "current_task_id: ";
    rosidl_generator_traits::value_to_yaml(msg.current_task_id, out);
    out << "\n";
  }

  // member: task_status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "task_status: ";
    rosidl_generator_traits::value_to_yaml(msg.task_status, out);
    out << "\n";
  }

  // member: task_progress
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "task_progress: ";
    rosidl_generator_traits::value_to_yaml(msg.task_progress, out);
    out << "\n";
  }

  // member: is_operational
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "is_operational: ";
    rosidl_generator_traits::value_to_yaml(msg.is_operational, out);
    out << "\n";
  }

  // member: cpu_temperature
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cpu_temperature: ";
    rosidl_generator_traits::value_to_yaml(msg.cpu_temperature, out);
    out << "\n";
  }

  // member: network_signal
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "network_signal: ";
    rosidl_generator_traits::value_to_yaml(msg.network_signal, out);
    out << "\n";
  }

  // member: active_warnings
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.active_warnings.size() == 0) {
      out << "active_warnings: []\n";
    } else {
      out << "active_warnings:\n";
      for (auto item : msg.active_warnings) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: active_errors
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.active_errors.size() == 0) {
      out << "active_errors: []\n";
    } else {
      out << "active_errors:\n";
      for (auto item : msg.active_errors) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: distance_traveled
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "distance_traveled: ";
    rosidl_generator_traits::value_to_yaml(msg.distance_traveled, out);
    out << "\n";
  }

  // member: tasks_completed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "tasks_completed: ";
    rosidl_generator_traits::value_to_yaml(msg.tasks_completed, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const RobotStatus & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace fleet_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use fleet_interfaces::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const fleet_interfaces::msg::RobotStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  fleet_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use fleet_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const fleet_interfaces::msg::RobotStatus & msg)
{
  return fleet_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<fleet_interfaces::msg::RobotStatus>()
{
  return "fleet_interfaces::msg::RobotStatus";
}

template<>
inline const char * name<fleet_interfaces::msg::RobotStatus>()
{
  return "fleet_interfaces/msg/RobotStatus";
}

template<>
struct has_fixed_size<fleet_interfaces::msg::RobotStatus>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<fleet_interfaces::msg::RobotStatus>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<fleet_interfaces::msg::RobotStatus>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // FLEET_INTERFACES__MSG__DETAIL__ROBOT_STATUS__TRAITS_HPP_
