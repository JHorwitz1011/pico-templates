# source code
add_executable(demo
        main.c
)

# libraries
target_link_libraries(demo
        pico_stdlib
        freertos
        )
# enable usb output, disable uart output
pico_enable_stdio_usb(demo 1)
pico_enable_stdio_uart(demo 0)

# add extra outputs for debug
pico_add_extra_outputs(demo)
