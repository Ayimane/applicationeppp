#include "LEDController.hpp"

LEDController::LEDController(PinName red, PinName green) : redLED(red), greenLED(green) {
    // Initialisation des broches de l'anneau de LED
    // ...
}

void LEDController::turnOnRed() {
    redLED = 1;
    greenLED = 0;
}

void LEDController::turnOnGreen() {
    redLED = 0;
    greenLED = 1;
}

void LEDController::turnOff() {
    redLED = 0;
    greenLED = 0;
}
