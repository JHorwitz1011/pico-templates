cmake_minimum_required(VERSION 3.12)
set(PICO_SDK_PATH ~/pico/pico-sdk)
include(pico_sdk_import.cmake)
project(ECE4760_demo_1 VERSION 1)
pico_sdk_init()

add_subdirectory(src)
