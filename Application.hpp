#ifndef APPLICATION_HPP
#define APPLICATION_HPP

#include "FingerprintSensor.hpp"
#include "LEDController.hpp"

class Application {
private:
    FingerprintSensor fingerprintSensor;
    LEDController ledController;

public:
    Application();

    void run();
};

#endif // APPLICATION_HPP
