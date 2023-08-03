cmake_minimum_required(VERSION 3.12)
set(PICO_SDK_PATH ~/pico/pico-sdk)
include(pico_sdk_import.cmake)

project(Pico-FreeRTOS)

pico_sdk_init()

add_subdirectory(lib)
add_subdirectory(src)