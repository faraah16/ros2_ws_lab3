// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from fleet_interfaces:srv/GetFleetStatus.idl
// generated code does not contain a copyright notice
#include "fleet_interfaces/srv/detail/get_fleet_status__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "fleet_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "fleet_interfaces/srv/detail/get_fleet_status__struct.h"
#include "fleet_interfaces/srv/detail/get_fleet_status__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "rosidl_runtime_c/string.h"  // robot_type_filter
#include "rosidl_runtime_c/string_functions.h"  // robot_type_filter

// forward declare type support functions


using _GetFleetStatus_Request__ros_msg_type = fleet_interfaces__srv__GetFleetStatus_Request;

static bool _GetFleetStatus_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _GetFleetStatus_Request__ros_msg_type * ros_message = static_cast<const _GetFleetStatus_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: include_offline_robots
  {
    cdr << (ros_message->include_offline_robots ? true : false);
  }

  // Field name: robot_type_filter
  {
    const rosidl_runtime_c__String * str = &ros_message->robot_type_filter;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  return true;
}

static bool _GetFleetStatus_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _GetFleetStatus_Request__ros_msg_type * ros_message = static_cast<_GetFleetStatus_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: include_offline_robots
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->include_offline_robots = tmp ? true : false;
  }

  // Field name: robot_type_filter
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->robot_type_filter.data) {
      rosidl_runtime_c__String__init(&ros_message->robot_type_filter);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->robot_type_filter,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'robot_type_filter'\n");
      return false;
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_fleet_interfaces
size_t get_serialized_size_fleet_interfaces__srv__GetFleetStatus_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _GetFleetStatus_Request__ros_msg_type * ros_message = static_cast<const _GetFleetStatus_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name include_offline_robots
  {
    size_t item_size = sizeof(ros_message->include_offline_robots);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name robot_type_filter
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->robot_type_filter.size + 1);

  return current_alignment - initial_alignment;
}

static uint32_t _GetFleetStatus_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_fleet_interfaces__srv__GetFleetStatus_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_fleet_interfaces
size_t max_serialized_size_fleet_interfaces__srv__GetFleetStatus_Request(
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

  // member: include_offline_robots
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: robot_type_filter
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
    using DataType = fleet_interfaces__srv__GetFleetStatus_Request;
    is_plain =
      (
      offsetof(DataType, robot_type_filter) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _GetFleetStatus_Request__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_fleet_interfaces__srv__GetFleetStatus_Request(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_GetFleetStatus_Request = {
  "fleet_interfaces::srv",
  "GetFleetStatus_Request",
  _GetFleetStatus_Request__cdr_serialize,
  _GetFleetStatus_Request__cdr_deserialize,
  _GetFleetStatus_Request__get_serialized_size,
  _GetFleetStatus_Request__max_serialized_size
};

static rosidl_message_type_support_t _GetFleetStatus_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_GetFleetStatus_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, fleet_interfaces, srv, GetFleetStatus_Request)() {
  return &_GetFleetStatus_Request__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <cassert>
// already included above
// #include <limits>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "fleet_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "fleet_interfaces/srv/detail/get_fleet_status__struct.h"
// already included above
// #include "fleet_interfaces/srv/detail/get_fleet_status__functions.h"
// already included above
// #include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

// already included above
// #include "rosidl_runtime_c/string.h"  // robot_ids
// already included above
// #include "rosidl_runtime_c/string_functions.h"  // robot_ids

// forward declare type support functions


using _GetFleetStatus_Response__ros_msg_type = fleet_interfaces__srv__GetFleetStatus_Response;

static bool _GetFleetStatus_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _GetFleetStatus_Response__ros_msg_type * ros_message = static_cast<const _GetFleetStatus_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: total_robots
  {
    cdr << ros_message->total_robots;
  }

  // Field name: operational_robots
  {
    cdr << ros_message->operational_robots;
  }

  // Field name: robots_on_task
  {
    cdr << ros_message->robots_on_task;
  }

  // Field name: robots_charging
  {
    cdr << ros_message->robots_charging;
  }

  // Field name: robots_with_errors
  {
    cdr << ros_message->robots_with_errors;
  }

  // Field name: robot_ids
  {
    size_t size = ros_message->robot_ids.size;
    auto array_ptr = ros_message->robot_ids.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      const rosidl_runtime_c__String * str = &array_ptr[i];
      if (str->capacity == 0 || str->capacity <= str->size) {
        fprintf(stderr, "string capacity not greater than size\n");
        return false;
      }
      if (str->data[str->size] != '\0') {
        fprintf(stderr, "string not null-terminated\n");
        return false;
      }
      cdr << str->data;
    }
  }

  // Field name: average_battery_level
  {
    cdr << ros_message->average_battery_level;
  }

  return true;
}

static bool _GetFleetStatus_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _GetFleetStatus_Response__ros_msg_type * ros_message = static_cast<_GetFleetStatus_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: total_robots
  {
    cdr >> ros_message->total_robots;
  }

  // Field name: operational_robots
  {
    cdr >> ros_message->operational_robots;
  }

  // Field name: robots_on_task
  {
    cdr >> ros_message->robots_on_task;
  }

  // Field name: robots_charging
  {
    cdr >> ros_message->robots_charging;
  }

  // Field name: robots_with_errors
  {
    cdr >> ros_message->robots_with_errors;
  }

  // Field name: robot_ids
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);

    // Check there are at least 'size' remaining bytes in the CDR stream before resizing
    auto old_state = cdr.getState();
    bool correct_size = cdr.jump(size);
    cdr.setState(old_state);
    if (!correct_size) {
      fprintf(stderr, "sequence size exceeds remaining buffer\n");
      return false;
    }

    if (ros_message->robot_ids.data) {
      rosidl_runtime_c__String__Sequence__fini(&ros_message->robot_ids);
    }
    if (!rosidl_runtime_c__String__Sequence__init(&ros_message->robot_ids, size)) {
      fprintf(stderr, "failed to create array for field 'robot_ids'");
      return false;
    }
    auto array_ptr = ros_message->robot_ids.data;
    for (size_t i = 0; i < size; ++i) {
      std::string tmp;
      cdr >> tmp;
      auto & ros_i = array_ptr[i];
      if (!ros_i.data) {
        rosidl_runtime_c__String__init(&ros_i);
      }
      bool succeeded = rosidl_runtime_c__String__assign(
        &ros_i,
        tmp.c_str());
      if (!succeeded) {
        fprintf(stderr, "failed to assign string into field 'robot_ids'\n");
        return false;
      }
    }
  }

  // Field name: average_battery_level
  {
    cdr >> ros_message->average_battery_level;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_fleet_interfaces
size_t get_serialized_size_fleet_interfaces__srv__GetFleetStatus_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _GetFleetStatus_Response__ros_msg_type * ros_message = static_cast<const _GetFleetStatus_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name total_robots
  {
    size_t item_size = sizeof(ros_message->total_robots);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name operational_robots
  {
    size_t item_size = sizeof(ros_message->operational_robots);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name robots_on_task
  {
    size_t item_size = sizeof(ros_message->robots_on_task);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name robots_charging
  {
    size_t item_size = sizeof(ros_message->robots_charging);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name robots_with_errors
  {
    size_t item_size = sizeof(ros_message->robots_with_errors);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name robot_ids
  {
    size_t array_size = ros_message->robot_ids.size;
    auto array_ptr = ros_message->robot_ids.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        (array_ptr[index].size + 1);
    }
  }
  // field.name average_battery_level
  {
    size_t item_size = sizeof(ros_message->average_battery_level);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _GetFleetStatus_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_fleet_interfaces__srv__GetFleetStatus_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_fleet_interfaces
size_t max_serialized_size_fleet_interfaces__srv__GetFleetStatus_Response(
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

  // member: total_robots
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: operational_robots
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: robots_on_task
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: robots_charging
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: robots_with_errors
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: robot_ids
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
  // member: average_battery_level
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
    using DataType = fleet_interfaces__srv__GetFleetStatus_Response;
    is_plain =
      (
      offsetof(DataType, average_battery_level) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _GetFleetStatus_Response__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_fleet_interfaces__srv__GetFleetStatus_Response(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_GetFleetStatus_Response = {
  "fleet_interfaces::srv",
  "GetFleetStatus_Response",
  _GetFleetStatus_Response__cdr_serialize,
  _GetFleetStatus_Response__cdr_deserialize,
  _GetFleetStatus_Response__get_serialized_size,
  _GetFleetStatus_Response__max_serialized_size
};

static rosidl_message_type_support_t _GetFleetStatus_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_GetFleetStatus_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, fleet_interfaces, srv, GetFleetStatus_Response)() {
  return &_GetFleetStatus_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "fleet_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "fleet_interfaces/srv/get_fleet_status.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t GetFleetStatus__callbacks = {
  "fleet_interfaces::srv",
  "GetFleetStatus",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, fleet_interfaces, srv, GetFleetStatus_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, fleet_interfaces, srv, GetFleetStatus_Response)(),
};

static rosidl_service_type_support_t GetFleetStatus__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &GetFleetStatus__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, fleet_interfaces, srv, GetFleetStatus)() {
  return &GetFleetStatus__handle;
}

#if defined(__cplusplus)
}
#endif
