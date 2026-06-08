// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from custom_msgs:msg/EncoderTelemetryCustomMsg.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_MSGS__MSG__DETAIL__ENCODER_TELEMETRY_CUSTOM_MSG__STRUCT_H_
#define CUSTOM_MSGS__MSG__DETAIL__ENCODER_TELEMETRY_CUSTOM_MSG__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/EncoderTelemetryCustomMsg in the package custom_msgs.
/**
  * My custom encoder telemetry message
 */
typedef struct custom_msgs__msg__EncoderTelemetryCustomMsg
{
  float measured_encoder_speed_rpm;
  float measured_encoder_position_grad;
} custom_msgs__msg__EncoderTelemetryCustomMsg;

// Struct for a sequence of custom_msgs__msg__EncoderTelemetryCustomMsg.
typedef struct custom_msgs__msg__EncoderTelemetryCustomMsg__Sequence
{
  custom_msgs__msg__EncoderTelemetryCustomMsg * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} custom_msgs__msg__EncoderTelemetryCustomMsg__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CUSTOM_MSGS__MSG__DETAIL__ENCODER_TELEMETRY_CUSTOM_MSG__STRUCT_H_
