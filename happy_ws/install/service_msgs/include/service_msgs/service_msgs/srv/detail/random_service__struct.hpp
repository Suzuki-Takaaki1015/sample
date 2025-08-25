// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from service_msgs:srv/RandomService.idl
// generated code does not contain a copyright notice

#ifndef SERVICE_MSGS__SRV__DETAIL__RANDOM_SERVICE__STRUCT_HPP_
#define SERVICE_MSGS__SRV__DETAIL__RANDOM_SERVICE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__service_msgs__srv__RandomService_Request __attribute__((deprecated))
#else
# define DEPRECATED__service_msgs__srv__RandomService_Request __declspec(deprecated)
#endif

namespace service_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct RandomService_Request_
{
  using Type = RandomService_Request_<ContainerAllocator>;

  explicit RandomService_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->command = "";
    }
  }

  explicit RandomService_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : command(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->command = "";
    }
  }

  // field types and members
  using _command_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _command_type command;

  // setters for named parameter idiom
  Type & set__command(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->command = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    service_msgs::srv::RandomService_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const service_msgs::srv::RandomService_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<service_msgs::srv::RandomService_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<service_msgs::srv::RandomService_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      service_msgs::srv::RandomService_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<service_msgs::srv::RandomService_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      service_msgs::srv::RandomService_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<service_msgs::srv::RandomService_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<service_msgs::srv::RandomService_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<service_msgs::srv::RandomService_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__service_msgs__srv__RandomService_Request
    std::shared_ptr<service_msgs::srv::RandomService_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__service_msgs__srv__RandomService_Request
    std::shared_ptr<service_msgs::srv::RandomService_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RandomService_Request_ & other) const
  {
    if (this->command != other.command) {
      return false;
    }
    return true;
  }
  bool operator!=(const RandomService_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RandomService_Request_

// alias to use template instance with default allocator
using RandomService_Request =
  service_msgs::srv::RandomService_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace service_msgs


#ifndef _WIN32
# define DEPRECATED__service_msgs__srv__RandomService_Response __attribute__((deprecated))
#else
# define DEPRECATED__service_msgs__srv__RandomService_Response __declspec(deprecated)
#endif

namespace service_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct RandomService_Response_
{
  using Type = RandomService_Response_<ContainerAllocator>;

  explicit RandomService_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->answer = 0.0;
    }
  }

  explicit RandomService_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->answer = 0.0;
    }
  }

  // field types and members
  using _answer_type =
    double;
  _answer_type answer;

  // setters for named parameter idiom
  Type & set__answer(
    const double & _arg)
  {
    this->answer = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    service_msgs::srv::RandomService_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const service_msgs::srv::RandomService_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<service_msgs::srv::RandomService_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<service_msgs::srv::RandomService_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      service_msgs::srv::RandomService_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<service_msgs::srv::RandomService_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      service_msgs::srv::RandomService_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<service_msgs::srv::RandomService_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<service_msgs::srv::RandomService_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<service_msgs::srv::RandomService_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__service_msgs__srv__RandomService_Response
    std::shared_ptr<service_msgs::srv::RandomService_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__service_msgs__srv__RandomService_Response
    std::shared_ptr<service_msgs::srv::RandomService_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RandomService_Response_ & other) const
  {
    if (this->answer != other.answer) {
      return false;
    }
    return true;
  }
  bool operator!=(const RandomService_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RandomService_Response_

// alias to use template instance with default allocator
using RandomService_Response =
  service_msgs::srv::RandomService_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace service_msgs

namespace service_msgs
{

namespace srv
{

struct RandomService
{
  using Request = service_msgs::srv::RandomService_Request;
  using Response = service_msgs::srv::RandomService_Response;
};

}  // namespace srv

}  // namespace service_msgs

#endif  // SERVICE_MSGS__SRV__DETAIL__RANDOM_SERVICE__STRUCT_HPP_
