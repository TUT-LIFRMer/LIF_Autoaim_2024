// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from autoaim_interface:msg/DetectResult.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_generator_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "autoaim_interface/msg/detect_result__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace autoaim_interface
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

size_t size_function__DetectResult__detect_result(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<autoaim_interface::msg::EachDetectResult> *>(untyped_member);
  return member->size();
}

const void * get_const_function__DetectResult__detect_result(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<autoaim_interface::msg::EachDetectResult> *>(untyped_member);
  return &member[index];
}

void * get_function__DetectResult__detect_result(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<autoaim_interface::msg::EachDetectResult> *>(untyped_member);
  return &member[index];
}

void resize_function__DetectResult__detect_result(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<autoaim_interface::msg::EachDetectResult> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember DetectResult_message_member_array[1] = {
  {
    "detect_result",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<autoaim_interface::msg::EachDetectResult>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(autoaim_interface::msg::DetectResult, detect_result),  // bytes offset in struct
    nullptr,  // default value
    size_function__DetectResult__detect_result,  // size() function pointer
    get_const_function__DetectResult__detect_result,  // get_const(index) function pointer
    get_function__DetectResult__detect_result,  // get(index) function pointer
    resize_function__DetectResult__detect_result  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers DetectResult_message_members = {
  "autoaim_interface::msg",  // message namespace
  "DetectResult",  // message name
  1,  // number of fields
  sizeof(autoaim_interface::msg::DetectResult),
  DetectResult_message_member_array  // message members
};

static const rosidl_message_type_support_t DetectResult_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &DetectResult_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace autoaim_interface


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<autoaim_interface::msg::DetectResult>()
{
  return &::autoaim_interface::msg::rosidl_typesupport_introspection_cpp::DetectResult_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, autoaim_interface, msg, DetectResult)() {
  return &::autoaim_interface::msg::rosidl_typesupport_introspection_cpp::DetectResult_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
