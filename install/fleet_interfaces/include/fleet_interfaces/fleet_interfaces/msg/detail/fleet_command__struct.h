// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from fleet_interfaces:msg/FleetCommand.idl
// generated code does not contain a copyright notice

#ifndef FLEET_INTERFACES__MSG__DETAIL__FLEET_COMMAND__STRUCT_H_
#define FLEET_INTERFACES__MSG__DETAIL__FLEET_COMMAND__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'command_id'
// Member 'target_robot_ids'
// Member 'robot_type_filter'
// Member 'command_type'
// Member 'task_description'
#include "rosidl_runtime_c/string.h"
// Member 'timestamp'
#include "builtin_interfaces/msg/detail/time__struct.h"
// Member 'target_position'
#include "geometry_msgs/msg/detail/point__struct.h"

/// Struct defined in msg/FleetCommand in the package fleet_interfaces.
/**
  * FleetCommand.msg
  * Command to be sent to one or more robots in the fleet
 */
typedef struct fleet_interfaces__msg__FleetCommand
{
  /// ============================================
  /// COMMAND IDENTIFICATION
  /// ============================================
  /// Unique command ID for tracking
  rosidl_runtime_c__String command_id;
  /// When command was issued
  builtin_interfaces__msg__Time timestamp;
  /// ============================================
  /// TARGET SPECIFICATION - Which robots?
  /// ============================================
  /// Specific robots (empty = all robots)
  rosidl_runtime_c__String__Sequence target_robot_ids;
  /// Filter by type (empty = all types)
  rosidl_runtime_c__String robot_type_filter;
  /// ============================================
  /// COMMAND DETAILS - What to do?
  /// ============================================
  /// "goto", "stop", "return_home", "charge", "task"
  rosidl_runtime_c__String command_type;
  /// Where to go (if applicable)
  geometry_msgs__msg__Point target_position;
  /// What task to perform
  rosidl_runtime_c__String task_description;
  /// 0-10, higher = more urgent
  uint8_t priority;
  /// ============================================
  /// EXECUTION PARAMETERS - How to do it?
  /// ============================================
  /// Speed limit for this command (m/s)
  float max_velocity;
  /// Max time to complete (seconds)
  float timeout;
  /// Can this command be interrupted?
  bool allow_interruption;
} fleet_interfaces__msg__FleetCommand;

// Struct for a sequence of fleet_interfaces__msg__FleetCommand.
typedef struct fleet_interfaces__msg__FleetCommand__Sequence
{
  fleet_interfaces__msg__FleetCommand * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} fleet_interfaces__msg__FleetCommand__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // FLEET_INTERFACES__MSG__DETAIL__FLEET_COMMAND__STRUCT_H_
