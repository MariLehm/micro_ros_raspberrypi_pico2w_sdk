# My custom motor telemetry message

uint8 MODE_INIT = 0
uint8 MODE_IDLE = 1
uint8 MODE_SPEED = 2
uint8 MODE_POSITION = 3
uint8 MODE_FORCE = 4

uint8  control_mode
float32 measured_motor_speed_rpm
float32 measured_motor_position_grad
float32 measured_motor_current_amp
uint32 timestamp_ms