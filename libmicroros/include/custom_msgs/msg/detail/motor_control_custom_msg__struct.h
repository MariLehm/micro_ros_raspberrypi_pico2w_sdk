// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from custom_msgs:msg/MotorControlCustomMsg.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_MSGS__MSG__DETAIL__MOTOR_CONTROL_CUSTOM_MSG__STRUCT_H_
#define CUSTOM_MSGS__MSG__DETAIL__MOTOR_CONTROL_CUSTOM_MSG__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'MODE_INIT'.
enum
{
  custom_msgs__msg__MotorControlCustomMsg__MODE_INIT = 0
};

/// Constant 'MODE_IDLE'.
enum
{
  custom_msgs__msg__MotorControlCustomMsg__MODE_IDLE = 1
};

/// Constant 'MODE_SPEED'.
enum
{
  custom_msgs__msg__MotorControlCustomMsg__MODE_SPEED = 2
};

/// Constant 'MODE_POSITION'.
enum
{
  custom_msgs__msg__MotorControlCustomMsg__MODE_POSITION = 3
};

/// Constant 'MODE_FORCE'.
enum
{
  custom_msgs__msg__MotorControlCustomMsg__MODE_FORCE = 4
};

/// Struct defined in msg/MotorControlCustomMsg in the package custom_msgs.
/**
  * My custom motor control message 
 */
typedef struct custom_msgs__msg__MotorControlCustomMsg
{
  uint8_t control_mode;
  float set_point_motor_speed_rpm;
  float set_point_motor_position_grad;
  float set_current_limit_amp;
} custom_msgs__msg__MotorControlCustomMsg;

// Struct for a sequence of custom_msgs__msg__MotorControlCustomMsg.
typedef struct custom_msgs__msg__MotorControlCustomMsg__Sequence
{
  custom_msgs__msg__MotorControlCustomMsg * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} custom_msgs__msg__MotorControlCustomMsg__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CUSTOM_MSGS__MSG__DETAIL__MOTOR_CONTROL_CUSTOM_MSG__STRUCT_H_
