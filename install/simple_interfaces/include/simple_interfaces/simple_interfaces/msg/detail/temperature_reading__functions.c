// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from simple_interfaces:msg/TemperatureReading.idl
// generated code does not contain a copyright notice
#include "simple_interfaces/msg/detail/temperature_reading__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `sensor_id`
#include "rosidl_runtime_c/string_functions.h"

bool
simple_interfaces__msg__TemperatureReading__init(simple_interfaces__msg__TemperatureReading * msg)
{
  if (!msg) {
    return false;
  }
  // temperature
  // sensor_id
  if (!rosidl_runtime_c__String__init(&msg->sensor_id)) {
    simple_interfaces__msg__TemperatureReading__fini(msg);
    return false;
  }
  return true;
}

void
simple_interfaces__msg__TemperatureReading__fini(simple_interfaces__msg__TemperatureReading * msg)
{
  if (!msg) {
    return;
  }
  // temperature
  // sensor_id
  rosidl_runtime_c__String__fini(&msg->sensor_id);
}

bool
simple_interfaces__msg__TemperatureReading__are_equal(const simple_interfaces__msg__TemperatureReading * lhs, const simple_interfaces__msg__TemperatureReading * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // temperature
  if (lhs->temperature != rhs->temperature) {
    return false;
  }
  // sensor_id
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->sensor_id), &(rhs->sensor_id)))
  {
    return false;
  }
  return true;
}

bool
simple_interfaces__msg__TemperatureReading__copy(
  const simple_interfaces__msg__TemperatureReading * input,
  simple_interfaces__msg__TemperatureReading * output)
{
  if (!input || !output) {
    return false;
  }
  // temperature
  output->temperature = input->temperature;
  // sensor_id
  if (!rosidl_runtime_c__String__copy(
      &(input->sensor_id), &(output->sensor_id)))
  {
    return false;
  }
  return true;
}

simple_interfaces__msg__TemperatureReading *
simple_interfaces__msg__TemperatureReading__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  simple_interfaces__msg__TemperatureReading * msg = (simple_interfaces__msg__TemperatureReading *)allocator.allocate(sizeof(simple_interfaces__msg__TemperatureReading), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(simple_interfaces__msg__TemperatureReading));
  bool success = simple_interfaces__msg__TemperatureReading__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
simple_interfaces__msg__TemperatureReading__destroy(simple_interfaces__msg__TemperatureReading * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    simple_interfaces__msg__TemperatureReading__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
simple_interfaces__msg__TemperatureReading__Sequence__init(simple_interfaces__msg__TemperatureReading__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  simple_interfaces__msg__TemperatureReading * data = NULL;

  if (size) {
    data = (simple_interfaces__msg__TemperatureReading *)allocator.zero_allocate(size, sizeof(simple_interfaces__msg__TemperatureReading), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = simple_interfaces__msg__TemperatureReading__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        simple_interfaces__msg__TemperatureReading__fini(&data[i - 1]);
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
simple_interfaces__msg__TemperatureReading__Sequence__fini(simple_interfaces__msg__TemperatureReading__Sequence * array)
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
      simple_interfaces__msg__TemperatureReading__fini(&array->data[i]);
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

simple_interfaces__msg__TemperatureReading__Sequence *
simple_interfaces__msg__TemperatureReading__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  simple_interfaces__msg__TemperatureReading__Sequence * array = (simple_interfaces__msg__TemperatureReading__Sequence *)allocator.allocate(sizeof(simple_interfaces__msg__TemperatureReading__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = simple_interfaces__msg__TemperatureReading__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
simple_interfaces__msg__TemperatureReading__Sequence__destroy(simple_interfaces__msg__TemperatureReading__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    simple_interfaces__msg__TemperatureReading__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
simple_interfaces__msg__TemperatureReading__Sequence__are_equal(const simple_interfaces__msg__TemperatureReading__Sequence * lhs, const simple_interfaces__msg__TemperatureReading__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!simple_interfaces__msg__TemperatureReading__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
simple_interfaces__msg__TemperatureReading__Sequence__copy(
  const simple_interfaces__msg__TemperatureReading__Sequence * input,
  simple_interfaces__msg__TemperatureReading__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(simple_interfaces__msg__TemperatureReading);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    simple_interfaces__msg__TemperatureReading * data =
      (simple_interfaces__msg__TemperatureReading *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!simple_interfaces__msg__TemperatureReading__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          simple_interfaces__msg__TemperatureReading__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!simple_interfaces__msg__TemperatureReading__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
