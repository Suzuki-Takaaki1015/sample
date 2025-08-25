// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from service_msgs:srv/RandomService.idl
// generated code does not contain a copyright notice

#ifndef SERVICE_MSGS__SRV__DETAIL__RANDOM_SERVICE__BUILDER_HPP_
#define SERVICE_MSGS__SRV__DETAIL__RANDOM_SERVICE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "service_msgs/srv/detail/random_service__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace service_msgs
{

namespace srv
{

namespace builder
{

class Init_RandomService_Request_command
{
public:
  Init_RandomService_Request_command()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::service_msgs::srv::RandomService_Request command(::service_msgs::srv::RandomService_Request::_command_type arg)
  {
    msg_.command = std::move(arg);
    return std::move(msg_);
  }

private:
  ::service_msgs::srv::RandomService_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::service_msgs::srv::RandomService_Request>()
{
  return service_msgs::srv::builder::Init_RandomService_Request_command();
}

}  // namespace service_msgs


namespace service_msgs
{

namespace srv
{

namespace builder
{

class Init_RandomService_Response_answer
{
public:
  Init_RandomService_Response_answer()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::service_msgs::srv::RandomService_Response answer(::service_msgs::srv::RandomService_Response::_answer_type arg)
  {
    msg_.answer = std::move(arg);
    return std::move(msg_);
  }

private:
  ::service_msgs::srv::RandomService_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::service_msgs::srv::RandomService_Response>()
{
  return service_msgs::srv::builder::Init_RandomService_Response_answer();
}

}  // namespace service_msgs

#endif  // SERVICE_MSGS__SRV__DETAIL__RANDOM_SERVICE__BUILDER_HPP_
