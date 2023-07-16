#pragma once
#include "main.h"


#define NUM_GEARS  12     // for Phoenix


#define ENABLE_PIN       13

#define STEP_PIN         12
#define DIRECTION_PIN    14

// microstepping pins
#define MS1_PIN          25
#define MS2_PIN          33
#define MS3_PIN          32


#define LIMIT_SWITCH_PIN 18

#define SHIFT_UP_BUTTON_PIN   16        // yellow
#define SHIFT_DOWN_BUTTON_PIN 17        // green

#define CALIBRATION_BUTTON_PIN 4


#define POTENTIOMETER_ADC_CHANNEL ADC1_CHANNEL_6


const int full_steps_per_turn = 200;
const float deg_per_full_step = 1.8;
const int8_t cw_direction_sign = -1;

const int8_t increase_encoder_direction_sign = 1;
const int8_t increase_potentiometer_direction_sign = 1;

const char gears_memory_key[] = "gears_key";
const char gears_lin_memory_key[] = "gears_lin_key";


extern FeedbackStepper stepper_motor;
extern AS5600 rotative_encoder;
extern Potentiometer linear_potentiometer;
extern Memory flash;

extern int gears[];
extern int gears_lin[];

extern uint8_t limit_reached;
extern uint8_t shift_up_pressed;
extern uint8_t shift_down_pressed;
extern uint8_t calibration_button_pressed;
extern button_parameters limit_switch_parameters;
extern button_parameters shift_up_button_parameters;
extern button_parameters shift_down_button_parameters;
extern button_parameters calibration_button_parameters;


void shift(uint8_t next_gear);

void test_mode();


void calibration();