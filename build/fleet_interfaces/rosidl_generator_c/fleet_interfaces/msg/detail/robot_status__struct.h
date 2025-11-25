// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from fleet_interfaces:msg/RobotStatus.idl
// generated code does not contain a copyright notice

#ifndef FLEET_INTERFACES__MSG__DETAIL__ROBOT_STATUS__STRUCT_H_
#define FLEET_INTERFACES__MSG__DETAIL__ROBOT_STATUS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'robot_id'
// Member 'robot_type'
// Member 'location'
// Member 'battery_health'
// Member 'current_task_id'
// Member 'task_status'
// Member 'active_warnings'
// Member 'active_errors'
#include "rosidl_runtime_c/string.h"
// Member 'pose'
#include "geometry_msgs/msg/detail/pose__struct.h"
// Member 'velocity'
#include "geometry_msgs/msg/detail/twist__struct.h"

/// Struct defined in msg/RobotStatus in the package fleet_interfaces.
/**
  * RobotStatus.msg
  * Comprehensive robot status for fleet management
 */
typedef struct fleet_interfaces__msg__RobotStatus
{
  /// ============================================
  /// HEADER - Timestamp and reference frame
  /// ============================================
  std_msgs__msg__Header header;
  /// ============================================
  /// IDENTIFICATION - Who is this robot?
  /// ============================================
  /// Unique identifier (e.g., "alpha", "robot_01")
  rosidl_runtime_c__String robot_id;
  /// Type category: "scout", "transporter", "cleaner"
  rosidl_runtime_c__String robot_type;
  /// Current zone/area (e.g., "Zone_A", "Warehouse_2")
  rosidl_runtime_c__String location;
  /// ============================================
  /// MOTION STATE - Where and how fast?
  /// ============================================
  /// Position and orientation in space
  geometry_msgs__msg__Pose pose;
  /// Linear and angular velocity
  geometry_msgs__msg__Twist velocity;
  /// ============================================
  /// BATTERY INFORMATION - Power status
  /// ============================================
  /// Current voltage (e.g., 12.6V)
  float battery_voltage;
  /// Current draw/charge (negative = charging)
  float battery_current;
  /// 0-100%
  uint8_t battery_percentage;
  /// Currently charging?
  bool is_charging;
  /// "excellent", "good", "fair", "poor"
  rosidl_runtime_c__String battery_health;
  /// ============================================
  /// TASK INFORMATION - What's the robot doing?
  /// ============================================
  /// Unique task identifier
  rosidl_runtime_c__String current_task_id;
  /// "idle", "assigned", "executing", "completed", "failed"
  rosidl_runtime_c__String task_status;
  /// 0-100% completion
  uint8_t task_progress;
  /// ============================================
  /// SYSTEM HEALTH - Is everything OK?
  /// ============================================
  /// Can the robot operate?
  bool is_operational;
  /// CPU temp in Celsius
  float cpu_temperature;
  /// WiFi/cellular signal strength 0-100
  uint8_t network_signal;
  /// Non-critical issues
  rosidl_runtime_c__String__Sequence active_warnings;
  /// Critical problems
  rosidl_runtime_c__String__Sequence active_errors;
  /// ============================================
  /// PERFORMANCE METRICS - Historical data
  /// ============================================
  /// Total meters traveled
  float distance_traveled;
  /// Total tasks completed successfully
  uint32_t tasks_completed;
} fleet_interfaces__msg__RobotStatus;

// Struct for a sequence of fleet_interfaces__msg__RobotStatus.
typedef struct fleet_interfaces__msg__RobotStatus__Sequence
{
  fleet_interfaces__msg__RobotStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} fleet_interfaces__msg__RobotStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // FLEET_INTERFACES__MSG__DETAIL__ROBOT_STATUS__STRUCT_H_
