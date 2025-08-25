// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from service_msgs:srv/RandomService.idl
// generated code does not contain a copyright notice

#ifndef SERVICE_MSGS__SRV__DETAIL__RANDOM_SERVICE__TRAITS_HPP_
#define SERVICE_MSGS__SRV__DETAIL__RANDOM_SERVICE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "service_msgs/srv/detail/random_service__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace service_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const RandomService_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: command
  {
    out << "command: ";
    rosidl_generator_traits::value_to_yaml(msg.command, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const RandomService_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: command
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "command: ";
    rosidl_generator_traits::value_to_yaml(msg.command, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const RandomService_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace service_msgs

namespace rosidl_generator_traits
{

[[deprecated("use service_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const service_msgs::srv::RandomService_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  service_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use service_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const service_msgs::srv::RandomService_Request & msg)
{
  return service_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<service_msgs::srv::RandomService_Request>()
{
  return "service_msgs::srv::RandomService_Request";
}

template<>
inline const char * name<service_msgs::srv::RandomService_Request>()
{
  return "service_msgs/srv/RandomService_Request";
}

template<>
struct has_fixed_size<service_msgs::srv::RandomService_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<service_msgs::srv::RandomService_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<service_msgs::srv::RandomService_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace service_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const RandomService_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: answer
  {
    out << "answer: ";
    rosidl_generator_traits::value_to_yaml(msg.answer, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const RandomService_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: answer
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "answer: ";
    rosidl_generator_traits::value_to_yaml(msg.answer, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const RandomService_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace service_msgs

namespace rosidl_generator_traits
{

[[deprecated("use service_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const service_msgs::srv::RandomService_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  service_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use service_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const service_msgs::srv::RandomService_Response & msg)
{
  return service_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<service_msgs::srv::RandomService_Response>()
{
  return "service_msgs::srv::RandomService_Response";
}

template<>
inline const char * name<service_msgs::srv::RandomService_Response>()
{
  return "service_msgs/srv/RandomService_Response";
}

template<>
struct has_fixed_size<service_msgs::srv::RandomService_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<service_msgs::srv::RandomService_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<service_msgs::srv::RandomService_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<service_msgs::srv::RandomService>()
{
  return "service_msgs::srv::RandomService";
}

template<>
inline const char * name<service_msgs::srv::RandomService>()
{
  return "service_msgs/srv/RandomService";
}

template<>
struct has_fixed_size<service_msgs::srv::RandomService>
  : std::integral_constant<
    bool,
    has_fixed_size<service_msgs::srv::RandomService_Request>::value &&
    has_fixed_size<service_msgs::srv::RandomService_Response>::value
  >
{
};

template<>
struct has_bounded_size<service_msgs::srv::RandomService>
  : std::integral_constant<
    bool,
    has_bounded_size<service_msgs::srv::RandomService_Request>::value &&
    has_bounded_size<service_msgs::srv::RandomService_Response>::value
  >
{
};

template<>
struct is_service<service_msgs::srv::RandomService>
  : std::true_type
{
};

template<>
struct is_service_request<service_msgs::srv::RandomService_Request>
  : std::true_type
{
};

template<>
struct is_service_response<service_msgs::srv::RandomService_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // SERVICE_MSGS__SRV__DETAIL__RANDOM_SERVICE__TRAITS_HPP_
