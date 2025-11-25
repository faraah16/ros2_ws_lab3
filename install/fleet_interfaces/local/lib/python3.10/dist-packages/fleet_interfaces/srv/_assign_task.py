# generated from rosidl_generator_py/resource/_idl.py.em
# with input from fleet_interfaces:srv/AssignTask.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_AssignTask_Request(type):
    """Metaclass of message 'AssignTask_Request'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('fleet_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'fleet_interfaces.srv.AssignTask_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__assign_task__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__assign_task__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__assign_task__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__assign_task__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__assign_task__request

            from geometry_msgs.msg import Point
            if Point.__class__._TYPE_SUPPORT is None:
                Point.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class AssignTask_Request(metaclass=Metaclass_AssignTask_Request):
    """Message class 'AssignTask_Request'."""

    __slots__ = [
        '_robot_id',
        '_task_id',
        '_task_type',
        '_waypoints',
        '_max_velocity',
        '_estimated_duration',
        '_required_capabilities',
    ]

    _fields_and_field_types = {
        'robot_id': 'string',
        'task_id': 'string',
        'task_type': 'string',
        'waypoints': 'sequence<geometry_msgs/Point>',
        'max_velocity': 'float',
        'estimated_duration': 'float',
        'required_capabilities': 'sequence<string>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Point')),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.UnboundedString()),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.robot_id = kwargs.get('robot_id', str())
        self.task_id = kwargs.get('task_id', str())
        self.task_type = kwargs.get('task_type', str())
        self.waypoints = kwargs.get('waypoints', [])
        self.max_velocity = kwargs.get('max_velocity', float())
        self.estimated_duration = kwargs.get('estimated_duration', float())
        self.required_capabilities = kwargs.get('required_capabilities', [])

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.robot_id != other.robot_id:
            return False
        if self.task_id != other.task_id:
            return False
        if self.task_type != other.task_type:
            return False
        if self.waypoints != other.waypoints:
            return False
        if self.max_velocity != other.max_velocity:
            return False
        if self.estimated_duration != other.estimated_duration:
            return False
        if self.required_capabilities != other.required_capabilities:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def robot_id(self):
        """Message field 'robot_id'."""
        return self._robot_id

    @robot_id.setter
    def robot_id(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'robot_id' field must be of type 'str'"
        self._robot_id = value

    @builtins.property
    def task_id(self):
        """Message field 'task_id'."""
        return self._task_id

    @task_id.setter
    def task_id(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'task_id' field must be of type 'str'"
        self._task_id = value

    @builtins.property
    def task_type(self):
        """Message field 'task_type'."""
        return self._task_type

    @task_type.setter
    def task_type(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'task_type' field must be of type 'str'"
        self._task_type = value

    @builtins.property
    def waypoints(self):
        """Message field 'waypoints'."""
        return self._waypoints

    @waypoints.setter
    def waypoints(self, value):
        if __debug__:
            from geometry_msgs.msg import Point
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, Point) for v in value) and
                 True), \
                "The 'waypoints' field must be a set or sequence and each value of type 'Point'"
        self._waypoints = value

    @builtins.property
    def max_velocity(self):
        """Message field 'max_velocity'."""
        return self._max_velocity

    @max_velocity.setter
    def max_velocity(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'max_velocity' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'max_velocity' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._max_velocity = value

    @builtins.property
    def estimated_duration(self):
        """Message field 'estimated_duration'."""
        return self._estimated_duration

    @estimated_duration.setter
    def estimated_duration(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'estimated_duration' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'estimated_duration' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._estimated_duration = value

    @builtins.property
    def required_capabilities(self):
        """Message field 'required_capabilities'."""
        return self._required_capabilities

    @required_capabilities.setter
    def required_capabilities(self, value):
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, str) for v in value) and
                 True), \
                "The 'required_capabilities' field must be a set or sequence and each value of type 'str'"
        self._required_capabilities = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import math

# already imported above
# import rosidl_parser.definition


class Metaclass_AssignTask_Response(type):
    """Metaclass of message 'AssignTask_Response'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('fleet_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'fleet_interfaces.srv.AssignTask_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__assign_task__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__assign_task__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__assign_task__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__assign_task__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__assign_task__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class AssignTask_Response(metaclass=Metaclass_AssignTask_Response):
    """Message class 'AssignTask_Response'."""

    __slots__ = [
        '_success',
        '_message',
        '_assigned_robot_id',
        '_estimated_completion_time',
    ]

    _fields_and_field_types = {
        'success': 'boolean',
        'message': 'string',
        'assigned_robot_id': 'string',
        'estimated_completion_time': 'float',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.success = kwargs.get('success', bool())
        self.message = kwargs.get('message', str())
        self.assigned_robot_id = kwargs.get('assigned_robot_id', str())
        self.estimated_completion_time = kwargs.get('estimated_completion_time', float())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.success != other.success:
            return False
        if self.message != other.message:
            return False
        if self.assigned_robot_id != other.assigned_robot_id:
            return False
        if self.estimated_completion_time != other.estimated_completion_time:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def success(self):
        """Message field 'success'."""
        return self._success

    @success.setter
    def success(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'success' field must be of type 'bool'"
        self._success = value

    @builtins.property
    def message(self):
        """Message field 'message'."""
        return self._message

    @message.setter
    def message(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'message' field must be of type 'str'"
        self._message = value

    @builtins.property
    def assigned_robot_id(self):
        """Message field 'assigned_robot_id'."""
        return self._assigned_robot_id

    @assigned_robot_id.setter
    def assigned_robot_id(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'assigned_robot_id' field must be of type 'str'"
        self._assigned_robot_id = value

    @builtins.property
    def estimated_completion_time(self):
        """Message field 'estimated_completion_time'."""
        return self._estimated_completion_time

    @estimated_completion_time.setter
    def estimated_completion_time(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'estimated_completion_time' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'estimated_completion_time' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._estimated_completion_time = value


class Metaclass_AssignTask(type):
    """Metaclass of service 'AssignTask'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('fleet_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'fleet_interfaces.srv.AssignTask')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__assign_task

            from fleet_interfaces.srv import _assign_task
            if _assign_task.Metaclass_AssignTask_Request._TYPE_SUPPORT is None:
                _assign_task.Metaclass_AssignTask_Request.__import_type_support__()
            if _assign_task.Metaclass_AssignTask_Response._TYPE_SUPPORT is None:
                _assign_task.Metaclass_AssignTask_Response.__import_type_support__()


class AssignTask(metaclass=Metaclass_AssignTask):
    from fleet_interfaces.srv._assign_task import AssignTask_Request as Request
    from fleet_interfaces.srv._assign_task import AssignTask_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
