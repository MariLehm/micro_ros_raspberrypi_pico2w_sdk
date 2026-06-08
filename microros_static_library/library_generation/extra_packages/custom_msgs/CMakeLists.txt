cmake_minimum_required(VERSION 3.8)
project(custom_msgs)

find_package(ament_cmake REQUIRED)
find_package(rosidl_default_generators REQUIRED)

rosidl_generate_interfaces(${PROJECT_NAME}
  "msg/MotorControlCustomMsg.msg"
  "msg/MotorTelemetryCustomMsg.msg"
  "msg/EncoderTelemetryCustomMsg.msg"
)

ament_package()