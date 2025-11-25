// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from simple_interfaces:msg/TemperatureReading.idl
// generated code does not contain a copyright notice

#ifndef SIMPLE_INTERFACES__MSG__DETAIL__TEMPERATURE_READING__STRUCT_H_
#define SIMPLE_INTERFACES__MSG__DETAIL__TEMPERATURE_READING__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'sensor_id'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/TemperatureReading in the package simple_interfaces.
/**
  * TemperatureReading.msg
  * A simple temperature sensor reading
 */
typedef struct simple_interfaces__msg__TemperatureReading
{
  /// Temperature in Celsius
  float temperature;
  /// Which sensor
  rosidl_runtime_c__String sensor_id;
} simple_interfaces__msg__TemperatureReading;

// Struct for a sequence of simple_interfaces__msg__TemperatureReading.
typedef struct simple_interfaces__msg__TemperatureReading__Sequence
{
  simple_interfaces__msg__TemperatureReading * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} simple_interfaces__msg__TemperatureReading__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SIMPLE_INTERFACES__MSG__DETAIL__TEMPERATURE_READING__STRUCT_H_
