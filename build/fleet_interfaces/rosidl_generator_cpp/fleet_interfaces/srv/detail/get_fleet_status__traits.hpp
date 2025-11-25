// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from fleet_interfaces:srv/GetFleetStatus.idl
// generated code does not contain a copyright notice

#ifndef FLEET_INTERFACES__SRV__DETAIL__GET_FLEET_STATUS__TRAITS_HPP_
#define FLEET_INTERFACES__SRV__DETAIL__GET_FLEET_STATUS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "fleet_interfaces/srv/detail/get_fleet_status__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace fleet_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const GetFleetStatus_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: include_offline_robots
  {
    out << "include_offline_robots: ";
    rosidl_generator_traits::value_to_yaml(msg.include_offline_robots, out);
    out << ", ";
  }

  // member: robot_type_filter
  {
    out << "robot_type_filter: ";
    rosidl_generator_traits::value_to_yaml(msg.robot_type_filter, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GetFleetStatus_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: include_offline_robots
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "include_offline_robots: ";
    rosidl_generator_traits::value_to_yaml(msg.include_offline_robots, out);
    out << "\n";
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
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GetFleetStatus_Request & msg, bool use_flow_style = false)
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
  const fleet_interfaces::srv::GetFleetStatus_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  fleet_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use fleet_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const fleet_interfaces::srv::GetFleetStatus_Request & msg)
{
  return fleet_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<fleet_interfaces::srv::GetFleetStatus_Request>()
{
  return "fleet_interfaces::srv::GetFleetStatus_Request";
}

template<>
inline const char * name<fleet_interfaces::srv::GetFleetStatus_Request>()
{
  return "fleet_interfaces/srv/GetFleetStatus_Request";
}

template<>
struct has_fixed_size<fleet_interfaces::srv::GetFleetStatus_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<fleet_interfaces::srv::GetFleetStatus_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<fleet_interfaces::srv::GetFleetStatus_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace fleet_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const GetFleetStatus_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: total_robots
  {
    out << "total_robots: ";
    rosidl_generator_traits::value_to_yaml(msg.total_robots, out);
    out << ", ";
  }

  // member: operational_robots
  {
    out << "operational_robots: ";
    rosidl_generator_traits::value_to_yaml(msg.operational_robots, out);
    out << ", ";
  }

  // member: robots_on_task
  {
    out << "robots_on_task: ";
    rosidl_generator_traits::value_to_yaml(msg.robots_on_task, out);
    out << ", ";
  }

  // member: robots_charging
  {
    out << "robots_charging: ";
    rosidl_generator_traits::value_to_yaml(msg.robots_charging, out);
    out << ", ";
  }

  // member: robots_with_errors
  {
    out << "robots_with_errors: ";
    rosidl_generator_traits::value_to_yaml(msg.robots_with_errors, out);
    out << ", ";
  }

  // member: robot_ids
  {
    if (msg.robot_ids.size() == 0) {
      out << "robot_ids: []";
    } else {
      out << "robot_ids: [";
      size_t pending_items = msg.robot_ids.size();
      for (auto item : msg.robot_ids) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: average_battery_level
  {
    out << "average_battery_level: ";
    rosidl_generator_traits::value_to_yaml(msg.average_battery_level, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GetFleetStatus_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: total_robots
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "total_robots: ";
    rosidl_generator_traits::value_to_yaml(msg.total_robots, out);
    out << "\n";
  }

  // member: operational_robots
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "operational_robots: ";
    rosidl_generator_traits::value_to_yaml(msg.operational_robots, out);
    out << "\n";
  }

  // member: robots_on_task
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "robots_on_task: ";
    rosidl_generator_traits::value_to_yaml(msg.robots_on_task, out);
    out << "\n";
  }

  // member: robots_charging
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "robots_charging: ";
    rosidl_generator_traits::value_to_yaml(msg.robots_charging, out);
    out << "\n";
  }

  // member: robots_with_errors
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "robots_with_errors: ";
    rosidl_generator_traits::value_to_yaml(msg.robots_with_errors, out);
    out << "\n";
  }

  // member: robot_ids
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.robot_ids.size() == 0) {
      out << "robot_ids: []\n";
    } else {
      out << "robot_ids:\n";
      for (auto item : msg.robot_ids) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: average_battery_level
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "average_battery_level: ";
    rosidl_generator_traits::value_to_yaml(msg.average_battery_level, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GetFleetStatus_Response & msg, bool use_flow_style = false)
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
  const fleet_interfaces::srv::GetFleetStatus_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  fleet_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use fleet_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const fleet_interfaces::srv::GetFleetStatus_Response & msg)
{
  return fleet_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<fleet_interfaces::srv::GetFleetStatus_Response>()
{
  return "fleet_interfaces::srv::GetFleetStatus_Response";
}

template<>
inline const char * name<fleet_interfaces::srv::GetFleetStatus_Response>()
{
  return "fleet_interfaces/srv/GetFleetStatus_Response";
}

template<>
struct has_fixed_size<fleet_interfaces::srv::GetFleetStatus_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<fleet_interfaces::srv::GetFleetStatus_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<fleet_interfaces::srv::GetFleetStatus_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<fleet_interfaces::srv::GetFleetStatus>()
{
  return "fleet_interfaces::srv::GetFleetStatus";
}

template<>
inline const char * name<fleet_interfaces::srv::GetFleetStatus>()
{
  return "fleet_interfaces/srv/GetFleetStatus";
}

template<>
struct has_fixed_size<fleet_interfaces::srv::GetFleetStatus>
  : std::integral_constant<
    bool,
    has_fixed_size<fleet_interfaces::srv::GetFleetStatus_Request>::value &&
    has_fixed_size<fleet_interfaces::srv::GetFleetStatus_Response>::value
  >
{
};

template<>
struct has_bounded_size<fleet_interfaces::srv::GetFleetStatus>
  : std::integral_constant<
    bool,
    has_bounded_size<fleet_interfaces::srv::GetFleetStatus_Request>::value &&
    has_bounded_size<fleet_interfaces::srv::GetFleetStatus_Response>::value
  >
{
};

template<>
struct is_service<fleet_interfaces::srv::GetFleetStatus>
  : std::true_type
{
};

template<>
struct is_service_request<fleet_interfaces::srv::GetFleetStatus_Request>
  : std::true_type
{
};

template<>
struct is_service_response<fleet_interfaces::srv::GetFleetStatus_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // FLEET_INTERFACES__SRV__DETAIL__GET_FLEET_STATUS__TRAITS_HPP_
