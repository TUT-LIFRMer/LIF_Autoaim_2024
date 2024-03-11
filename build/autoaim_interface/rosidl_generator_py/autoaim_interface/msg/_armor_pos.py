# generated from rosidl_generator_py/resource/_idl.py.em
# with input from autoaim_interface:msg/ArmorPos.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_ArmorPos(type):
    """Metaclass of message 'ArmorPos'."""

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
            module = import_type_support('autoaim_interface')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'autoaim_interface.msg.ArmorPos')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__armor_pos
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__armor_pos
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__armor_pos
            cls._TYPE_SUPPORT = module.type_support_msg__msg__armor_pos
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__armor_pos

            from geometry_msgs.msg import PoseStamped
            if PoseStamped.__class__._TYPE_SUPPORT is None:
                PoseStamped.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class ArmorPos(metaclass=Metaclass_ArmorPos):
    """Message class 'ArmorPos'."""

    __slots__ = [
        '_armor_name',
        '_armor_id',
        '_confidence',
        '_pose',
    ]

    _fields_and_field_types = {
        'armor_name': 'string',
        'armor_id': 'int64',
        'confidence': 'double',
        'pose': 'geometry_msgs/PoseStamped',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'PoseStamped'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.armor_name = kwargs.get('armor_name', str())
        self.armor_id = kwargs.get('armor_id', int())
        self.confidence = kwargs.get('confidence', float())
        from geometry_msgs.msg import PoseStamped
        self.pose = kwargs.get('pose', PoseStamped())

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
        if self.armor_name != other.armor_name:
            return False
        if self.armor_id != other.armor_id:
            return False
        if self.confidence != other.confidence:
            return False
        if self.pose != other.pose:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def armor_name(self):
        """Message field 'armor_name'."""
        return self._armor_name

    @armor_name.setter
    def armor_name(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'armor_name' field must be of type 'str'"
        self._armor_name = value

    @property
    def armor_id(self):
        """Message field 'armor_id'."""
        return self._armor_id

    @armor_id.setter
    def armor_id(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'armor_id' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'armor_id' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._armor_id = value

    @property
    def confidence(self):
        """Message field 'confidence'."""
        return self._confidence

    @confidence.setter
    def confidence(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'confidence' field must be of type 'float'"
        self._confidence = value

    @property
    def pose(self):
        """Message field 'pose'."""
        return self._pose

    @pose.setter
    def pose(self, value):
        if __debug__:
            from geometry_msgs.msg import PoseStamped
            assert \
                isinstance(value, PoseStamped), \
                "The 'pose' field must be a sub message of type 'PoseStamped'"
        self._pose = value
