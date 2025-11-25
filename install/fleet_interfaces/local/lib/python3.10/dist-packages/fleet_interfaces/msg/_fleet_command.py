# generated from rosidl_generator_py/resource/_idl.py.em
# with input from fleet_interfaces:msg/FleetCommand.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_FleetCommand(type):
    """Metaclass of message 'FleetCommand'."""

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
                'fleet_interfaces.msg.FleetCommand')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__fleet_command
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__fleet_command
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__fleet_command
            cls._TYPE_SUPPORT = module.type_support_msg__msg__fleet_command
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__fleet_command

            from builtin_interfaces.msg import Time
            if Time.__class__._TYPE_SUPPORT is None:
                Time.__class__.__import_type_support__()

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


class FleetCommand(metaclass=Metaclass_FleetCommand):
    """Message class 'FleetCommand'."""

    __slots__ = [
        '_command_id',
        '_timestamp',
        '_target_robot_ids',
        '_robot_type_filter',
        '_command_type',
        '_target_position',
        '_task_description',
        '_priority',
        '_max_velocity',
        '_timeout',
        '_allow_interruption',
    ]

    _fields_and_field_types = {
        'command_id': 'string',
        'timestamp': 'builtin_interfaces/Time',
        'target_robot_ids': 'sequence<string>',
        'robot_type_filter': 'string',
        'command_type': 'string',
        'target_position': 'geometry_msgs/Point',
        'task_description': 'string',
        'priority': 'uint8',
        'max_velocity': 'float',
        'timeout': 'float',
        'allow_interruption': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['builtin_interfaces', 'msg'], 'Time'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.UnboundedString()),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Point'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.command_id = kwargs.get('command_id', str())
        from builtin_interfaces.msg import Time
        self.timestamp = kwargs.get('timestamp', Time())
        self.target_robot_ids = kwargs.get('target_robot_ids', [])
        self.robot_type_filter = kwargs.get('robot_type_filter', str())
        self.command_type = kwargs.get('command_type', str())
        from geometry_msgs.msg import Point
        self.target_position = kwargs.get('target_position', Point())
        self.task_description = kwargs.get('task_description', str())
        self.priority = kwargs.get('priority', int())
        self.max_velocity = kwargs.get('max_velocity', float())
        self.timeout = kwargs.get('timeout', float())
        self.allow_interruption = kwargs.get('allow_interruption', bool())

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
        if self.command_id != other.command_id:
            return False
        if self.timestamp != other.timestamp:
            return False
        if self.target_robot_ids != other.target_robot_ids:
            return False
        if self.robot_type_filter != other.robot_type_filter:
            return False
        if self.command_type != other.command_type:
            return False
        if self.target_position != other.target_position:
            return False
        if self.task_description != other.task_description:
            return False
        if self.priority != other.priority:
            return False
        if self.max_velocity != other.max_velocity:
            return False
        if self.timeout != other.timeout:
            return False
        if self.allow_interruption != other.allow_interruption:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def command_id(self):
        """Message field 'command_id'."""
        return self._command_id

    @command_id.setter
    def command_id(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'command_id' field must be of type 'str'"
        self._command_id = value

    @builtins.property
    def timestamp(self):
        """Message field 'timestamp'."""
        return self._timestamp

    @timestamp.setter
    def timestamp(self, value):
        if __debug__:
            from builtin_interfaces.msg import Time
            assert \
                isinstance(value, Time), \
                "The 'timestamp' field must be a sub message of type 'Time'"
        self._timestamp = value

    @builtins.property
    def target_robot_ids(self):
        """Message field 'target_robot_ids'."""
        return self._target_robot_ids

    @target_robot_ids.setter
    def target_robot_ids(self, value):
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
                "The 'target_robot_ids' field must be a set or sequence and each value of type 'str'"
        self._target_robot_ids = value

    @builtins.property
    def robot_type_filter(self):
        """Message field 'robot_type_filter'."""
        return self._robot_type_filter

    @robot_type_filter.setter
    def robot_type_filter(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'robot_type_filter' field must be of type 'str'"
        self._robot_type_filter = value

    @builtins.property
    def command_type(self):
        """Message field 'command_type'."""
        return self._command_type

    @command_type.setter
    def command_type(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'command_type' field must be of type 'str'"
        self._command_type = value

    @builtins.property
    def target_position(self):
        """Message field 'target_position'."""
        return self._target_position

    @target_position.setter
    def target_position(self, value):
        if __debug__:
            from geometry_msgs.msg import Point
            assert \
                isinstance(value, Point), \
                "The 'target_position' field must be a sub message of type 'Point'"
        self._target_position = value

    @builtins.property
    def task_description(self):
        """Message field 'task_description'."""
        return self._task_description

    @task_description.setter
    def task_description(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'task_description' field must be of type 'str'"
        self._task_description = value

    @builtins.property
    def priority(self):
        """Message field 'priority'."""
        return self._priority

    @priority.setter
    def priority(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'priority' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'priority' field must be an unsigned integer in [0, 255]"
        self._priority = value

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
    def timeout(self):
        """Message field 'timeout'."""
        return self._timeout

    @timeout.setter
    def timeout(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'timeout' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'timeout' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._timeout = value

    @builtins.property
    def allow_interruption(self):
        """Message field 'allow_interruption'."""
        return self._allow_interruption

    @allow_interruption.setter
    def allow_interruption(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'allow_interruption' field must be of type 'bool'"
        self._allow_interruption = value
