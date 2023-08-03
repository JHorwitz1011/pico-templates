add_executable(test
        main.c
)

target_link_libraries(test
        pico_stdlib
        )
# enable usb output, disable uart output
pico_enable_stdio_usb(test 1)
pico_enable_stdio_uart(test 0)

# add extra outputs for debug
pico_add_extra_outputs(test)
