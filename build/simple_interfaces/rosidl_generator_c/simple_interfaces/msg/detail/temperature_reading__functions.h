// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from simple_interfaces:msg/TemperatureReading.idl
// generated code does not contain a copyright notice

#ifndef SIMPLE_INTERFACES__MSG__DETAIL__TEMPERATURE_READING__FUNCTIONS_H_
#define SIMPLE_INTERFACES__MSG__DETAIL__TEMPERATURE_READING__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "simple_interfaces/msg/rosidl_generator_c__visibility_control.h"

#include "simple_interfaces/msg/detail/temperature_reading__struct.h"

/// Initialize msg/TemperatureReading message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * simple_interfaces__msg__TemperatureReading
 * )) before or use
 * simple_interfaces__msg__TemperatureReading__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_simple_interfaces
bool
simple_interfaces__msg__TemperatureReading__init(simple_interfaces__msg__TemperatureReading * msg);

/// Finalize msg/TemperatureReading message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_simple_interfaces
void
simple_interfaces__msg__TemperatureReading__fini(simple_interfaces__msg__TemperatureReading * msg);

/// Create msg/TemperatureReading message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * simple_interfaces__msg__TemperatureReading__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_simple_interfaces
simple_interfaces__msg__TemperatureReading *
simple_interfaces__msg__TemperatureReading__create();

/// Destroy msg/TemperatureReading message.
/**
 * It calls
 * simple_interfaces__msg__TemperatureReading__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_simple_interfaces
void
simple_interfaces__msg__TemperatureReading__destroy(simple_interfaces__msg__TemperatureReading * msg);

/// Check for msg/TemperatureReading message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_simple_interfaces
bool
simple_interfaces__msg__TemperatureReading__are_equal(const simple_interfaces__msg__TemperatureReading * lhs, const simple_interfaces__msg__TemperatureReading * rhs);

/// Copy a msg/TemperatureReading message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_simple_interfaces
bool
simple_interfaces__msg__TemperatureReading__copy(
  const simple_interfaces__msg__TemperatureReading * input,
  simple_interfaces__msg__TemperatureReading * output);

/// Initialize array of msg/TemperatureReading messages.
/**
 * It allocates the memory for the number of elements and calls
 * simple_interfaces__msg__TemperatureReading__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_simple_interfaces
bool
simple_interfaces__msg__TemperatureReading__Sequence__init(simple_interfaces__msg__TemperatureReading__Sequence * array, size_t size);

/// Finalize array of msg/TemperatureReading messages.
/**
 * It calls
 * simple_interfaces__msg__TemperatureReading__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_simple_interfaces
void
simple_interfaces__msg__TemperatureReading__Sequence__fini(simple_interfaces__msg__TemperatureReading__Sequence * array);

/// Create array of msg/TemperatureReading messages.
/**
 * It allocates the memory for the array and calls
 * simple_interfaces__msg__TemperatureReading__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_simple_interfaces
simple_interfaces__msg__TemperatureReading__Sequence *
simple_interfaces__msg__TemperatureReading__Sequence__create(size_t size);

/// Destroy array of msg/TemperatureReading messages.
/**
 * It calls
 * simple_interfaces__msg__TemperatureReading__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_simple_interfaces
void
simple_interfaces__msg__TemperatureReading__Sequence__destroy(simple_interfaces__msg__TemperatureReading__Sequence * array);

/// Check for msg/TemperatureReading message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_simple_interfaces
bool
simple_interfaces__msg__TemperatureReading__Sequence__are_equal(const simple_interfaces__msg__TemperatureReading__Sequence * lhs, const simple_interfaces__msg__TemperatureReading__Sequence * rhs);

/// Copy an array of msg/TemperatureReading messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_simple_interfaces
bool
simple_interfaces__msg__TemperatureReading__Sequence__copy(
  const simple_interfaces__msg__TemperatureReading__Sequence * input,
  simple_interfaces__msg__TemperatureReading__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // SIMPLE_INTERFACES__MSG__DETAIL__TEMPERATURE_READING__FUNCTIONS_H_
