/**
 * Entry point for OS and software
 */

#include <Arduino.h>
#include "main.hpp"

void setup() {
    // call all app_init_hw functions here
    // include any other initialization functions/logic here as well
    Serial.begin(115200);
    wifiSetup();
  
}

void loop() {
    // ESP32 OS entry point, wakeup startup tasks and then enter an infinite loop
    // do FreeRTOS stuff here too? check 353 repo for that
    // This is the app_main function.

    vTaskStartScheduler();

    while (1)
    { 
        // this loop should never be reached once the scheduler starts
    }
}