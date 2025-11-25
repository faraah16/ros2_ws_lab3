# generated from rosidl_generator_py/resource/_idl.py.em
# with input from fleet_interfaces:srv/GetFleetStatus.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_GetFleetStatus_Request(type):
    """Metaclass of message 'GetFleetStatus_Request'."""

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
                'fleet_interfaces.srv.GetFleetStatus_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__get_fleet_status__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__get_fleet_status__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__get_fleet_status__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__get_fleet_status__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__get_fleet_status__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class GetFleetStatus_Request(metaclass=Metaclass_GetFleetStatus_Request):
    """Message class 'GetFleetStatus_Request'."""

    __slots__ = [
        '_include_offline_robots',
        '_robot_type_filter',
    ]

    _fields_and_field_types = {
        'include_offline_robots': 'boolean',
        'robot_type_filter': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.include_offline_robots = kwargs.get('include_offline_robots', bool())
        self.robot_type_filter = kwargs.get('robot_type_filter', str())

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
        if self.include_offline_robots != other.include_offline_robots:
            return False
        if self.robot_type_filter != other.robot_type_filter:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def include_offline_robots(self):
        """Message field 'include_offline_robots'."""
        return self._include_offline_robots

    @include_offline_robots.setter
    def include_offline_robots(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'include_offline_robots' field must be of type 'bool'"
        self._include_offline_robots = value

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


# Import statements for member types

# already imported above
# import builtins

import math  # noqa: E402, I100

# already imported above
# import rosidl_parser.definition


class Metaclass_GetFleetStatus_Response(type):
    """Metaclass of message 'GetFleetStatus_Response'."""

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
                'fleet_interfaces.srv.GetFleetStatus_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__get_fleet_status__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__get_fleet_status__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__get_fleet_status__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__get_fleet_status__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__get_fleet_status__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class GetFleetStatus_Response(metaclass=Metaclass_GetFleetStatus_Response):
    """Message class 'GetFleetStatus_Response'."""

    __slots__ = [
        '_total_robots',
        '_operational_robots',
        '_robots_on_task',
        '_robots_charging',
        '_robots_with_errors',
        '_robot_ids',
        '_average_battery_level',
    ]

    _fields_and_field_types = {
        'total_robots': 'uint32',
        'operational_robots': 'uint32',
        'robots_on_task': 'uint32',
        'robots_charging': 'uint32',
        'robots_with_errors': 'uint32',
        'robot_ids': 'sequence<string>',
        'average_battery_level': 'float',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.UnboundedString()),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.total_robots = kwargs.get('total_robots', int())
        self.operational_robots = kwargs.get('operational_robots', int())
        self.robots_on_task = kwargs.get('robots_on_task', int())
        self.robots_charging = kwargs.get('robots_charging', int())
        self.robots_with_errors = kwargs.get('robots_with_errors', int())
        self.robot_ids = kwargs.get('robot_ids', [])
        self.average_battery_level = kwargs.get('average_battery_level', float())

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
        if self.total_robots != other.total_robots:
            return False
        if self.operational_robots != other.operational_robots:
            return False
        if self.robots_on_task != other.robots_on_task:
            return False
        if self.robots_charging != other.robots_charging:
            return False
        if self.robots_with_errors != other.robots_with_errors:
            return False
        if self.robot_ids != other.robot_ids:
            return False
        if self.average_battery_level != other.average_battery_level:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def total_robots(self):
        """Message field 'total_robots'."""
        return self._total_robots

    @total_robots.setter
    def total_robots(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'total_robots' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'total_robots' field must be an unsigned integer in [0, 4294967295]"
        self._total_robots = value

    @builtins.property
    def operational_robots(self):
        """Message field 'operational_robots'."""
        return self._operational_robots

    @operational_robots.setter
    def operational_robots(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'operational_robots' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'operational_robots' field must be an unsigned integer in [0, 4294967295]"
        self._operational_robots = value

    @builtins.property
    def robots_on_task(self):
        """Message field 'robots_on_task'."""
        return self._robots_on_task

    @robots_on_task.setter
    def robots_on_task(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'robots_on_task' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'robots_on_task' field must be an unsigned integer in [0, 4294967295]"
        self._robots_on_task = value

    @builtins.property
    def robots_charging(self):
        """Message field 'robots_charging'."""
        return self._robots_charging

    @robots_charging.setter
    def robots_charging(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'robots_charging' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'robots_charging' field must be an unsigned integer in [0, 4294967295]"
        self._robots_charging = value

    @builtins.property
    def robots_with_errors(self):
        """Message field 'robots_with_errors'."""
        return self._robots_with_errors

    @robots_with_errors.setter
    def robots_with_errors(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'robots_with_errors' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'robots_with_errors' field must be an unsigned integer in [0, 4294967295]"
        self._robots_with_errors = value

    @builtins.property
    def robot_ids(self):
        """Message field 'robot_ids'."""
        return self._robot_ids

    @robot_ids.setter
    def robot_ids(self, value):
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
                "The 'robot_ids' field must be a set or sequence and each value of type 'str'"
        self._robot_ids = value

    @builtins.property
    def average_battery_level(self):
        """Message field 'average_battery_level'."""
        return self._average_battery_level

    @average_battery_level.setter
    def average_battery_level(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'average_battery_level' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'average_battery_level' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._average_battery_level = value


class Metaclass_GetFleetStatus(type):
    """Metaclass of service 'GetFleetStatus'."""

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
                'fleet_interfaces.srv.GetFleetStatus')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__get_fleet_status

            from fleet_interfaces.srv import _get_fleet_status
            if _get_fleet_status.Metaclass_GetFleetStatus_Request._TYPE_SUPPORT is None:
                _get_fleet_status.Metaclass_GetFleetStatus_Request.__import_type_support__()
            if _get_fleet_status.Metaclass_GetFleetStatus_Response._TYPE_SUPPORT is None:
                _get_fleet_status.Metaclass_GetFleetStatus_Response.__import_type_support__()


class GetFleetStatus(metaclass=Metaclass_GetFleetStatus):
    from fleet_interfaces.srv._get_fleet_status import GetFleetStatus_Request as Request
    from fleet_interfaces.srv._get_fleet_status import GetFleetStatus_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
