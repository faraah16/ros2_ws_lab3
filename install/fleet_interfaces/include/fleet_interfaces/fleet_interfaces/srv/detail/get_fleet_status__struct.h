// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from fleet_interfaces:srv/GetFleetStatus.idl
// generated code does not contain a copyright notice

#ifndef FLEET_INTERFACES__SRV__DETAIL__GET_FLEET_STATUS__STRUCT_H_
#define FLEET_INTERFACES__SRV__DETAIL__GET_FLEET_STATUS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'robot_type_filter'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/GetFleetStatus in the package fleet_interfaces.
typedef struct fleet_interfaces__srv__GetFleetStatus_Request
{
  /// ============================================
  /// REQUEST - What information to include
  /// ============================================
  /// Include robots not currently reporting?
  bool include_offline_robots;
  /// Filter by type (empty = all)
  rosidl_runtime_c__String robot_type_filter;
} fleet_interfaces__srv__GetFleetStatus_Request;

// Struct for a sequence of fleet_interfaces__srv__GetFleetStatus_Request.
typedef struct fleet_interfaces__srv__GetFleetStatus_Request__Sequence
{
  fleet_interfaces__srv__GetFleetStatus_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} fleet_interfaces__srv__GetFleetStatus_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'robot_ids'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in srv/GetFleetStatus in the package fleet_interfaces.
typedef struct fleet_interfaces__srv__GetFleetStatus_Response
{
  /// ============================================
  /// RESPONSE - Fleet statistics
  /// ============================================
  /// Total number of robots
  uint32_t total_robots;
  /// How many are working properly
  uint32_t operational_robots;
  /// Currently executing tasks
  uint32_t robots_on_task;
  /// Currently charging
  uint32_t robots_charging;
  /// Have critical errors
  uint32_t robots_with_errors;
  /// List of all robot IDs
  rosidl_runtime_c__String__Sequence robot_ids;
  /// Fleet average battery %
  float average_battery_level;
} fleet_interfaces__srv__GetFleetStatus_Response;

// Struct for a sequence of fleet_interfaces__srv__GetFleetStatus_Response.
typedef struct fleet_interfaces__srv__GetFleetStatus_Response__Sequence
{
  fleet_interfaces__srv__GetFleetStatus_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} fleet_interfaces__srv__GetFleetStatus_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // FLEET_INTERFACES__SRV__DETAIL__GET_FLEET_STATUS__STRUCT_H_
