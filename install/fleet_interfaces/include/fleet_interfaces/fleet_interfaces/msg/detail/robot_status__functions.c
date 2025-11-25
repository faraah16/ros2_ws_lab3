// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from fleet_interfaces:msg/RobotStatus.idl
// generated code does not contain a copyright notice
#include "fleet_interfaces/msg/detail/robot_status__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `robot_id`
// Member `robot_type`
// Member `location`
// Member `battery_health`
// Member `current_task_id`
// Member `task_status`
// Member `active_warnings`
// Member `active_errors`
#include "rosidl_runtime_c/string_functions.h"
// Member `pose`
#include "geometry_msgs/msg/detail/pose__functions.h"
// Member `velocity`
#include "geometry_msgs/msg/detail/twist__functions.h"

bool
fleet_interfaces__msg__RobotStatus__init(fleet_interfaces__msg__RobotStatus * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    fleet_interfaces__msg__RobotStatus__fini(msg);
    return false;
  }
  // robot_id
  if (!rosidl_runtime_c__String__init(&msg->robot_id)) {
    fleet_interfaces__msg__RobotStatus__fini(msg);
    return false;
  }
  // robot_type
  if (!rosidl_runtime_c__String__init(&msg->robot_type)) {
    fleet_interfaces__msg__RobotStatus__fini(msg);
    return false;
  }
  // location
  if (!rosidl_runtime_c__String__init(&msg->location)) {
    fleet_interfaces__msg__RobotStatus__fini(msg);
    return false;
  }
  // pose
  if (!geometry_msgs__msg__Pose__init(&msg->pose)) {
    fleet_interfaces__msg__RobotStatus__fini(msg);
    return false;
  }
  // velocity
  if (!geometry_msgs__msg__Twist__init(&msg->velocity)) {
    fleet_interfaces__msg__RobotStatus__fini(msg);
    return false;
  }
  // battery_voltage
  // battery_current
  // battery_percentage
  // is_charging
  // battery_health
  if (!rosidl_runtime_c__String__init(&msg->battery_health)) {
    fleet_interfaces__msg__RobotStatus__fini(msg);
    return false;
  }
  // current_task_id
  if (!rosidl_runtime_c__String__init(&msg->current_task_id)) {
    fleet_interfaces__msg__RobotStatus__fini(msg);
    return false;
  }
  // task_status
  if (!rosidl_runtime_c__String__init(&msg->task_status)) {
    fleet_interfaces__msg__RobotStatus__fini(msg);
    return false;
  }
  // task_progress
  // is_operational
  // cpu_temperature
  // network_signal
  // active_warnings
  if (!rosidl_runtime_c__String__Sequence__init(&msg->active_warnings, 0)) {
    fleet_interfaces__msg__RobotStatus__fini(msg);
    return false;
  }
  // active_errors
  if (!rosidl_runtime_c__String__Sequence__init(&msg->active_errors, 0)) {
    fleet_interfaces__msg__RobotStatus__fini(msg);
    return false;
  }
  // distance_traveled
  // tasks_completed
  return true;
}

void
fleet_interfaces__msg__RobotStatus__fini(fleet_interfaces__msg__RobotStatus * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // robot_id
  rosidl_runtime_c__String__fini(&msg->robot_id);
  // robot_type
  rosidl_runtime_c__String__fini(&msg->robot_type);
  // location
  rosidl_runtime_c__String__fini(&msg->location);
  // pose
  geometry_msgs__msg__Pose__fini(&msg->pose);
  // velocity
  geometry_msgs__msg__Twist__fini(&msg->velocity);
  // battery_voltage
  // battery_current
  // battery_percentage
  // is_charging
  // battery_health
  rosidl_runtime_c__String__fini(&msg->battery_health);
  // current_task_id
  rosidl_runtime_c__String__fini(&msg->current_task_id);
  // task_status
  rosidl_runtime_c__String__fini(&msg->task_status);
  // task_progress
  // is_operational
  // cpu_temperature
  // network_signal
  // active_warnings
  rosidl_runtime_c__String__Sequence__fini(&msg->active_warnings);
  // active_errors
  rosidl_runtime_c__String__Sequence__fini(&msg->active_errors);
  // distance_traveled
  // tasks_completed
}

bool
fleet_interfaces__msg__RobotStatus__are_equal(const fleet_interfaces__msg__RobotStatus * lhs, const fleet_interfaces__msg__RobotStatus * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__are_equal(
      &(lhs->header), &(rhs->header)))
  {
    return false;
  }
  // robot_id
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->robot_id), &(rhs->robot_id)))
  {
    return false;
  }
  // robot_type
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->robot_type), &(rhs->robot_type)))
  {
    return false;
  }
  // location
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->location), &(rhs->location)))
  {
    return false;
  }
  // pose
  if (!geometry_msgs__msg__Pose__are_equal(
      &(lhs->pose), &(rhs->pose)))
  {
    return false;
  }
  // velocity
  if (!geometry_msgs__msg__Twist__are_equal(
      &(lhs->velocity), &(rhs->velocity)))
  {
    return false;
  }
  // battery_voltage
  if (lhs->battery_voltage != rhs->battery_voltage) {
    return false;
  }
  // battery_current
  if (lhs->battery_current != rhs->battery_current) {
    return false;
  }
  // battery_percentage
  if (lhs->battery_percentage != rhs->battery_percentage) {
    return false;
  }
  // is_charging
  if (lhs->is_charging != rhs->is_charging) {
    return false;
  }
  // battery_health
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->battery_health), &(rhs->battery_health)))
  {
    return false;
  }
  // current_task_id
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->current_task_id), &(rhs->current_task_id)))
  {
    return false;
  }
  // task_status
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->task_status), &(rhs->task_status)))
  {
    return false;
  }
  // task_progress
  if (lhs->task_progress != rhs->task_progress) {
    return false;
  }
  // is_operational
  if (lhs->is_operational != rhs->is_operational) {
    return false;
  }
  // cpu_temperature
  if (lhs->cpu_temperature != rhs->cpu_temperature) {
    return false;
  }
  // network_signal
  if (lhs->network_signal != rhs->network_signal) {
    return false;
  }
  // active_warnings
  if (!rosidl_runtime_c__String__Sequence__are_equal(
      &(lhs->active_warnings), &(rhs->active_warnings)))
  {
    return false;
  }
  // active_errors
  if (!rosidl_runtime_c__String__Sequence__are_equal(
      &(lhs->active_errors), &(rhs->active_errors)))
  {
    return false;
  }
  // distance_traveled
  if (lhs->distance_traveled != rhs->distance_traveled) {
    return false;
  }
  // tasks_completed
  if (lhs->tasks_completed != rhs->tasks_completed) {
    return false;
  }
  return true;
}

bool
fleet_interfaces__msg__RobotStatus__copy(
  const fleet_interfaces__msg__RobotStatus * input,
  fleet_interfaces__msg__RobotStatus * output)
{
  if (!input || !output) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__copy(
      &(input->header), &(output->header)))
  {
    return false;
  }
  // robot_id
  if (!rosidl_runtime_c__String__copy(
      &(input->robot_id), &(output->robot_id)))
  {
    return false;
  }
  // robot_type
  if (!rosidl_runtime_c__String__copy(
      &(input->robot_type), &(output->robot_type)))
  {
    return false;
  }
  // location
  if (!rosidl_runtime_c__String__copy(
      &(input->location), &(output->location)))
  {
    return false;
  }
  // pose
  if (!geometry_msgs__msg__Pose__copy(
      &(input->pose), &(output->pose)))
  {
    return false;
  }
  // velocity
  if (!geometry_msgs__msg__Twist__copy(
      &(input->velocity), &(output->velocity)))
  {
    return false;
  }
  // battery_voltage
  output->battery_voltage = input->battery_voltage;
  // battery_current
  output->battery_current = input->battery_current;
  // battery_percentage
  output->battery_percentage = input->battery_percentage;
  // is_charging
  output->is_charging = input->is_charging;
  // battery_health
  if (!rosidl_runtime_c__String__copy(
      &(input->battery_health), &(output->battery_health)))
  {
    return false;
  }
  // current_task_id
  if (!rosidl_runtime_c__String__copy(
      &(input->current_task_id), &(output->current_task_id)))
  {
    return false;
  }
  // task_status
  if (!rosidl_runtime_c__String__copy(
      &(input->task_status), &(output->task_status)))
  {
    return false;
  }
  // task_progress
  output->task_progress = input->task_progress;
  // is_operational
  output->is_operational = input->is_operational;
  // cpu_temperature
  output->cpu_temperature = input->cpu_temperature;
  // network_signal
  output->network_signal = input->network_signal;
  // active_warnings
  if (!rosidl_runtime_c__String__Sequence__copy(
      &(input->active_warnings), &(output->active_warnings)))
  {
    return false;
  }
  // active_errors
  if (!rosidl_runtime_c__String__Sequence__copy(
      &(input->active_errors), &(output->active_errors)))
  {
    return false;
  }
  // distance_traveled
  output->distance_traveled = input->distance_traveled;
  // tasks_completed
  output->tasks_completed = input->tasks_completed;
  return true;
}

fleet_interfaces__msg__RobotStatus *
fleet_interfaces__msg__RobotStatus__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  fleet_interfaces__msg__RobotStatus * msg = (fleet_interfaces__msg__RobotStatus *)allocator.allocate(sizeof(fleet_interfaces__msg__RobotStatus), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(fleet_interfaces__msg__RobotStatus));
  bool success = fleet_interfaces__msg__RobotStatus__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
fleet_interfaces__msg__RobotStatus__destroy(fleet_interfaces__msg__RobotStatus * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    fleet_interfaces__msg__RobotStatus__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
fleet_interfaces__msg__RobotStatus__Sequence__init(fleet_interfaces__msg__RobotStatus__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  fleet_interfaces__msg__RobotStatus * data = NULL;

  if (size) {
    data = (fleet_interfaces__msg__RobotStatus *)allocator.zero_allocate(size, sizeof(fleet_interfaces__msg__RobotStatus), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = fleet_interfaces__msg__RobotStatus__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        fleet_interfaces__msg__RobotStatus__fini(&data[i - 1]);
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
fleet_interfaces__msg__RobotStatus__Sequence__fini(fleet_interfaces__msg__RobotStatus__Sequence * array)
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
      fleet_interfaces__msg__RobotStatus__fini(&array->data[i]);
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

fleet_interfaces__msg__RobotStatus__Sequence *
fleet_interfaces__msg__RobotStatus__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  fleet_interfaces__msg__RobotStatus__Sequence * array = (fleet_interfaces__msg__RobotStatus__Sequence *)allocator.allocate(sizeof(fleet_interfaces__msg__RobotStatus__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = fleet_interfaces__msg__RobotStatus__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
fleet_interfaces__msg__RobotStatus__Sequence__destroy(fleet_interfaces__msg__RobotStatus__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    fleet_interfaces__msg__RobotStatus__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
fleet_interfaces__msg__RobotStatus__Sequence__are_equal(const fleet_interfaces__msg__RobotStatus__Sequence * lhs, const fleet_interfaces__msg__RobotStatus__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!fleet_interfaces__msg__RobotStatus__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
fleet_interfaces__msg__RobotStatus__Sequence__copy(
  const fleet_interfaces__msg__RobotStatus__Sequence * input,
  fleet_interfaces__msg__RobotStatus__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(fleet_interfaces__msg__RobotStatus);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    fleet_interfaces__msg__RobotStatus * data =
      (fleet_interfaces__msg__RobotStatus *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!fleet_interfaces__msg__RobotStatus__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          fleet_interfaces__msg__RobotStatus__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!fleet_interfaces__msg__RobotStatus__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
