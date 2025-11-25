// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from fleet_interfaces:msg/FleetCommand.idl
// generated code does not contain a copyright notice
#include "fleet_interfaces/msg/detail/fleet_command__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `command_id`
// Member `target_robot_ids`
// Member `robot_type_filter`
// Member `command_type`
// Member `task_description`
#include "rosidl_runtime_c/string_functions.h"
// Member `timestamp`
#include "builtin_interfaces/msg/detail/time__functions.h"
// Member `target_position`
#include "geometry_msgs/msg/detail/point__functions.h"

bool
fleet_interfaces__msg__FleetCommand__init(fleet_interfaces__msg__FleetCommand * msg)
{
  if (!msg) {
    return false;
  }
  // command_id
  if (!rosidl_runtime_c__String__init(&msg->command_id)) {
    fleet_interfaces__msg__FleetCommand__fini(msg);
    return false;
  }
  // timestamp
  if (!builtin_interfaces__msg__Time__init(&msg->timestamp)) {
    fleet_interfaces__msg__FleetCommand__fini(msg);
    return false;
  }
  // target_robot_ids
  if (!rosidl_runtime_c__String__Sequence__init(&msg->target_robot_ids, 0)) {
    fleet_interfaces__msg__FleetCommand__fini(msg);
    return false;
  }
  // robot_type_filter
  if (!rosidl_runtime_c__String__init(&msg->robot_type_filter)) {
    fleet_interfaces__msg__FleetCommand__fini(msg);
    return false;
  }
  // command_type
  if (!rosidl_runtime_c__String__init(&msg->command_type)) {
    fleet_interfaces__msg__FleetCommand__fini(msg);
    return false;
  }
  // target_position
  if (!geometry_msgs__msg__Point__init(&msg->target_position)) {
    fleet_interfaces__msg__FleetCommand__fini(msg);
    return false;
  }
  // task_description
  if (!rosidl_runtime_c__String__init(&msg->task_description)) {
    fleet_interfaces__msg__FleetCommand__fini(msg);
    return false;
  }
  // priority
  // max_velocity
  // timeout
  // allow_interruption
  return true;
}

void
fleet_interfaces__msg__FleetCommand__fini(fleet_interfaces__msg__FleetCommand * msg)
{
  if (!msg) {
    return;
  }
  // command_id
  rosidl_runtime_c__String__fini(&msg->command_id);
  // timestamp
  builtin_interfaces__msg__Time__fini(&msg->timestamp);
  // target_robot_ids
  rosidl_runtime_c__String__Sequence__fini(&msg->target_robot_ids);
  // robot_type_filter
  rosidl_runtime_c__String__fini(&msg->robot_type_filter);
  // command_type
  rosidl_runtime_c__String__fini(&msg->command_type);
  // target_position
  geometry_msgs__msg__Point__fini(&msg->target_position);
  // task_description
  rosidl_runtime_c__String__fini(&msg->task_description);
  // priority
  // max_velocity
  // timeout
  // allow_interruption
}

bool
fleet_interfaces__msg__FleetCommand__are_equal(const fleet_interfaces__msg__FleetCommand * lhs, const fleet_interfaces__msg__FleetCommand * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // command_id
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->command_id), &(rhs->command_id)))
  {
    return false;
  }
  // timestamp
  if (!builtin_interfaces__msg__Time__are_equal(
      &(lhs->timestamp), &(rhs->timestamp)))
  {
    return false;
  }
  // target_robot_ids
  if (!rosidl_runtime_c__String__Sequence__are_equal(
      &(lhs->target_robot_ids), &(rhs->target_robot_ids)))
  {
    return false;
  }
  // robot_type_filter
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->robot_type_filter), &(rhs->robot_type_filter)))
  {
    return false;
  }
  // command_type
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->command_type), &(rhs->command_type)))
  {
    return false;
  }
  // target_position
  if (!geometry_msgs__msg__Point__are_equal(
      &(lhs->target_position), &(rhs->target_position)))
  {
    return false;
  }
  // task_description
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->task_description), &(rhs->task_description)))
  {
    return false;
  }
  // priority
  if (lhs->priority != rhs->priority) {
    return false;
  }
  // max_velocity
  if (lhs->max_velocity != rhs->max_velocity) {
    return false;
  }
  // timeout
  if (lhs->timeout != rhs->timeout) {
    return false;
  }
  // allow_interruption
  if (lhs->allow_interruption != rhs->allow_interruption) {
    return false;
  }
  return true;
}

bool
fleet_interfaces__msg__FleetCommand__copy(
  const fleet_interfaces__msg__FleetCommand * input,
  fleet_interfaces__msg__FleetCommand * output)
{
  if (!input || !output) {
    return false;
  }
  // command_id
  if (!rosidl_runtime_c__String__copy(
      &(input->command_id), &(output->command_id)))
  {
    return false;
  }
  // timestamp
  if (!builtin_interfaces__msg__Time__copy(
      &(input->timestamp), &(output->timestamp)))
  {
    return false;
  }
  // target_robot_ids
  if (!rosidl_runtime_c__String__Sequence__copy(
      &(input->target_robot_ids), &(output->target_robot_ids)))
  {
    return false;
  }
  // robot_type_filter
  if (!rosidl_runtime_c__String__copy(
      &(input->robot_type_filter), &(output->robot_type_filter)))
  {
    return false;
  }
  // command_type
  if (!rosidl_runtime_c__String__copy(
      &(input->command_type), &(output->command_type)))
  {
    return false;
  }
  // target_position
  if (!geometry_msgs__msg__Point__copy(
      &(input->target_position), &(output->target_position)))
  {
    return false;
  }
  // task_description
  if (!rosidl_runtime_c__String__copy(
      &(input->task_description), &(output->task_description)))
  {
    return false;
  }
  // priority
  output->priority = input->priority;
  // max_velocity
  output->max_velocity = input->max_velocity;
  // timeout
  output->timeout = input->timeout;
  // allow_interruption
  output->allow_interruption = input->allow_interruption;
  return true;
}

fleet_interfaces__msg__FleetCommand *
fleet_interfaces__msg__FleetCommand__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  fleet_interfaces__msg__FleetCommand * msg = (fleet_interfaces__msg__FleetCommand *)allocator.allocate(sizeof(fleet_interfaces__msg__FleetCommand), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(fleet_interfaces__msg__FleetCommand));
  bool success = fleet_interfaces__msg__FleetCommand__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
fleet_interfaces__msg__FleetCommand__destroy(fleet_interfaces__msg__FleetCommand * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    fleet_interfaces__msg__FleetCommand__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
fleet_interfaces__msg__FleetCommand__Sequence__init(fleet_interfaces__msg__FleetCommand__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  fleet_interfaces__msg__FleetCommand * data = NULL;

  if (size) {
    data = (fleet_interfaces__msg__FleetCommand *)allocator.zero_allocate(size, sizeof(fleet_interfaces__msg__FleetCommand), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = fleet_interfaces__msg__FleetCommand__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        fleet_interfaces__msg__FleetCommand__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
fleet_interfaces__msg__FleetCommand__Sequence__fini(fleet_interfaces__msg__FleetCommand__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      fleet_interfaces__msg__FleetCommand__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

fleet_interfaces__msg__FleetCommand__Sequence *
fleet_interfaces__msg__FleetCommand__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  fleet_interfaces__msg__FleetCommand__Sequence * array = (fleet_interfaces__msg__FleetCommand__Sequence *)allocator.allocate(sizeof(fleet_interfaces__msg__FleetCommand__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = fleet_interfaces__msg__FleetCommand__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
fleet_interfaces__msg__FleetCommand__Sequence__destroy(fleet_interfaces__msg__FleetCommand__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    fleet_interfaces__msg__FleetCommand__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
fleet_interfaces__msg__FleetCommand__Sequence__are_equal(const fleet_interfaces__msg__FleetCommand__Sequence * lhs, const fleet_interfaces__msg__FleetCommand__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!fleet_interfaces__msg__FleetCommand__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
fleet_interfaces__msg__FleetCommand__Sequence__copy(
  const fleet_interfaces__msg__FleetCommand__Sequence * input,
  fleet_interfaces__msg__FleetCommand__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(fleet_interfaces__msg__FleetCommand);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    fleet_interfaces__msg__FleetCommand * data =
      (fleet_interfaces__msg__FleetCommand *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!fleet_interfaces__msg__FleetCommand__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          fleet_interfaces__msg__FleetCommand__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!fleet_interfaces__msg__FleetCommand__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
