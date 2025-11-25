// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from fleet_interfaces:msg/FleetCommand.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "fleet_interfaces/msg/detail/fleet_command__rosidl_typesupport_introspection_c.h"
#include "fleet_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "fleet_interfaces/msg/detail/fleet_command__functions.h"
#include "fleet_interfaces/msg/detail/fleet_command__struct.h"


// Include directives for member types
// Member `command_id`
// Member `target_robot_ids`
// Member `robot_type_filter`
// Member `command_type`
// Member `task_description`
#include "rosidl_runtime_c/string_functions.h"
// Member `timestamp`
#include "builtin_interfaces/msg/time.h"
// Member `timestamp`
#include "builtin_interfaces/msg/detail/time__rosidl_typesupport_introspection_c.h"
// Member `target_position`
#include "geometry_msgs/msg/point.h"
// Member `target_position`
#include "geometry_msgs/msg/detail/point__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void fleet_interfaces__msg__FleetCommand__rosidl_typesupport_introspection_c__FleetCommand_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  fleet_interfaces__msg__FleetCommand__init(message_memory);
}

void fleet_interfaces__msg__FleetCommand__rosidl_typesupport_introspection_c__FleetCommand_fini_function(void * message_memory)
{
  fleet_interfaces__msg__FleetCommand__fini(message_memory);
}

size_t fleet_interfaces__msg__FleetCommand__rosidl_typesupport_introspection_c__size_function__FleetCommand__target_robot_ids(
  const void * untyped_member)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return member->size;
}

const void * fleet_interfaces__msg__FleetCommand__rosidl_typesupport_introspection_c__get_const_function__FleetCommand__target_robot_ids(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void * fleet_interfaces__msg__FleetCommand__rosidl_typesupport_introspection_c__get_function__FleetCommand__target_robot_ids(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void fleet_interfaces__msg__FleetCommand__rosidl_typesupport_introspection_c__fetch_function__FleetCommand__target_robot_ids(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rosidl_runtime_c__String * item =
    ((const rosidl_runtime_c__String *)
    fleet_interfaces__msg__FleetCommand__rosidl_typesupport_introspection_c__get_const_function__FleetCommand__target_robot_ids(untyped_member, index));
  rosidl_runtime_c__String * value =
    (rosidl_runtime_c__String *)(untyped_value);
  *value = *item;
}

void fleet_interfaces__msg__FleetCommand__rosidl_typesupport_introspection_c__assign_function__FleetCommand__target_robot_ids(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rosidl_runtime_c__String * item =
    ((rosidl_runtime_c__String *)
    fleet_interfaces__msg__FleetCommand__rosidl_typesupport_introspection_c__get_function__FleetCommand__target_robot_ids(untyped_member, index));
  const rosidl_runtime_c__String * value =
    (const rosidl_runtime_c__String *)(untyped_value);
  *item = *value;
}

bool fleet_interfaces__msg__FleetCommand__rosidl_typesupport_introspection_c__resize_function__FleetCommand__target_robot_ids(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  rosidl_runtime_c__String__Sequence__fini(member);
  return rosidl_runtime_c__String__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember fleet_interfaces__msg__FleetCommand__rosidl_typesupport_introspection_c__FleetCommand_message_member_array[11] = {
  {
    "command_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(fleet_interfaces__msg__FleetCommand, command_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "timestamp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(fleet_interfaces__msg__FleetCommand, timestamp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "target_robot_ids",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(fleet_interfaces__msg__FleetCommand, target_robot_ids),  // bytes offset in struct
    NULL,  // default value
    fleet_interfaces__msg__FleetCommand__rosidl_typesupport_introspection_c__size_function__FleetCommand__target_robot_ids,  // size() function pointer
    fleet_interfaces__msg__FleetCommand__rosidl_typesupport_introspection_c__get_const_function__FleetCommand__target_robot_ids,  // get_const(index) function pointer
    fleet_interfaces__msg__FleetCommand__rosidl_typesupport_introspection_c__get_function__FleetCommand__target_robot_ids,  // get(index) function pointer
    fleet_interfaces__msg__FleetCommand__rosidl_typesupport_introspection_c__fetch_function__FleetCommand__target_robot_ids,  // fetch(index, &value) function pointer
    fleet_interfaces__msg__FleetCommand__rosidl_typesupport_introspection_c__assign_function__FleetCommand__target_robot_ids,  // assign(index, value) function pointer
    fleet_interfaces__msg__FleetCommand__rosidl_typesupport_introspection_c__resize_function__FleetCommand__target_robot_ids  // resize(index) function pointer
  },
  {
    "robot_type_filter",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(fleet_interfaces__msg__FleetCommand, robot_type_filter),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "command_type",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(fleet_interfaces__msg__FleetCommand, command_type),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "target_position",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(fleet_interfaces__msg__FleetCommand, target_position),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "task_description",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(fleet_interfaces__msg__FleetCommand, task_description),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "priority",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(fleet_interfaces__msg__FleetCommand, priority),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "max_velocity",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(fleet_interfaces__msg__FleetCommand, max_velocity),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "timeout",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(fleet_interfaces__msg__FleetCommand, timeout),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "allow_interruption",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(fleet_interfaces__msg__FleetCommand, allow_interruption),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers fleet_interfaces__msg__FleetCommand__rosidl_typesupport_introspection_c__FleetCommand_message_members = {
  "fleet_interfaces__msg",  // message namespace
  "FleetCommand",  // message name
  11,  // number of fields
  sizeof(fleet_interfaces__msg__FleetCommand),
  fleet_interfaces__msg__FleetCommand__rosidl_typesupport_introspection_c__FleetCommand_message_member_array,  // message members
  fleet_interfaces__msg__FleetCommand__rosidl_typesupport_introspection_c__FleetCommand_init_function,  // function to initialize message memory (memory has to be allocated)
  fleet_interfaces__msg__FleetCommand__rosidl_typesupport_introspection_c__FleetCommand_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t fleet_interfaces__msg__FleetCommand__rosidl_typesupport_introspection_c__FleetCommand_message_type_support_handle = {
  0,
  &fleet_interfaces__msg__FleetCommand__rosidl_typesupport_introspection_c__FleetCommand_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_fleet_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, fleet_interfaces, msg, FleetCommand)() {
  fleet_interfaces__msg__FleetCommand__rosidl_typesupport_introspection_c__FleetCommand_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, builtin_interfaces, msg, Time)();
  fleet_interfaces__msg__FleetCommand__rosidl_typesupport_introspection_c__FleetCommand_message_member_array[5].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Point)();
  if (!fleet_interfaces__msg__FleetCommand__rosidl_typesupport_introspection_c__FleetCommand_message_type_support_handle.typesupport_identifier) {
    fleet_interfaces__msg__FleetCommand__rosidl_typesupport_introspection_c__FleetCommand_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &fleet_interfaces__msg__FleetCommand__rosidl_typesupport_introspection_c__FleetCommand_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
