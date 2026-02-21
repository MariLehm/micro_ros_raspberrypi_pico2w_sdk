cmake_minimum_required(VERSION 3.13)

# --- micro-ROS library target (always available) ---
add_library(micro_ros_pico INTERFACE)

target_link_directories(micro_ros_pico INTERFACE
    ${CMAKE_CURRENT_SOURCE_DIR}/libmicroros
)

target_link_libraries(micro_ros_pico INTERFACE
    microros
)

target_include_directories(micro_ros_pico INTERFACE
    ${CMAKE_CURRENT_SOURCE_DIR}/libmicroros/include
)

target_compile_options(micro_ros_pico INTERFACE
    -ffunction-sections
    -fdata-sections
)

target_link_options(micro_ros_pico INTERFACE
    -Wl,--gc-sections
)

# --- Example project (only when built standalone) ---
if(CMAKE_SOURCE_DIR STREQUAL CMAKE_CURRENT_SOURCE_DIR)
    if(NOT PICO_SDK_PATH)
        include($ENV{PICO_SDK_PATH}/external/pico_sdk_import.cmake)
    endif()

    project(pico_micro_ros_example C CXX ASM)
    set(CMAKE_C_STANDARD 11)
    set(CMAKE_CXX_STANDARD 17)
    set(PICO_BOARD pico2_w)

    pico_sdk_init()

    add_executable(pico_micro_ros_example
        pico_micro_ros_example.c
        pico_uart_transport.c
    )

    target_link_libraries(pico_micro_ros_example
        pico_stdlib
        micro_ros_pico
    )

    pico_enable_stdio_usb(pico_micro_ros_example 1)
    pico_enable_stdio_uart(pico_micro_ros_example 0)
    add_compile_definitions(PICO_UART_ENABLE_CRLF_SUPPORT=0)
    add_compile_definitions(PICO_STDIO_ENABLE_CRLF_SUPPORT=0)
    add_compile_definitions(PICO_STDIO_DEFAULT_CRLF=0)

    pico_add_extra_outputs(pico_micro_ros_example)
endif()