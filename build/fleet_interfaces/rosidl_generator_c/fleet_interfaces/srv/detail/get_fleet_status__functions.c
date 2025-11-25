// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from fleet_interfaces:srv/GetFleetStatus.idl
// generated code does not contain a copyright notice
#include "fleet_interfaces/srv/detail/get_fleet_status__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

// Include directives for member types
// Member `robot_type_filter`
#include "rosidl_runtime_c/string_functions.h"

bool
fleet_interfaces__srv__GetFleetStatus_Request__init(fleet_interfaces__srv__GetFleetStatus_Request * msg)
{
  if (!msg) {
    return false;
  }
  // include_offline_robots
  // robot_type_filter
  if (!rosidl_runtime_c__String__init(&msg->robot_type_filter)) {
    fleet_interfaces__srv__GetFleetStatus_Request__fini(msg);
    return false;
  }
  return true;
}

void
fleet_interfaces__srv__GetFleetStatus_Request__fini(fleet_interfaces__srv__GetFleetStatus_Request * msg)
{
  if (!msg) {
    return;
  }
  // include_offline_robots
  // robot_type_filter
  rosidl_runtime_c__String__fini(&msg->robot_type_filter);
}

bool
fleet_interfaces__srv__GetFleetStatus_Request__are_equal(const fleet_interfaces__srv__GetFleetStatus_Request * lhs, const fleet_interfaces__srv__GetFleetStatus_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // include_offline_robots
  if (lhs->include_offline_robots != rhs->include_offline_robots) {
    return false;
  }
  // robot_type_filter
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->robot_type_filter), &(rhs->robot_type_filter)))
  {
    return false;
  }
  return true;
}

bool
fleet_interfaces__srv__GetFleetStatus_Request__copy(
  const fleet_interfaces__srv__GetFleetStatus_Request * input,
  fleet_interfaces__srv__GetFleetStatus_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // include_offline_robots
  output->include_offline_robots = input->include_offline_robots;
  // robot_type_filter
  if (!rosidl_runtime_c__String__copy(
      &(input->robot_type_filter), &(output->robot_type_filter)))
  {
    return false;
  }
  return true;
}

fleet_interfaces__srv__GetFleetStatus_Request *
fleet_interfaces__srv__GetFleetStatus_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  fleet_interfaces__srv__GetFleetStatus_Request * msg = (fleet_interfaces__srv__GetFleetStatus_Request *)allocator.allocate(sizeof(fleet_interfaces__srv__GetFleetStatus_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(fleet_interfaces__srv__GetFleetStatus_Request));
  bool success = fleet_interfaces__srv__GetFleetStatus_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
fleet_interfaces__srv__GetFleetStatus_Request__destroy(fleet_interfaces__srv__GetFleetStatus_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    fleet_interfaces__srv__GetFleetStatus_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
fleet_interfaces__srv__GetFleetStatus_Request__Sequence__init(fleet_interfaces__srv__GetFleetStatus_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  fleet_interfaces__srv__GetFleetStatus_Request * data = NULL;

  if (size) {
    data = (fleet_interfaces__srv__GetFleetStatus_Request *)allocator.zero_allocate(size, sizeof(fleet_interfaces__srv__GetFleetStatus_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = fleet_interfaces__srv__GetFleetStatus_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        fleet_interfaces__srv__GetFleetStatus_Request__fini(&data[i - 1]);
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
fleet_interfaces__srv__GetFleetStatus_Request__Sequence__fini(fleet_interfaces__srv__GetFleetStatus_Request__Sequence * array)
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
      fleet_interfaces__srv__GetFleetStatus_Request__fini(&array->data[i]);
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

fleet_interfaces__srv__GetFleetStatus_Request__Sequence *
fleet_interfaces__srv__GetFleetStatus_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  fleet_interfaces__srv__GetFleetStatus_Request__Sequence * array = (fleet_interfaces__srv__GetFleetStatus_Request__Sequence *)allocator.allocate(sizeof(fleet_interfaces__srv__GetFleetStatus_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = fleet_interfaces__srv__GetFleetStatus_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
fleet_interfaces__srv__GetFleetStatus_Request__Sequence__destroy(fleet_interfaces__srv__GetFleetStatus_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    fleet_interfaces__srv__GetFleetStatus_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
fleet_interfaces__srv__GetFleetStatus_Request__Sequence__are_equal(const fleet_interfaces__srv__GetFleetStatus_Request__Sequence * lhs, const fleet_interfaces__srv__GetFleetStatus_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!fleet_interfaces__srv__GetFleetStatus_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
fleet_interfaces__srv__GetFleetStatus_Request__Sequence__copy(
  const fleet_interfaces__srv__GetFleetStatus_Request__Sequence * input,
  fleet_interfaces__srv__GetFleetStatus_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(fleet_interfaces__srv__GetFleetStatus_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    fleet_interfaces__srv__GetFleetStatus_Request * data =
      (fleet_interfaces__srv__GetFleetStatus_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!fleet_interfaces__srv__GetFleetStatus_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          fleet_interfaces__srv__GetFleetStatus_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!fleet_interfaces__srv__GetFleetStatus_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `robot_ids`
// already included above
// #include "rosidl_runtime_c/string_functions.h"

bool
fleet_interfaces__srv__GetFleetStatus_Response__init(fleet_interfaces__srv__GetFleetStatus_Response * msg)
{
  if (!msg) {
    return false;
  }
  // total_robots
  // operational_robots
  // robots_on_task
  // robots_charging
  // robots_with_errors
  // robot_ids
  if (!rosidl_runtime_c__String__Sequence__init(&msg->robot_ids, 0)) {
    fleet_interfaces__srv__GetFleetStatus_Response__fini(msg);
    return false;
  }
  // average_battery_level
  return true;
}

void
fleet_interfaces__srv__GetFleetStatus_Response__fini(fleet_interfaces__srv__GetFleetStatus_Response * msg)
{
  if (!msg) {
    return;
  }
  // total_robots
  // operational_robots
  // robots_on_task
  // robots_charging
  // robots_with_errors
  // robot_ids
  rosidl_runtime_c__String__Sequence__fini(&msg->robot_ids);
  // average_battery_level
}

bool
fleet_interfaces__srv__GetFleetStatus_Response__are_equal(const fleet_interfaces__srv__GetFleetStatus_Response * lhs, const fleet_interfaces__srv__GetFleetStatus_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // total_robots
  if (lhs->total_robots != rhs->total_robots) {
    return false;
  }
  // operational_robots
  if (lhs->operational_robots != rhs->operational_robots) {
    return false;
  }
  // robots_on_task
  if (lhs->robots_on_task != rhs->robots_on_task) {
    return false;
  }
  // robots_charging
  if (lhs->robots_charging != rhs->robots_charging) {
    return false;
  }
  // robots_with_errors
  if (lhs->robots_with_errors != rhs->robots_with_errors) {
    return false;
  }
  // robot_ids
  if (!rosidl_runtime_c__String__Sequence__are_equal(
      &(lhs->robot_ids), &(rhs->robot_ids)))
  {
    return false;
  }
  // average_battery_level
  if (lhs->average_battery_level != rhs->average_battery_level) {
    return false;
  }
  return true;
}

bool
fleet_interfaces__srv__GetFleetStatus_Response__copy(
  const fleet_interfaces__srv__GetFleetStatus_Response * input,
  fleet_interfaces__srv__GetFleetStatus_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // total_robots
  output->total_robots = input->total_robots;
  // operational_robots
  output->operational_robots = input->operational_robots;
  // robots_on_task
  output->robots_on_task = input->robots_on_task;
  // robots_charging
  output->robots_charging = input->robots_charging;
  // robots_with_errors
  output->robots_with_errors = input->robots_with_errors;
  // robot_ids
  if (!rosidl_runtime_c__String__Sequence__copy(
      &(input->robot_ids), &(output->robot_ids)))
  {
    return false;
  }
  // average_battery_level
  output->average_battery_level = input->average_battery_level;
  return true;
}

fleet_interfaces__srv__GetFleetStatus_Response *
fleet_interfaces__srv__GetFleetStatus_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  fleet_interfaces__srv__GetFleetStatus_Response * msg = (fleet_interfaces__srv__GetFleetStatus_Response *)allocator.allocate(sizeof(fleet_interfaces__srv__GetFleetStatus_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(fleet_interfaces__srv__GetFleetStatus_Response));
  bool success = fleet_interfaces__srv__GetFleetStatus_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
fleet_interfaces__srv__GetFleetStatus_Response__destroy(fleet_interfaces__srv__GetFleetStatus_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    fleet_interfaces__srv__GetFleetStatus_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
fleet_interfaces__srv__GetFleetStatus_Response__Sequence__init(fleet_interfaces__srv__GetFleetStatus_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  fleet_interfaces__srv__GetFleetStatus_Response * data = NULL;

  if (size) {
    data = (fleet_interfaces__srv__GetFleetStatus_Response *)allocator.zero_allocate(size, sizeof(fleet_interfaces__srv__GetFleetStatus_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = fleet_interfaces__srv__GetFleetStatus_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        fleet_interfaces__srv__GetFleetStatus_Response__fini(&data[i - 1]);
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
fleet_interfaces__srv__GetFleetStatus_Response__Sequence__fini(fleet_interfaces__srv__GetFleetStatus_Response__Sequence * array)
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
      fleet_interfaces__srv__GetFleetStatus_Response__fini(&array->data[i]);
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

fleet_interfaces__srv__GetFleetStatus_Response__Sequence *
fleet_interfaces__srv__GetFleetStatus_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  fleet_interfaces__srv__GetFleetStatus_Response__Sequence * array = (fleet_interfaces__srv__GetFleetStatus_Response__Sequence *)allocator.allocate(sizeof(fleet_interfaces__srv__GetFleetStatus_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = fleet_interfaces__srv__GetFleetStatus_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
fleet_interfaces__srv__GetFleetStatus_Response__Sequence__destroy(fleet_interfaces__srv__GetFleetStatus_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    fleet_interfaces__srv__GetFleetStatus_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
fleet_interfaces__srv__GetFleetStatus_Response__Sequence__are_equal(const fleet_interfaces__srv__GetFleetStatus_Response__Sequence * lhs, const fleet_interfaces__srv__GetFleetStatus_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!fleet_interfaces__srv__GetFleetStatus_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
fleet_interfaces__srv__GetFleetStatus_Response__Sequence__copy(
  const fleet_interfaces__srv__GetFleetStatus_Response__Sequence * input,
  fleet_interfaces__srv__GetFleetStatus_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(fleet_interfaces__srv__GetFleetStatus_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    fleet_interfaces__srv__GetFleetStatus_Response * data =
      (fleet_interfaces__srv__GetFleetStatus_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!fleet_interfaces__srv__GetFleetStatus_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          fleet_interfaces__srv__GetFleetStatus_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!fleet_interfaces__srv__GetFleetStatus_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
