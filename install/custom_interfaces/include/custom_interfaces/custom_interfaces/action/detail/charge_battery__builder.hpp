// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from custom_interfaces:action/ChargeBattery.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_INTERFACES__ACTION__DETAIL__CHARGE_BATTERY__BUILDER_HPP_
#define CUSTOM_INTERFACES__ACTION__DETAIL__CHARGE_BATTERY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "custom_interfaces/action/detail/charge_battery__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace custom_interfaces
{

namespace action
{

namespace builder
{

class Init_ChargeBattery_Goal_target_percentage
{
public:
  Init_ChargeBattery_Goal_target_percentage()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::custom_interfaces::action::ChargeBattery_Goal target_percentage(::custom_interfaces::action::ChargeBattery_Goal::_target_percentage_type arg)
  {
    msg_.target_percentage = std::move(arg);
    return std::move(msg_);
  }

private:
  ::custom_interfaces::action::ChargeBattery_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::custom_interfaces::action::ChargeBattery_Goal>()
{
  return custom_interfaces::action::builder::Init_ChargeBattery_Goal_target_percentage();
}

}  // namespace custom_interfaces


namespace custom_interfaces
{

namespace action
{

namespace builder
{

class Init_ChargeBattery_Result_charging_time
{
public:
  explicit Init_ChargeBattery_Result_charging_time(::custom_interfaces::action::ChargeBattery_Result & msg)
  : msg_(msg)
  {}
  ::custom_interfaces::action::ChargeBattery_Result charging_time(::custom_interfaces::action::ChargeBattery_Result::_charging_time_type arg)
  {
    msg_.charging_time = std::move(arg);
    return std::move(msg_);
  }

private:
  ::custom_interfaces::action::ChargeBattery_Result msg_;
};

class Init_ChargeBattery_Result_final_percentage
{
public:
  explicit Init_ChargeBattery_Result_final_percentage(::custom_interfaces::action::ChargeBattery_Result & msg)
  : msg_(msg)
  {}
  Init_ChargeBattery_Result_charging_time final_percentage(::custom_interfaces::action::ChargeBattery_Result::_final_percentage_type arg)
  {
    msg_.final_percentage = std::move(arg);
    return Init_ChargeBattery_Result_charging_time(msg_);
  }

private:
  ::custom_interfaces::action::ChargeBattery_Result msg_;
};

class Init_ChargeBattery_Result_success
{
public:
  Init_ChargeBattery_Result_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ChargeBattery_Result_final_percentage success(::custom_interfaces::action::ChargeBattery_Result::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_ChargeBattery_Result_final_percentage(msg_);
  }

private:
  ::custom_interfaces::action::ChargeBattery_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::custom_interfaces::action::ChargeBattery_Result>()
{
  return custom_interfaces::action::builder::Init_ChargeBattery_Result_success();
}

}  // namespace custom_interfaces


namespace custom_interfaces
{

namespace action
{

namespace builder
{

class Init_ChargeBattery_Feedback_charging_rate
{
public:
  explicit Init_ChargeBattery_Feedback_charging_rate(::custom_interfaces::action::ChargeBattery_Feedback & msg)
  : msg_(msg)
  {}
  ::custom_interfaces::action::ChargeBattery_Feedback charging_rate(::custom_interfaces::action::ChargeBattery_Feedback::_charging_rate_type arg)
  {
    msg_.charging_rate = std::move(arg);
    return std::move(msg_);
  }

private:
  ::custom_interfaces::action::ChargeBattery_Feedback msg_;
};

class Init_ChargeBattery_Feedback_time_remaining
{
public:
  explicit Init_ChargeBattery_Feedback_time_remaining(::custom_interfaces::action::ChargeBattery_Feedback & msg)
  : msg_(msg)
  {}
  Init_ChargeBattery_Feedback_charging_rate time_remaining(::custom_interfaces::action::ChargeBattery_Feedback::_time_remaining_type arg)
  {
    msg_.time_remaining = std::move(arg);
    return Init_ChargeBattery_Feedback_charging_rate(msg_);
  }

private:
  ::custom_interfaces::action::ChargeBattery_Feedback msg_;
};

class Init_ChargeBattery_Feedback_current_percentage
{
public:
  Init_ChargeBattery_Feedback_current_percentage()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ChargeBattery_Feedback_time_remaining current_percentage(::custom_interfaces::action::ChargeBattery_Feedback::_current_percentage_type arg)
  {
    msg_.current_percentage = std::move(arg);
    return Init_ChargeBattery_Feedback_time_remaining(msg_);
  }

private:
  ::custom_interfaces::action::ChargeBattery_Feedback msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::custom_interfaces::action::ChargeBattery_Feedback>()
{
  return custom_interfaces::action::builder::Init_ChargeBattery_Feedback_current_percentage();
}

}  // namespace custom_interfaces


namespace custom_interfaces
{

namespace action
{

namespace builder
{

class Init_ChargeBattery_SendGoal_Request_goal
{
public:
  explicit Init_ChargeBattery_SendGoal_Request_goal(::custom_interfaces::action::ChargeBattery_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::custom_interfaces::action::ChargeBattery_SendGoal_Request goal(::custom_interfaces::action::ChargeBattery_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::custom_interfaces::action::ChargeBattery_SendGoal_Request msg_;
};

class Init_ChargeBattery_SendGoal_Request_goal_id
{
public:
  Init_ChargeBattery_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ChargeBattery_SendGoal_Request_goal goal_id(::custom_interfaces::action::ChargeBattery_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_ChargeBattery_SendGoal_Request_goal(msg_);
  }

private:
  ::custom_interfaces::action::ChargeBattery_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::custom_interfaces::action::ChargeBattery_SendGoal_Request>()
{
  return custom_interfaces::action::builder::Init_ChargeBattery_SendGoal_Request_goal_id();
}

}  // namespace custom_interfaces


namespace custom_interfaces
{

namespace action
{

namespace builder
{

class Init_ChargeBattery_SendGoal_Response_stamp
{
public:
  explicit Init_ChargeBattery_SendGoal_Response_stamp(::custom_interfaces::action::ChargeBattery_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::custom_interfaces::action::ChargeBattery_SendGoal_Response stamp(::custom_interfaces::action::ChargeBattery_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::custom_interfaces::action::ChargeBattery_SendGoal_Response msg_;
};

class Init_ChargeBattery_SendGoal_Response_accepted
{
public:
  Init_ChargeBattery_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ChargeBattery_SendGoal_Response_stamp accepted(::custom_interfaces::action::ChargeBattery_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_ChargeBattery_SendGoal_Response_stamp(msg_);
  }

private:
  ::custom_interfaces::action::ChargeBattery_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::custom_interfaces::action::ChargeBattery_SendGoal_Response>()
{
  return custom_interfaces::action::builder::Init_ChargeBattery_SendGoal_Response_accepted();
}

}  // namespace custom_interfaces


namespace custom_interfaces
{

namespace action
{

namespace builder
{

class Init_ChargeBattery_GetResult_Request_goal_id
{
public:
  Init_ChargeBattery_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::custom_interfaces::action::ChargeBattery_GetResult_Request goal_id(::custom_interfaces::action::ChargeBattery_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::custom_interfaces::action::ChargeBattery_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::custom_interfaces::action::ChargeBattery_GetResult_Request>()
{
  return custom_interfaces::action::builder::Init_ChargeBattery_GetResult_Request_goal_id();
}

}  // namespace custom_interfaces


namespace custom_interfaces
{

namespace action
{

namespace builder
{

class Init_ChargeBattery_GetResult_Response_result
{
public:
  explicit Init_ChargeBattery_GetResult_Response_result(::custom_interfaces::action::ChargeBattery_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::custom_interfaces::action::ChargeBattery_GetResult_Response result(::custom_interfaces::action::ChargeBattery_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::custom_interfaces::action::ChargeBattery_GetResult_Response msg_;
};

class Init_ChargeBattery_GetResult_Response_status
{
public:
  Init_ChargeBattery_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ChargeBattery_GetResult_Response_result status(::custom_interfaces::action::ChargeBattery_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_ChargeBattery_GetResult_Response_result(msg_);
  }

private:
  ::custom_interfaces::action::ChargeBattery_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::custom_interfaces::action::ChargeBattery_GetResult_Response>()
{
  return custom_interfaces::action::builder::Init_ChargeBattery_GetResult_Response_status();
}

}  // namespace custom_interfaces


namespace custom_interfaces
{

namespace action
{

namespace builder
{

class Init_ChargeBattery_FeedbackMessage_feedback
{
public:
  explicit Init_ChargeBattery_FeedbackMessage_feedback(::custom_interfaces::action::ChargeBattery_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::custom_interfaces::action::ChargeBattery_FeedbackMessage feedback(::custom_interfaces::action::ChargeBattery_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::custom_interfaces::action::ChargeBattery_FeedbackMessage msg_;
};

class Init_ChargeBattery_FeedbackMessage_goal_id
{
public:
  Init_ChargeBattery_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ChargeBattery_FeedbackMessage_feedback goal_id(::custom_interfaces::action::ChargeBattery_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_ChargeBattery_FeedbackMessage_feedback(msg_);
  }

private:
  ::custom_interfaces::action::ChargeBattery_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::custom_interfaces::action::ChargeBattery_FeedbackMessage>()
{
  return custom_interfaces::action::builder::Init_ChargeBattery_FeedbackMessage_goal_id();
}

}  // namespace custom_interfaces

#endif  // CUSTOM_INTERFACES__ACTION__DETAIL__CHARGE_BATTERY__BUILDER_HPP_
