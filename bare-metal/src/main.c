#include "pico/stdlib.h"
#include <stdio.h>

const uint LED_PIN = 25;

int main() {
    gpio_init(LED_PIN);
    gpio_set_dir(LED_PIN, GPIO_OUT);

    while (1) {
        gpio_put(LED_PIN, 0);
        printf("LOW!");
        sleep_ms(250);
        gpio_put(LED_PIN, 1);
        printf("HIGH!");
        sleep_ms(1000);
    }
}