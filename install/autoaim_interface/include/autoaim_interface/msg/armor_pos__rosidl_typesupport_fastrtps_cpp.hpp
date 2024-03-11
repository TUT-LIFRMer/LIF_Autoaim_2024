// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__rosidl_typesupport_fastrtps_cpp.hpp.em
// with input from autoaim_interface:msg/ArmorPos.idl
// generated code does not contain a copyright notice

#ifndef AUTOAIM_INTERFACE__MSG__ARMOR_POS__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
#define AUTOAIM_INTERFACE__MSG__ARMOR_POS__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_

#include "rosidl_generator_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "autoaim_interface/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
#include "autoaim_interface/msg/armor_pos__struct.hpp"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

#include "fastcdr/Cdr.h"

namespace autoaim_interface
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_autoaim_interface
cdr_serialize(
  const autoaim_interface::msg::ArmorPos & ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_autoaim_interface
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  autoaim_interface::msg::ArmorPos & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_autoaim_interface
get_serialized_size(
  const autoaim_interface::msg::ArmorPos & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_autoaim_interface
max_serialized_size_ArmorPos(
  bool & full_bounded,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace autoaim_interface

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_autoaim_interface
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, autoaim_interface, msg, ArmorPos)();

#ifdef __cplusplus
}
#endif

#endif  // AUTOAIM_INTERFACE__MSG__ARMOR_POS__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
