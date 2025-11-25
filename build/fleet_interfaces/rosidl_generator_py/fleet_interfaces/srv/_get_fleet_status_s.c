// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from fleet_interfaces:srv/GetFleetStatus.idl
// generated code does not contain a copyright notice
#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
#include <Python.h>
#include <stdbool.h>
#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-function"
#endif
#include "numpy/ndarrayobject.h"
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif
#include "rosidl_runtime_c/visibility_control.h"
#include "fleet_interfaces/srv/detail/get_fleet_status__struct.h"
#include "fleet_interfaces/srv/detail/get_fleet_status__functions.h"

#include "rosidl_runtime_c/string.h"
#include "rosidl_runtime_c/string_functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool fleet_interfaces__srv__get_fleet_status__request__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[62];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp("fleet_interfaces.srv._get_fleet_status.GetFleetStatus_Request", full_classname_dest, 61) == 0);
  }
  fleet_interfaces__srv__GetFleetStatus_Request * ros_message = _ros_message;
  {  // include_offline_robots
    PyObject * field = PyObject_GetAttrString(_pymsg, "include_offline_robots");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->include_offline_robots = (Py_True == field);
    Py_DECREF(field);
  }
  {  // robot_type_filter
    PyObject * field = PyObject_GetAttrString(_pymsg, "robot_type_filter");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->robot_type_filter, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * fleet_interfaces__srv__get_fleet_status__request__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of GetFleetStatus_Request */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("fleet_interfaces.srv._get_fleet_status");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "GetFleetStatus_Request");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  fleet_interfaces__srv__GetFleetStatus_Request * ros_message = (fleet_interfaces__srv__GetFleetStatus_Request *)raw_ros_message;
  {  // include_offline_robots
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->include_offline_robots ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "include_offline_robots", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // robot_type_filter
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->robot_type_filter.data,
      strlen(ros_message->robot_type_filter.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "robot_type_filter", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}

#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
// already included above
// #include <Python.h>
// already included above
// #include <stdbool.h>
// already included above
// #include "numpy/ndarrayobject.h"
// already included above
// #include "rosidl_runtime_c/visibility_control.h"
// already included above
// #include "fleet_interfaces/srv/detail/get_fleet_status__struct.h"
// already included above
// #include "fleet_interfaces/srv/detail/get_fleet_status__functions.h"

#include "rosidl_runtime_c/primitives_sequence.h"
#include "rosidl_runtime_c/primitives_sequence_functions.h"
// already included above
// #include "rosidl_runtime_c/string.h"
// already included above
// #include "rosidl_runtime_c/string_functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool fleet_interfaces__srv__get_fleet_status__response__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[63];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp("fleet_interfaces.srv._get_fleet_status.GetFleetStatus_Response", full_classname_dest, 62) == 0);
  }
  fleet_interfaces__srv__GetFleetStatus_Response * ros_message = _ros_message;
  {  // total_robots
    PyObject * field = PyObject_GetAttrString(_pymsg, "total_robots");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->total_robots = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // operational_robots
    PyObject * field = PyObject_GetAttrString(_pymsg, "operational_robots");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->operational_robots = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // robots_on_task
    PyObject * field = PyObject_GetAttrString(_pymsg, "robots_on_task");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->robots_on_task = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // robots_charging
    PyObject * field = PyObject_GetAttrString(_pymsg, "robots_charging");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->robots_charging = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // robots_with_errors
    PyObject * field = PyObject_GetAttrString(_pymsg, "robots_with_errors");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->robots_with_errors = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // robot_ids
    PyObject * field = PyObject_GetAttrString(_pymsg, "robot_ids");
    if (!field) {
      return false;
    }
    {
      PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'robot_ids'");
      if (!seq_field) {
        Py_DECREF(field);
        return false;
      }
      Py_ssize_t size = PySequence_Size(field);
      if (-1 == size) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
      if (!rosidl_runtime_c__String__Sequence__init(&(ros_message->robot_ids), size)) {
        PyErr_SetString(PyExc_RuntimeError, "unable to create String__Sequence ros_message");
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
      rosidl_runtime_c__String * dest = ros_message->robot_ids.data;
      for (Py_ssize_t i = 0; i < size; ++i) {
        PyObject * item = PySequence_Fast_GET_ITEM(seq_field, i);
        if (!item) {
          Py_DECREF(seq_field);
          Py_DECREF(field);
          return false;
        }
        assert(PyUnicode_Check(item));
        PyObject * encoded_item = PyUnicode_AsUTF8String(item);
        if (!encoded_item) {
          Py_DECREF(seq_field);
          Py_DECREF(field);
          return false;
        }
        rosidl_runtime_c__String__assign(&dest[i], PyBytes_AS_STRING(encoded_item));
        Py_DECREF(encoded_item);
      }
      Py_DECREF(seq_field);
    }
    Py_DECREF(field);
  }
  {  // average_battery_level
    PyObject * field = PyObject_GetAttrString(_pymsg, "average_battery_level");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->average_battery_level = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * fleet_interfaces__srv__get_fleet_status__response__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of GetFleetStatus_Response */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("fleet_interfaces.srv._get_fleet_status");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "GetFleetStatus_Response");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  fleet_interfaces__srv__GetFleetStatus_Response * ros_message = (fleet_interfaces__srv__GetFleetStatus_Response *)raw_ros_message;
  {  // total_robots
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->total_robots);
    {
      int rc = PyObject_SetAttrString(_pymessage, "total_robots", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // operational_robots
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->operational_robots);
    {
      int rc = PyObject_SetAttrString(_pymessage, "operational_robots", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // robots_on_task
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->robots_on_task);
    {
      int rc = PyObject_SetAttrString(_pymessage, "robots_on_task", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // robots_charging
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->robots_charging);
    {
      int rc = PyObject_SetAttrString(_pymessage, "robots_charging", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // robots_with_errors
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->robots_with_errors);
    {
      int rc = PyObject_SetAttrString(_pymessage, "robots_with_errors", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // robot_ids
    PyObject * field = NULL;
    size_t size = ros_message->robot_ids.size;
    rosidl_runtime_c__String * src = ros_message->robot_ids.data;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    for (size_t i = 0; i < size; ++i) {
      PyObject * decoded_item = PyUnicode_DecodeUTF8(src[i].data, strlen(src[i].data), "replace");
      if (!decoded_item) {
        return NULL;
      }
      int rc = PyList_SetItem(field, i, decoded_item);
      (void)rc;
      assert(rc == 0);
    }
    assert(PySequence_Check(field));
    {
      int rc = PyObject_SetAttrString(_pymessage, "robot_ids", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // average_battery_level
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->average_battery_level);
    {
      int rc = PyObject_SetAttrString(_pymessage, "average_battery_level", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
