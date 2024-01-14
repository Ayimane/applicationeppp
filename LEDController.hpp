#ifndef LED_CONTROLLER_HPP
#define LED_CONTROLLER_HPP

#include "mbed.h"

class LEDController {
private:
    DigitalOut redLED;
    DigitalOut greenLED;

public:
    LEDController(PinName red, PinName green);

    void turnOnRed();
    void turnOnGreen();
    void turnOff();
};

#endif // LED_CONTROLLER_HPP

