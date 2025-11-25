// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from fleet_interfaces:srv/GetFleetStatus.idl
// generated code does not contain a copyright notice
#include "fleet_interfaces/srv/detail/get_fleet_status__rosidl_typesupport_fastrtps_cpp.hpp"
#include "fleet_interfaces/srv/detail/get_fleet_status__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace fleet_interfaces
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_fleet_interfaces
cdr_serialize(
  const fleet_interfaces::srv::GetFleetStatus_Request & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: include_offline_robots
  cdr << (ros_message.include_offline_robots ? true : false);
  // Member: robot_type_filter
  cdr << ros_message.robot_type_filter;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_fleet_interfaces
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  fleet_interfaces::srv::GetFleetStatus_Request & ros_message)
{
  // Member: include_offline_robots
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.include_offline_robots = tmp ? true : false;
  }

  // Member: robot_type_filter
  cdr >> ros_message.robot_type_filter;

  return true;
}  // NOLINT(readability/fn_size)

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_fleet_interfaces
get_serialized_size(
  const fleet_interfaces::srv::GetFleetStatus_Request & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: include_offline_robots
  {
    size_t item_size = sizeof(ros_message.include_offline_robots);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: robot_type_filter
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.robot_type_filter.size() + 1);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_fleet_interfaces
max_serialized_size_GetFleetStatus_Request(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;


  // Member: include_offline_robots
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: robot_type_filter
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = fleet_interfaces::srv::GetFleetStatus_Request;
    is_plain =
      (
      offsetof(DataType, robot_type_filter) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _GetFleetStatus_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const fleet_interfaces::srv::GetFleetStatus_Request *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _GetFleetStatus_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<fleet_interfaces::srv::GetFleetStatus_Request *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _GetFleetStatus_Request__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const fleet_interfaces::srv::GetFleetStatus_Request *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _GetFleetStatus_Request__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_GetFleetStatus_Request(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _GetFleetStatus_Request__callbacks = {
  "fleet_interfaces::srv",
  "GetFleetStatus_Request",
  _GetFleetStatus_Request__cdr_serialize,
  _GetFleetStatus_Request__cdr_deserialize,
  _GetFleetStatus_Request__get_serialized_size,
  _GetFleetStatus_Request__max_serialized_size
};

static rosidl_message_type_support_t _GetFleetStatus_Request__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_GetFleetStatus_Request__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace fleet_interfaces

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_fleet_interfaces
const rosidl_message_type_support_t *
get_message_type_support_handle<fleet_interfaces::srv::GetFleetStatus_Request>()
{
  return &fleet_interfaces::srv::typesupport_fastrtps_cpp::_GetFleetStatus_Request__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, fleet_interfaces, srv, GetFleetStatus_Request)() {
  return &fleet_interfaces::srv::typesupport_fastrtps_cpp::_GetFleetStatus_Request__handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include <limits>
// already included above
// #include <stdexcept>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
// already included above
// #include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace fleet_interfaces
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_fleet_interfaces
cdr_serialize(
  const fleet_interfaces::srv::GetFleetStatus_Response & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: total_robots
  cdr << ros_message.total_robots;
  // Member: operational_robots
  cdr << ros_message.operational_robots;
  // Member: robots_on_task
  cdr << ros_message.robots_on_task;
  // Member: robots_charging
  cdr << ros_message.robots_charging;
  // Member: robots_with_errors
  cdr << ros_message.robots_with_errors;
  // Member: robot_ids
  {
    cdr << ros_message.robot_ids;
  }
  // Member: average_battery_level
  cdr << ros_message.average_battery_level;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_fleet_interfaces
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  fleet_interfaces::srv::GetFleetStatus_Response & ros_message)
{
  // Member: total_robots
  cdr >> ros_message.total_robots;

  // Member: operational_robots
  cdr >> ros_message.operational_robots;

  // Member: robots_on_task
  cdr >> ros_message.robots_on_task;

  // Member: robots_charging
  cdr >> ros_message.robots_charging;

  // Member: robots_with_errors
  cdr >> ros_message.robots_with_errors;

  // Member: robot_ids
  {
    cdr >> ros_message.robot_ids;
  }

  // Member: average_battery_level
  cdr >> ros_message.average_battery_level;

  return true;
}  // NOLINT(readability/fn_size)

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_fleet_interfaces
get_serialized_size(
  const fleet_interfaces::srv::GetFleetStatus_Response & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: total_robots
  {
    size_t item_size = sizeof(ros_message.total_robots);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: operational_robots
  {
    size_t item_size = sizeof(ros_message.operational_robots);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: robots_on_task
  {
    size_t item_size = sizeof(ros_message.robots_on_task);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: robots_charging
  {
    size_t item_size = sizeof(ros_message.robots_charging);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: robots_with_errors
  {
    size_t item_size = sizeof(ros_message.robots_with_errors);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: robot_ids
  {
    size_t array_size = ros_message.robot_ids.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        (ros_message.robot_ids[index].size() + 1);
    }
  }
  // Member: average_battery_level
  {
    size_t item_size = sizeof(ros_message.average_battery_level);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_fleet_interfaces
max_serialized_size_GetFleetStatus_Response(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;


  // Member: total_robots
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: operational_robots
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: robots_on_task
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: robots_charging
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: robots_with_errors
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: robot_ids
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Member: average_battery_level
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = fleet_interfaces::srv::GetFleetStatus_Response;
    is_plain =
      (
      offsetof(DataType, average_battery_level) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _GetFleetStatus_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const fleet_interfaces::srv::GetFleetStatus_Response *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _GetFleetStatus_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<fleet_interfaces::srv::GetFleetStatus_Response *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _GetFleetStatus_Response__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const fleet_interfaces::srv::GetFleetStatus_Response *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _GetFleetStatus_Response__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_GetFleetStatus_Response(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _GetFleetStatus_Response__callbacks = {
  "fleet_interfaces::srv",
  "GetFleetStatus_Response",
  _GetFleetStatus_Response__cdr_serialize,
  _GetFleetStatus_Response__cdr_deserialize,
  _GetFleetStatus_Response__get_serialized_size,
  _GetFleetStatus_Response__max_serialized_size
};

static rosidl_message_type_support_t _GetFleetStatus_Response__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_GetFleetStatus_Response__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace fleet_interfaces

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_fleet_interfaces
const rosidl_message_type_support_t *
get_message_type_support_handle<fleet_interfaces::srv::GetFleetStatus_Response>()
{
  return &fleet_interfaces::srv::typesupport_fastrtps_cpp::_GetFleetStatus_Response__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, fleet_interfaces, srv, GetFleetStatus_Response)() {
  return &fleet_interfaces::srv::typesupport_fastrtps_cpp::_GetFleetStatus_Response__handle;
}

#ifdef __cplusplus
}
#endif

#include "rmw/error_handling.h"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/service_type_support_decl.hpp"

namespace fleet_interfaces
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

static service_type_support_callbacks_t _GetFleetStatus__callbacks = {
  "fleet_interfaces::srv",
  "GetFleetStatus",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, fleet_interfaces, srv, GetFleetStatus_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, fleet_interfaces, srv, GetFleetStatus_Response)(),
};

static rosidl_service_type_support_t _GetFleetStatus__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_GetFleetStatus__callbacks,
  get_service_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace fleet_interfaces

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_fleet_interfaces
const rosidl_service_type_support_t *
get_service_type_support_handle<fleet_interfaces::srv::GetFleetStatus>()
{
  return &fleet_interfaces::srv::typesupport_fastrtps_cpp::_GetFleetStatus__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, fleet_interfaces, srv, GetFleetStatus)() {
  return &fleet_interfaces::srv::typesupport_fastrtps_cpp::_GetFleetStatus__handle;
}

#ifdef __cplusplus
}
#endif
