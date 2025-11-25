// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from fleet_interfaces:srv/AssignTask.idl
// generated code does not contain a copyright notice

#ifndef FLEET_INTERFACES__SRV__DETAIL__ASSIGN_TASK__STRUCT_H_
#define FLEET_INTERFACES__SRV__DETAIL__ASSIGN_TASK__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'robot_id'
// Member 'task_id'
// Member 'task_type'
// Member 'required_capabilities'
#include "rosidl_runtime_c/string.h"
// Member 'waypoints'
#include "geometry_msgs/msg/detail/point__struct.h"

/// Struct defined in srv/AssignTask in the package fleet_interfaces.
typedef struct fleet_interfaces__srv__AssignTask_Request
{
  /// ============================================
  /// REQUEST - What task to assign
  /// ============================================
  /// Which robot to assign to
  rosidl_runtime_c__String robot_id;
  /// Unique task identifier
  rosidl_runtime_c__String task_id;
  /// "delivery", "patrol", "cleaning"
  rosidl_runtime_c__String task_type;
  /// Path to follow
  geometry_msgs__msg__Point__Sequence waypoints;
  /// Speed limit for this task
  float max_velocity;
  /// Expected time (seconds)
  float estimated_duration;
  /// Robot must have these (e.g., ["gripper", "camera"])
  rosidl_runtime_c__String__Sequence required_capabilities;
} fleet_interfaces__srv__AssignTask_Request;

// Struct for a sequence of fleet_interfaces__srv__AssignTask_Request.
typedef struct fleet_interfaces__srv__AssignTask_Request__Sequence
{
  fleet_interfaces__srv__AssignTask_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} fleet_interfaces__srv__AssignTask_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'message'
// Member 'assigned_robot_id'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in srv/AssignTask in the package fleet_interfaces.
typedef struct fleet_interfaces__srv__AssignTask_Response
{
  /// ============================================
  /// RESPONSE - What happened
  /// ============================================
  /// Was assignment successful?
  bool success;
  /// Human-readable result
  rosidl_runtime_c__String message;
  /// Confirmation of which robot
  rosidl_runtime_c__String assigned_robot_id;
  /// When we expect it done (seconds from now)
  float estimated_completion_time;
} fleet_interfaces__srv__AssignTask_Response;

// Struct for a sequence of fleet_interfaces__srv__AssignTask_Response.
typedef struct fleet_interfaces__srv__AssignTask_Response__Sequence
{
  fleet_interfaces__srv__AssignTask_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} fleet_interfaces__srv__AssignTask_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // FLEET_INTERFACES__SRV__DETAIL__ASSIGN_TASK__STRUCT_H_
