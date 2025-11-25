// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from fleet_interfaces:msg/FleetCommand.idl
// generated code does not contain a copyright notice

#ifndef FLEET_INTERFACES__MSG__DETAIL__FLEET_COMMAND__TRAITS_HPP_
#define FLEET_INTERFACES__MSG__DETAIL__FLEET_COMMAND__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "fleet_interfaces/msg/detail/fleet_command__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'timestamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"
// Member 'target_position'
#include "geometry_msgs/msg/detail/point__traits.hpp"

namespace fleet_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const FleetCommand & msg,
  std::ostream & out)
{
  out << "{";
  // member: command_id
  {
    out << "command_id: ";
    rosidl_generator_traits::value_to_yaml(msg.command_id, out);
    out << ", ";
  }

  // member: timestamp
  {
    out << "timestamp: ";
    to_flow_style_yaml(msg.timestamp, out);
    out << ", ";
  }

  // member: target_robot_ids
  {
    if (msg.target_robot_ids.size() == 0) {
      out << "target_robot_ids: []";
    } else {
      out << "target_robot_ids: [";
      size_t pending_items = msg.target_robot_ids.size();
      for (auto item : msg.target_robot_ids) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: robot_type_filter
  {
    out << "robot_type_filter: ";
    rosidl_generator_traits::value_to_yaml(msg.robot_type_filter, out);
    out << ", ";
  }

  // member: command_type
  {
    out << "command_type: ";
    rosidl_generator_traits::value_to_yaml(msg.command_type, out);
    out << ", ";
  }

  // member: target_position
  {
    out << "target_position: ";
    to_flow_style_yaml(msg.target_position, out);
    out << ", ";
  }

  // member: task_description
  {
    out << "task_description: ";
    rosidl_generator_traits::value_to_yaml(msg.task_description, out);
    out << ", ";
  }

  // member: priority
  {
    out << "priority: ";
    rosidl_generator_traits::value_to_yaml(msg.priority, out);
    out << ", ";
  }

  // member: max_velocity
  {
    out << "max_velocity: ";
    rosidl_generator_traits::value_to_yaml(msg.max_velocity, out);
    out << ", ";
  }

  // member: timeout
  {
    out << "timeout: ";
    rosidl_generator_traits::value_to_yaml(msg.timeout, out);
    out << ", ";
  }

  // member: allow_interruption
  {
    out << "allow_interruption: ";
    rosidl_generator_traits::value_to_yaml(msg.allow_interruption, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const FleetCommand & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: command_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "command_id: ";
    rosidl_generator_traits::value_to_yaml(msg.command_id, out);
    out << "\n";
  }

  // member: timestamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "timestamp:\n";
    to_block_style_yaml(msg.timestamp, out, indentation + 2);
  }

  // member: target_robot_ids
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.target_robot_ids.size() == 0) {
      out << "target_robot_ids: []\n";
    } else {
      out << "target_robot_ids:\n";
      for (auto item : msg.target_robot_ids) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: robot_type_filter
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "robot_type_filter: ";
    rosidl_generator_traits::value_to_yaml(msg.robot_type_filter, out);
    out << "\n";
  }

  // member: command_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "command_type: ";
    rosidl_generator_traits::value_to_yaml(msg.command_type, out);
    out << "\n";
  }

  // member: target_position
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "target_position:\n";
    to_block_style_yaml(msg.target_position, out, indentation + 2);
  }

  // member: task_description
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "task_description: ";
    rosidl_generator_traits::value_to_yaml(msg.task_description, out);
    out << "\n";
  }

  // member: priority
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "priority: ";
    rosidl_generator_traits::value_to_yaml(msg.priority, out);
    out << "\n";
  }

  // member: max_velocity
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "max_velocity: ";
    rosidl_generator_traits::value_to_yaml(msg.max_velocity, out);
    out << "\n";
  }

  // member: timeout
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "timeout: ";
    rosidl_generator_traits::value_to_yaml(msg.timeout, out);
    out << "\n";
  }

  // member: allow_interruption
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "allow_interruption: ";
    rosidl_generator_traits::value_to_yaml(msg.allow_interruption, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const FleetCommand & msg, bool use_flow_style = false)
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
  const fleet_interfaces::msg::FleetCommand & msg,
  std::ostream & out, size_t indentation = 0)
{
  fleet_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use fleet_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const fleet_interfaces::msg::FleetCommand & msg)
{
  return fleet_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<fleet_interfaces::msg::FleetCommand>()
{
  return "fleet_interfaces::msg::FleetCommand";
}

template<>
inline const char * name<fleet_interfaces::msg::FleetCommand>()
{
  return "fleet_interfaces/msg/FleetCommand";
}

template<>
struct has_fixed_size<fleet_interfaces::msg::FleetCommand>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<fleet_interfaces::msg::FleetCommand>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<fleet_interfaces::msg::FleetCommand>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // FLEET_INTERFACES__MSG__DETAIL__FLEET_COMMAND__TRAITS_HPP_
