// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from fleet_interfaces:srv/AssignTask.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "fleet_interfaces/srv/detail/assign_task__rosidl_typesupport_introspection_c.h"
#include "fleet_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "fleet_interfaces/srv/detail/assign_task__functions.h"
#include "fleet_interfaces/srv/detail/assign_task__struct.h"


// Include directives for member types
// Member `robot_id`
// Member `task_id`
// Member `task_type`
// Member `required_capabilities`
#include "rosidl_runtime_c/string_functions.h"
// Member `waypoints`
#include "geometry_msgs/msg/point.h"
// Member `waypoints`
#include "geometry_msgs/msg/detail/point__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void fleet_interfaces__srv__AssignTask_Request__rosidl_typesupport_introspection_c__AssignTask_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  fleet_interfaces__srv__AssignTask_Request__init(message_memory);
}

void fleet_interfaces__srv__AssignTask_Request__rosidl_typesupport_introspection_c__AssignTask_Request_fini_function(void * message_memory)
{
  fleet_interfaces__srv__AssignTask_Request__fini(message_memory);
}

size_t fleet_interfaces__srv__AssignTask_Request__rosidl_typesupport_introspection_c__size_function__AssignTask_Request__waypoints(
  const void * untyped_member)
{
  const geometry_msgs__msg__Point__Sequence * member =
    (const geometry_msgs__msg__Point__Sequence *)(untyped_member);
  return member->size;
}

const void * fleet_interfaces__srv__AssignTask_Request__rosidl_typesupport_introspection_c__get_const_function__AssignTask_Request__waypoints(
  const void * untyped_member, size_t index)
{
  const geometry_msgs__msg__Point__Sequence * member =
    (const geometry_msgs__msg__Point__Sequence *)(untyped_member);
  return &member->data[index];
}

void * fleet_interfaces__srv__AssignTask_Request__rosidl_typesupport_introspection_c__get_function__AssignTask_Request__waypoints(
  void * untyped_member, size_t index)
{
  geometry_msgs__msg__Point__Sequence * member =
    (geometry_msgs__msg__Point__Sequence *)(untyped_member);
  return &member->data[index];
}

void fleet_interfaces__srv__AssignTask_Request__rosidl_typesupport_introspection_c__fetch_function__AssignTask_Request__waypoints(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const geometry_msgs__msg__Point * item =
    ((const geometry_msgs__msg__Point *)
    fleet_interfaces__srv__AssignTask_Request__rosidl_typesupport_introspection_c__get_const_function__AssignTask_Request__waypoints(untyped_member, index));
  geometry_msgs__msg__Point * value =
    (geometry_msgs__msg__Point *)(untyped_value);
  *value = *item;
}

void fleet_interfaces__srv__AssignTask_Request__rosidl_typesupport_introspection_c__assign_function__AssignTask_Request__waypoints(
  void * untyped_member, size_t index, const void * untyped_value)
{
  geometry_msgs__msg__Point * item =
    ((geometry_msgs__msg__Point *)
    fleet_interfaces__srv__AssignTask_Request__rosidl_typesupport_introspection_c__get_function__AssignTask_Request__waypoints(untyped_member, index));
  const geometry_msgs__msg__Point * value =
    (const geometry_msgs__msg__Point *)(untyped_value);
  *item = *value;
}

bool fleet_interfaces__srv__AssignTask_Request__rosidl_typesupport_introspection_c__resize_function__AssignTask_Request__waypoints(
  void * untyped_member, size_t size)
{
  geometry_msgs__msg__Point__Sequence * member =
    (geometry_msgs__msg__Point__Sequence *)(untyped_member);
  geometry_msgs__msg__Point__Sequence__fini(member);
  return geometry_msgs__msg__Point__Sequence__init(member, size);
}

size_t fleet_interfaces__srv__AssignTask_Request__rosidl_typesupport_introspection_c__size_function__AssignTask_Request__required_capabilities(
  const void * untyped_member)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return member->size;
}

const void * fleet_interfaces__srv__AssignTask_Request__rosidl_typesupport_introspection_c__get_const_function__AssignTask_Request__required_capabilities(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void * fleet_interfaces__srv__AssignTask_Request__rosidl_typesupport_introspection_c__get_function__AssignTask_Request__required_capabilities(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void fleet_interfaces__srv__AssignTask_Request__rosidl_typesupport_introspection_c__fetch_function__AssignTask_Request__required_capabilities(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rosidl_runtime_c__String * item =
    ((const rosidl_runtime_c__String *)
    fleet_interfaces__srv__AssignTask_Request__rosidl_typesupport_introspection_c__get_const_function__AssignTask_Request__required_capabilities(untyped_member, index));
  rosidl_runtime_c__String * value =
    (rosidl_runtime_c__String *)(untyped_value);
  *value = *item;
}

void fleet_interfaces__srv__AssignTask_Request__rosidl_typesupport_introspection_c__assign_function__AssignTask_Request__required_capabilities(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rosidl_runtime_c__String * item =
    ((rosidl_runtime_c__String *)
    fleet_interfaces__srv__AssignTask_Request__rosidl_typesupport_introspection_c__get_function__AssignTask_Request__required_capabilities(untyped_member, index));
  const rosidl_runtime_c__String * value =
    (const rosidl_runtime_c__String *)(untyped_value);
  *item = *value;
}

bool fleet_interfaces__srv__AssignTask_Request__rosidl_typesupport_introspection_c__resize_function__AssignTask_Request__required_capabilities(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  rosidl_runtime_c__String__Sequence__fini(member);
  return rosidl_runtime_c__String__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember fleet_interfaces__srv__AssignTask_Request__rosidl_typesupport_introspection_c__AssignTask_Request_message_member_array[7] = {
  {
    "robot_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(fleet_interfaces__srv__AssignTask_Request, robot_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "task_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(fleet_interfaces__srv__AssignTask_Request, task_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "task_type",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(fleet_interfaces__srv__AssignTask_Request, task_type),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "waypoints",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(fleet_interfaces__srv__AssignTask_Request, waypoints),  // bytes offset in struct
    NULL,  // default value
    fleet_interfaces__srv__AssignTask_Request__rosidl_typesupport_introspection_c__size_function__AssignTask_Request__waypoints,  // size() function pointer
    fleet_interfaces__srv__AssignTask_Request__rosidl_typesupport_introspection_c__get_const_function__AssignTask_Request__waypoints,  // get_const(index) function pointer
    fleet_interfaces__srv__AssignTask_Request__rosidl_typesupport_introspection_c__get_function__AssignTask_Request__waypoints,  // get(index) function pointer
    fleet_interfaces__srv__AssignTask_Request__rosidl_typesupport_introspection_c__fetch_function__AssignTask_Request__waypoints,  // fetch(index, &value) function pointer
    fleet_interfaces__srv__AssignTask_Request__rosidl_typesupport_introspection_c__assign_function__AssignTask_Request__waypoints,  // assign(index, value) function pointer
    fleet_interfaces__srv__AssignTask_Request__rosidl_typesupport_introspection_c__resize_function__AssignTask_Request__waypoints  // resize(index) function pointer
  },
  {
    "max_velocity",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(fleet_interfaces__srv__AssignTask_Request, max_velocity),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "estimated_duration",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(fleet_interfaces__srv__AssignTask_Request, estimated_duration),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "required_capabilities",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(fleet_interfaces__srv__AssignTask_Request, required_capabilities),  // bytes offset in struct
    NULL,  // default value
    fleet_interfaces__srv__AssignTask_Request__rosidl_typesupport_introspection_c__size_function__AssignTask_Request__required_capabilities,  // size() function pointer
    fleet_interfaces__srv__AssignTask_Request__rosidl_typesupport_introspection_c__get_const_function__AssignTask_Request__required_capabilities,  // get_const(index) function pointer
    fleet_interfaces__srv__AssignTask_Request__rosidl_typesupport_introspection_c__get_function__AssignTask_Request__required_capabilities,  // get(index) function pointer
    fleet_interfaces__srv__AssignTask_Request__rosidl_typesupport_introspection_c__fetch_function__AssignTask_Request__required_capabilities,  // fetch(index, &value) function pointer
    fleet_interfaces__srv__AssignTask_Request__rosidl_typesupport_introspection_c__assign_function__AssignTask_Request__required_capabilities,  // assign(index, value) function pointer
    fleet_interfaces__srv__AssignTask_Request__rosidl_typesupport_introspection_c__resize_function__AssignTask_Request__required_capabilities  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers fleet_interfaces__srv__AssignTask_Request__rosidl_typesupport_introspection_c__AssignTask_Request_message_members = {
  "fleet_interfaces__srv",  // message namespace
  "AssignTask_Request",  // message name
  7,  // number of fields
  sizeof(fleet_interfaces__srv__AssignTask_Request),
  fleet_interfaces__srv__AssignTask_Request__rosidl_typesupport_introspection_c__AssignTask_Request_message_member_array,  // message members
  fleet_interfaces__srv__AssignTask_Request__rosidl_typesupport_introspection_c__AssignTask_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  fleet_interfaces__srv__AssignTask_Request__rosidl_typesupport_introspection_c__AssignTask_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t fleet_interfaces__srv__AssignTask_Request__rosidl_typesupport_introspection_c__AssignTask_Request_message_type_support_handle = {
  0,
  &fleet_interfaces__srv__AssignTask_Request__rosidl_typesupport_introspection_c__AssignTask_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_fleet_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, fleet_interfaces, srv, AssignTask_Request)() {
  fleet_interfaces__srv__AssignTask_Request__rosidl_typesupport_introspection_c__AssignTask_Request_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Point)();
  if (!fleet_interfaces__srv__AssignTask_Request__rosidl_typesupport_introspection_c__AssignTask_Request_message_type_support_handle.typesupport_identifier) {
    fleet_interfaces__srv__AssignTask_Request__rosidl_typesupport_introspection_c__AssignTask_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &fleet_interfaces__srv__AssignTask_Request__rosidl_typesupport_introspection_c__AssignTask_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "fleet_interfaces/srv/detail/assign_task__rosidl_typesupport_introspection_c.h"
// already included above
// #include "fleet_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "fleet_interfaces/srv/detail/assign_task__functions.h"
// already included above
// #include "fleet_interfaces/srv/detail/assign_task__struct.h"


// Include directives for member types
// Member `message`
// Member `assigned_robot_id`
// already included above
// #include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void fleet_interfaces__srv__AssignTask_Response__rosidl_typesupport_introspection_c__AssignTask_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  fleet_interfaces__srv__AssignTask_Response__init(message_memory);
}

void fleet_interfaces__srv__AssignTask_Response__rosidl_typesupport_introspection_c__AssignTask_Response_fini_function(void * message_memory)
{
  fleet_interfaces__srv__AssignTask_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember fleet_interfaces__srv__AssignTask_Response__rosidl_typesupport_introspection_c__AssignTask_Response_message_member_array[4] = {
  {
    "success",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(fleet_interfaces__srv__AssignTask_Response, success),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "message",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(fleet_interfaces__srv__AssignTask_Response, message),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "assigned_robot_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(fleet_interfaces__srv__AssignTask_Response, assigned_robot_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "estimated_completion_time",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(fleet_interfaces__srv__AssignTask_Response, estimated_completion_time),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers fleet_interfaces__srv__AssignTask_Response__rosidl_typesupport_introspection_c__AssignTask_Response_message_members = {
  "fleet_interfaces__srv",  // message namespace
  "AssignTask_Response",  // message name
  4,  // number of fields
  sizeof(fleet_interfaces__srv__AssignTask_Response),
  fleet_interfaces__srv__AssignTask_Response__rosidl_typesupport_introspection_c__AssignTask_Response_message_member_array,  // message members
  fleet_interfaces__srv__AssignTask_Response__rosidl_typesupport_introspection_c__AssignTask_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  fleet_interfaces__srv__AssignTask_Response__rosidl_typesupport_introspection_c__AssignTask_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t fleet_interfaces__srv__AssignTask_Response__rosidl_typesupport_introspection_c__AssignTask_Response_message_type_support_handle = {
  0,
  &fleet_interfaces__srv__AssignTask_Response__rosidl_typesupport_introspection_c__AssignTask_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_fleet_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, fleet_interfaces, srv, AssignTask_Response)() {
  if (!fleet_interfaces__srv__AssignTask_Response__rosidl_typesupport_introspection_c__AssignTask_Response_message_type_support_handle.typesupport_identifier) {
    fleet_interfaces__srv__AssignTask_Response__rosidl_typesupport_introspection_c__AssignTask_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &fleet_interfaces__srv__AssignTask_Response__rosidl_typesupport_introspection_c__AssignTask_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "fleet_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "fleet_interfaces/srv/detail/assign_task__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers fleet_interfaces__srv__detail__assign_task__rosidl_typesupport_introspection_c__AssignTask_service_members = {
  "fleet_interfaces__srv",  // service namespace
  "AssignTask",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // fleet_interfaces__srv__detail__assign_task__rosidl_typesupport_introspection_c__AssignTask_Request_message_type_support_handle,
  NULL  // response message
  // fleet_interfaces__srv__detail__assign_task__rosidl_typesupport_introspection_c__AssignTask_Response_message_type_support_handle
};

static rosidl_service_type_support_t fleet_interfaces__srv__detail__assign_task__rosidl_typesupport_introspection_c__AssignTask_service_type_support_handle = {
  0,
  &fleet_interfaces__srv__detail__assign_task__rosidl_typesupport_introspection_c__AssignTask_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, fleet_interfaces, srv, AssignTask_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, fleet_interfaces, srv, AssignTask_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_fleet_interfaces
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, fleet_interfaces, srv, AssignTask)() {
  if (!fleet_interfaces__srv__detail__assign_task__rosidl_typesupport_introspection_c__AssignTask_service_type_support_handle.typesupport_identifier) {
    fleet_interfaces__srv__detail__assign_task__rosidl_typesupport_introspection_c__AssignTask_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)fleet_interfaces__srv__detail__assign_task__rosidl_typesupport_introspection_c__AssignTask_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, fleet_interfaces, srv, AssignTask_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, fleet_interfaces, srv, AssignTask_Response)()->data;
  }

  return &fleet_interfaces__srv__detail__assign_task__rosidl_typesupport_introspection_c__AssignTask_service_type_support_handle;
}
