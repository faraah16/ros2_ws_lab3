# generated from rosidl_generator_py/resource/_idl.py.em
# with input from fleet_interfaces:msg/RobotStatus.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_RobotStatus(type):
    """Metaclass of message 'RobotStatus'."""

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
                'fleet_interfaces.msg.RobotStatus')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__robot_status
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__robot_status
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__robot_status
            cls._TYPE_SUPPORT = module.type_support_msg__msg__robot_status
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__robot_status

            from geometry_msgs.msg import Pose
            if Pose.__class__._TYPE_SUPPORT is None:
                Pose.__class__.__import_type_support__()

            from geometry_msgs.msg import Twist
            if Twist.__class__._TYPE_SUPPORT is None:
                Twist.__class__.__import_type_support__()

            from std_msgs.msg import Header
            if Header.__class__._TYPE_SUPPORT is None:
                Header.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class RobotStatus(metaclass=Metaclass_RobotStatus):
    """Message class 'RobotStatus'."""

    __slots__ = [
        '_header',
        '_robot_id',
        '_robot_type',
        '_location',
        '_pose',
        '_velocity',
        '_battery_voltage',
        '_battery_current',
        '_battery_percentage',
        '_is_charging',
        '_battery_health',
        '_current_task_id',
        '_task_status',
        '_task_progress',
        '_is_operational',
        '_cpu_temperature',
        '_network_signal',
        '_active_warnings',
        '_active_errors',
        '_distance_traveled',
        '_tasks_completed',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'robot_id': 'string',
        'robot_type': 'string',
        'location': 'string',
        'pose': 'geometry_msgs/Pose',
        'velocity': 'geometry_msgs/Twist',
        'battery_voltage': 'float',
        'battery_current': 'float',
        'battery_percentage': 'uint8',
        'is_charging': 'boolean',
        'battery_health': 'string',
        'current_task_id': 'string',
        'task_status': 'string',
        'task_progress': 'uint8',
        'is_operational': 'boolean',
        'cpu_temperature': 'float',
        'network_signal': 'uint8',
        'active_warnings': 'sequence<string>',
        'active_errors': 'sequence<string>',
        'distance_traveled': 'float',
        'tasks_completed': 'uint32',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Pose'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Twist'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.UnboundedString()),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.UnboundedString()),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.robot_id = kwargs.get('robot_id', str())
        self.robot_type = kwargs.get('robot_type', str())
        self.location = kwargs.get('location', str())
        from geometry_msgs.msg import Pose
        self.pose = kwargs.get('pose', Pose())
        from geometry_msgs.msg import Twist
        self.velocity = kwargs.get('velocity', Twist())
        self.battery_voltage = kwargs.get('battery_voltage', float())
        self.battery_current = kwargs.get('battery_current', float())
        self.battery_percentage = kwargs.get('battery_percentage', int())
        self.is_charging = kwargs.get('is_charging', bool())
        self.battery_health = kwargs.get('battery_health', str())
        self.current_task_id = kwargs.get('current_task_id', str())
        self.task_status = kwargs.get('task_status', str())
        self.task_progress = kwargs.get('task_progress', int())
        self.is_operational = kwargs.get('is_operational', bool())
        self.cpu_temperature = kwargs.get('cpu_temperature', float())
        self.network_signal = kwargs.get('network_signal', int())
        self.active_warnings = kwargs.get('active_warnings', [])
        self.active_errors = kwargs.get('active_errors', [])
        self.distance_traveled = kwargs.get('distance_traveled', float())
        self.tasks_completed = kwargs.get('tasks_completed', int())

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
        if self.header != other.header:
            return False
        if self.robot_id != other.robot_id:
            return False
        if self.robot_type != other.robot_type:
            return False
        if self.location != other.location:
            return False
        if self.pose != other.pose:
            return False
        if self.velocity != other.velocity:
            return False
        if self.battery_voltage != other.battery_voltage:
            return False
        if self.battery_current != other.battery_current:
            return False
        if self.battery_percentage != other.battery_percentage:
            return False
        if self.is_charging != other.is_charging:
            return False
        if self.battery_health != other.battery_health:
            return False
        if self.current_task_id != other.current_task_id:
            return False
        if self.task_status != other.task_status:
            return False
        if self.task_progress != other.task_progress:
            return False
        if self.is_operational != other.is_operational:
            return False
        if self.cpu_temperature != other.cpu_temperature:
            return False
        if self.network_signal != other.network_signal:
            return False
        if self.active_warnings != other.active_warnings:
            return False
        if self.active_errors != other.active_errors:
            return False
        if self.distance_traveled != other.distance_traveled:
            return False
        if self.tasks_completed != other.tasks_completed:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def header(self):
        """Message field 'header'."""
        return self._header

    @header.setter
    def header(self, value):
        if __debug__:
            from std_msgs.msg import Header
            assert \
                isinstance(value, Header), \
                "The 'header' field must be a sub message of type 'Header'"
        self._header = value

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
    def robot_type(self):
        """Message field 'robot_type'."""
        return self._robot_type

    @robot_type.setter
    def robot_type(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'robot_type' field must be of type 'str'"
        self._robot_type = value

    @builtins.property
    def location(self):
        """Message field 'location'."""
        return self._location

    @location.setter
    def location(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'location' field must be of type 'str'"
        self._location = value

    @builtins.property
    def pose(self):
        """Message field 'pose'."""
        return self._pose

    @pose.setter
    def pose(self, value):
        if __debug__:
            from geometry_msgs.msg import Pose
            assert \
                isinstance(value, Pose), \
                "The 'pose' field must be a sub message of type 'Pose'"
        self._pose = value

    @builtins.property
    def velocity(self):
        """Message field 'velocity'."""
        return self._velocity

    @velocity.setter
    def velocity(self, value):
        if __debug__:
            from geometry_msgs.msg import Twist
            assert \
                isinstance(value, Twist), \
                "The 'velocity' field must be a sub message of type 'Twist'"
        self._velocity = value

    @builtins.property
    def battery_voltage(self):
        """Message field 'battery_voltage'."""
        return self._battery_voltage

    @battery_voltage.setter
    def battery_voltage(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'battery_voltage' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'battery_voltage' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._battery_voltage = value

    @builtins.property
    def battery_current(self):
        """Message field 'battery_current'."""
        return self._battery_current

    @battery_current.setter
    def battery_current(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'battery_current' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'battery_current' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._battery_current = value

    @builtins.property
    def battery_percentage(self):
        """Message field 'battery_percentage'."""
        return self._battery_percentage

    @battery_percentage.setter
    def battery_percentage(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'battery_percentage' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'battery_percentage' field must be an unsigned integer in [0, 255]"
        self._battery_percentage = value

    @builtins.property
    def is_charging(self):
        """Message field 'is_charging'."""
        return self._is_charging

    @is_charging.setter
    def is_charging(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'is_charging' field must be of type 'bool'"
        self._is_charging = value

    @builtins.property
    def battery_health(self):
        """Message field 'battery_health'."""
        return self._battery_health

    @battery_health.setter
    def battery_health(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'battery_health' field must be of type 'str'"
        self._battery_health = value

    @builtins.property
    def current_task_id(self):
        """Message field 'current_task_id'."""
        return self._current_task_id

    @current_task_id.setter
    def current_task_id(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'current_task_id' field must be of type 'str'"
        self._current_task_id = value

    @builtins.property
    def task_status(self):
        """Message field 'task_status'."""
        return self._task_status

    @task_status.setter
    def task_status(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'task_status' field must be of type 'str'"
        self._task_status = value

    @builtins.property
    def task_progress(self):
        """Message field 'task_progress'."""
        return self._task_progress

    @task_progress.setter
    def task_progress(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'task_progress' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'task_progress' field must be an unsigned integer in [0, 255]"
        self._task_progress = value

    @builtins.property
    def is_operational(self):
        """Message field 'is_operational'."""
        return self._is_operational

    @is_operational.setter
    def is_operational(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'is_operational' field must be of type 'bool'"
        self._is_operational = value

    @builtins.property
    def cpu_temperature(self):
        """Message field 'cpu_temperature'."""
        return self._cpu_temperature

    @cpu_temperature.setter
    def cpu_temperature(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'cpu_temperature' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'cpu_temperature' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._cpu_temperature = value

    @builtins.property
    def network_signal(self):
        """Message field 'network_signal'."""
        return self._network_signal

    @network_signal.setter
    def network_signal(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'network_signal' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'network_signal' field must be an unsigned integer in [0, 255]"
        self._network_signal = value

    @builtins.property
    def active_warnings(self):
        """Message field 'active_warnings'."""
        return self._active_warnings

    @active_warnings.setter
    def active_warnings(self, value):
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
                "The 'active_warnings' field must be a set or sequence and each value of type 'str'"
        self._active_warnings = value

    @builtins.property
    def active_errors(self):
        """Message field 'active_errors'."""
        return self._active_errors

    @active_errors.setter
    def active_errors(self, value):
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
                "The 'active_errors' field must be a set or sequence and each value of type 'str'"
        self._active_errors = value

    @builtins.property
    def distance_traveled(self):
        """Message field 'distance_traveled'."""
        return self._distance_traveled

    @distance_traveled.setter
    def distance_traveled(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'distance_traveled' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'distance_traveled' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._distance_traveled = value

    @builtins.property
    def tasks_completed(self):
        """Message field 'tasks_completed'."""
        return self._tasks_completed

    @tasks_completed.setter
    def tasks_completed(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'tasks_completed' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'tasks_completed' field must be an unsigned integer in [0, 4294967295]"
        self._tasks_completed = value
