// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from fleet_interfaces:srv/AssignTask.idl
// generated code does not contain a copyright notice

#ifndef FLEET_INTERFACES__SRV__DETAIL__ASSIGN_TASK__TRAITS_HPP_
#define FLEET_INTERFACES__SRV__DETAIL__ASSIGN_TASK__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "fleet_interfaces/srv/detail/assign_task__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'waypoints'
#include "geometry_msgs/msg/detail/point__traits.hpp"

namespace fleet_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const AssignTask_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: robot_id
  {
    out << "robot_id: ";
    rosidl_generator_traits::value_to_yaml(msg.robot_id, out);
    out << ", ";
  }

  // member: task_id
  {
    out << "task_id: ";
    rosidl_generator_traits::value_to_yaml(msg.task_id, out);
    out << ", ";
  }

  // member: task_type
  {
    out << "task_type: ";
    rosidl_generator_traits::value_to_yaml(msg.task_type, out);
    out << ", ";
  }

  // member: waypoints
  {
    if (msg.waypoints.size() == 0) {
      out << "waypoints: []";
    } else {
      out << "waypoints: [";
      size_t pending_items = msg.waypoints.size();
      for (auto item : msg.waypoints) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: max_velocity
  {
    out << "max_velocity: ";
    rosidl_generator_traits::value_to_yaml(msg.max_velocity, out);
    out << ", ";
  }

  // member: estimated_duration
  {
    out << "estimated_duration: ";
    rosidl_generator_traits::value_to_yaml(msg.estimated_duration, out);
    out << ", ";
  }

  // member: required_capabilities
  {
    if (msg.required_capabilities.size() == 0) {
      out << "required_capabilities: []";
    } else {
      out << "required_capabilities: [";
      size_t pending_items = msg.required_capabilities.size();
      for (auto item : msg.required_capabilities) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const AssignTask_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: robot_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "robot_id: ";
    rosidl_generator_traits::value_to_yaml(msg.robot_id, out);
    out << "\n";
  }

  // member: task_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "task_id: ";
    rosidl_generator_traits::value_to_yaml(msg.task_id, out);
    out << "\n";
  }

  // member: task_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "task_type: ";
    rosidl_generator_traits::value_to_yaml(msg.task_type, out);
    out << "\n";
  }

  // member: waypoints
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.waypoints.size() == 0) {
      out << "waypoints: []\n";
    } else {
      out << "waypoints:\n";
      for (auto item : msg.waypoints) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
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

  // member: estimated_duration
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "estimated_duration: ";
    rosidl_generator_traits::value_to_yaml(msg.estimated_duration, out);
    out << "\n";
  }

  // member: required_capabilities
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.required_capabilities.size() == 0) {
      out << "required_capabilities: []\n";
    } else {
      out << "required_capabilities:\n";
      for (auto item : msg.required_capabilities) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const AssignTask_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace fleet_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use fleet_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const fleet_interfaces::srv::AssignTask_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  fleet_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use fleet_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const fleet_interfaces::srv::AssignTask_Request & msg)
{
  return fleet_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<fleet_interfaces::srv::AssignTask_Request>()
{
  return "fleet_interfaces::srv::AssignTask_Request";
}

template<>
inline const char * name<fleet_interfaces::srv::AssignTask_Request>()
{
  return "fleet_interfaces/srv/AssignTask_Request";
}

template<>
struct has_fixed_size<fleet_interfaces::srv::AssignTask_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<fleet_interfaces::srv::AssignTask_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<fleet_interfaces::srv::AssignTask_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace fleet_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const AssignTask_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: success
  {
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << ", ";
  }

  // member: message
  {
    out << "message: ";
    rosidl_generator_traits::value_to_yaml(msg.message, out);
    out << ", ";
  }

  // member: assigned_robot_id
  {
    out << "assigned_robot_id: ";
    rosidl_generator_traits::value_to_yaml(msg.assigned_robot_id, out);
    out << ", ";
  }

  // member: estimated_completion_time
  {
    out << "estimated_completion_time: ";
    rosidl_generator_traits::value_to_yaml(msg.estimated_completion_time, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const AssignTask_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: success
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << "\n";
  }

  // member: message
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "message: ";
    rosidl_generator_traits::value_to_yaml(msg.message, out);
    out << "\n";
  }

  // member: assigned_robot_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "assigned_robot_id: ";
    rosidl_generator_traits::value_to_yaml(msg.assigned_robot_id, out);
    out << "\n";
  }

  // member: estimated_completion_time
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "estimated_completion_time: ";
    rosidl_generator_traits::value_to_yaml(msg.estimated_completion_time, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const AssignTask_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace fleet_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use fleet_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const fleet_interfaces::srv::AssignTask_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  fleet_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use fleet_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const fleet_interfaces::srv::AssignTask_Response & msg)
{
  return fleet_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<fleet_interfaces::srv::AssignTask_Response>()
{
  return "fleet_interfaces::srv::AssignTask_Response";
}

template<>
inline const char * name<fleet_interfaces::srv::AssignTask_Response>()
{
  return "fleet_interfaces/srv/AssignTask_Response";
}

template<>
struct has_fixed_size<fleet_interfaces::srv::AssignTask_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<fleet_interfaces::srv::AssignTask_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<fleet_interfaces::srv::AssignTask_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<fleet_interfaces::srv::AssignTask>()
{
  return "fleet_interfaces::srv::AssignTask";
}

template<>
inline const char * name<fleet_interfaces::srv::AssignTask>()
{
  return "fleet_interfaces/srv/AssignTask";
}

template<>
struct has_fixed_size<fleet_interfaces::srv::AssignTask>
  : std::integral_constant<
    bool,
    has_fixed_size<fleet_interfaces::srv::AssignTask_Request>::value &&
    has_fixed_size<fleet_interfaces::srv::AssignTask_Response>::value
  >
{
};

template<>
struct has_bounded_size<fleet_interfaces::srv::AssignTask>
  : std::integral_constant<
    bool,
    has_bounded_size<fleet_interfaces::srv::AssignTask_Request>::value &&
    has_bounded_size<fleet_interfaces::srv::AssignTask_Response>::value
  >
{
};

template<>
struct is_service<fleet_interfaces::srv::AssignTask>
  : std::true_type
{
};

template<>
struct is_service_request<fleet_interfaces::srv::AssignTask_Request>
  : std::true_type
{
};

template<>
struct is_service_response<fleet_interfaces::srv::AssignTask_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // FLEET_INTERFACES__SRV__DETAIL__ASSIGN_TASK__TRAITS_HPP_
