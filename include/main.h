#pragma once
#include <Arduino.h>

#include "settings.h"

#include "FeedbackStepper.h"
#include "HR4988.h"
#include "AS5600.h"
#include "Potentiometer.h"
#include "button.h"
#include "Memory.h"


#define BUILT_IN_LED_PIN 2


extern TaskHandle_t task_core_1;
extern TaskHandle_t task_core_0;
extern TaskHandle_t task_webserver_calibration;


extern SemaphoreHandle_t g_semaphore;

void function_core_1 (void *parameters);
void function_core_0 (void *parameters);

extern uint8_t g_current_gear;
extern uint8_t g_calibration_flag;

void calibration();

void blink_built_in_led(uint8_t n_times);