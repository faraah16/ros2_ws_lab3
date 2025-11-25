// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from fleet_interfaces:srv/AssignTask.idl
// generated code does not contain a copyright notice
#include "fleet_interfaces/srv/detail/assign_task__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

// Include directives for member types
// Member `robot_id`
// Member `task_id`
// Member `task_type`
// Member `required_capabilities`
#include "rosidl_runtime_c/string_functions.h"
// Member `waypoints`
#include "geometry_msgs/msg/detail/point__functions.h"

bool
fleet_interfaces__srv__AssignTask_Request__init(fleet_interfaces__srv__AssignTask_Request * msg)
{
  if (!msg) {
    return false;
  }
  // robot_id
  if (!rosidl_runtime_c__String__init(&msg->robot_id)) {
    fleet_interfaces__srv__AssignTask_Request__fini(msg);
    return false;
  }
  // task_id
  if (!rosidl_runtime_c__String__init(&msg->task_id)) {
    fleet_interfaces__srv__AssignTask_Request__fini(msg);
    return false;
  }
  // task_type
  if (!rosidl_runtime_c__String__init(&msg->task_type)) {
    fleet_interfaces__srv__AssignTask_Request__fini(msg);
    return false;
  }
  // waypoints
  if (!geometry_msgs__msg__Point__Sequence__init(&msg->waypoints, 0)) {
    fleet_interfaces__srv__AssignTask_Request__fini(msg);
    return false;
  }
  // max_velocity
  // estimated_duration
  // required_capabilities
  if (!rosidl_runtime_c__String__Sequence__init(&msg->required_capabilities, 0)) {
    fleet_interfaces__srv__AssignTask_Request__fini(msg);
    return false;
  }
  return true;
}

void
fleet_interfaces__srv__AssignTask_Request__fini(fleet_interfaces__srv__AssignTask_Request * msg)
{
  if (!msg) {
    return;
  }
  // robot_id
  rosidl_runtime_c__String__fini(&msg->robot_id);
  // task_id
  rosidl_runtime_c__String__fini(&msg->task_id);
  // task_type
  rosidl_runtime_c__String__fini(&msg->task_type);
  // waypoints
  geometry_msgs__msg__Point__Sequence__fini(&msg->waypoints);
  // max_velocity
  // estimated_duration
  // required_capabilities
  rosidl_runtime_c__String__Sequence__fini(&msg->required_capabilities);
}

bool
fleet_interfaces__srv__AssignTask_Request__are_equal(const fleet_interfaces__srv__AssignTask_Request * lhs, const fleet_interfaces__srv__AssignTask_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // robot_id
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->robot_id), &(rhs->robot_id)))
  {
    return false;
  }
  // task_id
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->task_id), &(rhs->task_id)))
  {
    return false;
  }
  // task_type
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->task_type), &(rhs->task_type)))
  {
    return false;
  }
  // waypoints
  if (!geometry_msgs__msg__Point__Sequence__are_equal(
      &(lhs->waypoints), &(rhs->waypoints)))
  {
    return false;
  }
  // max_velocity
  if (lhs->max_velocity != rhs->max_velocity) {
    return false;
  }
  // estimated_duration
  if (lhs->estimated_duration != rhs->estimated_duration) {
    return false;
  }
  // required_capabilities
  if (!rosidl_runtime_c__String__Sequence__are_equal(
      &(lhs->required_capabilities), &(rhs->required_capabilities)))
  {
    return false;
  }
  return true;
}

bool
fleet_interfaces__srv__AssignTask_Request__copy(
  const fleet_interfaces__srv__AssignTask_Request * input,
  fleet_interfaces__srv__AssignTask_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // robot_id
  if (!rosidl_runtime_c__String__copy(
      &(input->robot_id), &(output->robot_id)))
  {
    return false;
  }
  // task_id
  if (!rosidl_runtime_c__String__copy(
      &(input->task_id), &(output->task_id)))
  {
    return false;
  }
  // task_type
  if (!rosidl_runtime_c__String__copy(
      &(input->task_type), &(output->task_type)))
  {
    return false;
  }
  // waypoints
  if (!geometry_msgs__msg__Point__Sequence__copy(
      &(input->waypoints), &(output->waypoints)))
  {
    return false;
  }
  // max_velocity
  output->max_velocity = input->max_velocity;
  // estimated_duration
  output->estimated_duration = input->estimated_duration;
  // required_capabilities
  if (!rosidl_runtime_c__String__Sequence__copy(
      &(input->required_capabilities), &(output->required_capabilities)))
  {
    return false;
  }
  return true;
}

fleet_interfaces__srv__AssignTask_Request *
fleet_interfaces__srv__AssignTask_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  fleet_interfaces__srv__AssignTask_Request * msg = (fleet_interfaces__srv__AssignTask_Request *)allocator.allocate(sizeof(fleet_interfaces__srv__AssignTask_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(fleet_interfaces__srv__AssignTask_Request));
  bool success = fleet_interfaces__srv__AssignTask_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
fleet_interfaces__srv__AssignTask_Request__destroy(fleet_interfaces__srv__AssignTask_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    fleet_interfaces__srv__AssignTask_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
fleet_interfaces__srv__AssignTask_Request__Sequence__init(fleet_interfaces__srv__AssignTask_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  fleet_interfaces__srv__AssignTask_Request * data = NULL;

  if (size) {
    data = (fleet_interfaces__srv__AssignTask_Request *)allocator.zero_allocate(size, sizeof(fleet_interfaces__srv__AssignTask_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = fleet_interfaces__srv__AssignTask_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        fleet_interfaces__srv__AssignTask_Request__fini(&data[i - 1]);
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
fleet_interfaces__srv__AssignTask_Request__Sequence__fini(fleet_interfaces__srv__AssignTask_Request__Sequence * array)
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
      fleet_interfaces__srv__AssignTask_Request__fini(&array->data[i]);
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

fleet_interfaces__srv__AssignTask_Request__Sequence *
fleet_interfaces__srv__AssignTask_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  fleet_interfaces__srv__AssignTask_Request__Sequence * array = (fleet_interfaces__srv__AssignTask_Request__Sequence *)allocator.allocate(sizeof(fleet_interfaces__srv__AssignTask_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = fleet_interfaces__srv__AssignTask_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
fleet_interfaces__srv__AssignTask_Request__Sequence__destroy(fleet_interfaces__srv__AssignTask_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    fleet_interfaces__srv__AssignTask_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
fleet_interfaces__srv__AssignTask_Request__Sequence__are_equal(const fleet_interfaces__srv__AssignTask_Request__Sequence * lhs, const fleet_interfaces__srv__AssignTask_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!fleet_interfaces__srv__AssignTask_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
fleet_interfaces__srv__AssignTask_Request__Sequence__copy(
  const fleet_interfaces__srv__AssignTask_Request__Sequence * input,
  fleet_interfaces__srv__AssignTask_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(fleet_interfaces__srv__AssignTask_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    fleet_interfaces__srv__AssignTask_Request * data =
      (fleet_interfaces__srv__AssignTask_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!fleet_interfaces__srv__AssignTask_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          fleet_interfaces__srv__AssignTask_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!fleet_interfaces__srv__AssignTask_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `message`
// Member `assigned_robot_id`
// already included above
// #include "rosidl_runtime_c/string_functions.h"

bool
fleet_interfaces__srv__AssignTask_Response__init(fleet_interfaces__srv__AssignTask_Response * msg)
{
  if (!msg) {
    return false;
  }
  // success
  // message
  if (!rosidl_runtime_c__String__init(&msg->message)) {
    fleet_interfaces__srv__AssignTask_Response__fini(msg);
    return false;
  }
  // assigned_robot_id
  if (!rosidl_runtime_c__String__init(&msg->assigned_robot_id)) {
    fleet_interfaces__srv__AssignTask_Response__fini(msg);
    return false;
  }
  // estimated_completion_time
  return true;
}

void
fleet_interfaces__srv__AssignTask_Response__fini(fleet_interfaces__srv__AssignTask_Response * msg)
{
  if (!msg) {
    return;
  }
  // success
  // message
  rosidl_runtime_c__String__fini(&msg->message);
  // assigned_robot_id
  rosidl_runtime_c__String__fini(&msg->assigned_robot_id);
  // estimated_completion_time
}

bool
fleet_interfaces__srv__AssignTask_Response__are_equal(const fleet_interfaces__srv__AssignTask_Response * lhs, const fleet_interfaces__srv__AssignTask_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // success
  if (lhs->success != rhs->success) {
    return false;
  }
  // message
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->message), &(rhs->message)))
  {
    return false;
  }
  // assigned_robot_id
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->assigned_robot_id), &(rhs->assigned_robot_id)))
  {
    return false;
  }
  // estimated_completion_time
  if (lhs->estimated_completion_time != rhs->estimated_completion_time) {
    return false;
  }
  return true;
}

bool
fleet_interfaces__srv__AssignTask_Response__copy(
  const fleet_interfaces__srv__AssignTask_Response * input,
  fleet_interfaces__srv__AssignTask_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // success
  output->success = input->success;
  // message
  if (!rosidl_runtime_c__String__copy(
      &(input->message), &(output->message)))
  {
    return false;
  }
  // assigned_robot_id
  if (!rosidl_runtime_c__String__copy(
      &(input->assigned_robot_id), &(output->assigned_robot_id)))
  {
    return false;
  }
  // estimated_completion_time
  output->estimated_completion_time = input->estimated_completion_time;
  return true;
}

fleet_interfaces__srv__AssignTask_Response *
fleet_interfaces__srv__AssignTask_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  fleet_interfaces__srv__AssignTask_Response * msg = (fleet_interfaces__srv__AssignTask_Response *)allocator.allocate(sizeof(fleet_interfaces__srv__AssignTask_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(fleet_interfaces__srv__AssignTask_Response));
  bool success = fleet_interfaces__srv__AssignTask_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
fleet_interfaces__srv__AssignTask_Response__destroy(fleet_interfaces__srv__AssignTask_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    fleet_interfaces__srv__AssignTask_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
fleet_interfaces__srv__AssignTask_Response__Sequence__init(fleet_interfaces__srv__AssignTask_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  fleet_interfaces__srv__AssignTask_Response * data = NULL;

  if (size) {
    data = (fleet_interfaces__srv__AssignTask_Response *)allocator.zero_allocate(size, sizeof(fleet_interfaces__srv__AssignTask_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = fleet_interfaces__srv__AssignTask_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        fleet_interfaces__srv__AssignTask_Response__fini(&data[i - 1]);
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
fleet_interfaces__srv__AssignTask_Response__Sequence__fini(fleet_interfaces__srv__AssignTask_Response__Sequence * array)
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
      fleet_interfaces__srv__AssignTask_Response__fini(&array->data[i]);
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

fleet_interfaces__srv__AssignTask_Response__Sequence *
fleet_interfaces__srv__AssignTask_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  fleet_interfaces__srv__AssignTask_Response__Sequence * array = (fleet_interfaces__srv__AssignTask_Response__Sequence *)allocator.allocate(sizeof(fleet_interfaces__srv__AssignTask_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = fleet_interfaces__srv__AssignTask_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
fleet_interfaces__srv__AssignTask_Response__Sequence__destroy(fleet_interfaces__srv__AssignTask_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    fleet_interfaces__srv__AssignTask_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
fleet_interfaces__srv__AssignTask_Response__Sequence__are_equal(const fleet_interfaces__srv__AssignTask_Response__Sequence * lhs, const fleet_interfaces__srv__AssignTask_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!fleet_interfaces__srv__AssignTask_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
fleet_interfaces__srv__AssignTask_Response__Sequence__copy(
  const fleet_interfaces__srv__AssignTask_Response__Sequence * input,
  fleet_interfaces__srv__AssignTask_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(fleet_interfaces__srv__AssignTask_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    fleet_interfaces__srv__AssignTask_Response * data =
      (fleet_interfaces__srv__AssignTask_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!fleet_interfaces__srv__AssignTask_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          fleet_interfaces__srv__AssignTask_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!fleet_interfaces__srv__AssignTask_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
