# My custom motor control message 

uint8 MODE_INIT = 0
uint8 MODE_IDLE = 1
uint8 MODE_SPEED = 2
uint8 MODE_POSITION = 3
uint8 MODE_FORCE = 4

uint8  control_mode
float32 set_point_motor_speed_rpm
float32 set_point_motor_position_grad
float32 set_current_limit_amp