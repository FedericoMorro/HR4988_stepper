#pragma once
#include <Arduino.h>

#include "HR4988.h"


class Potentiometer {

    private:
        uint8_t analog_pin;
        uint16_t position;

    public:
        Potentiometer(uint8_t pin);
        void setup();

        uint16_t read_position();
        uint16_t get_position();

        void calibration(HR4988 &stepper_motor);
};