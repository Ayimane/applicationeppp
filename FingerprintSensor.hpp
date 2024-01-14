#ifndef FINGERPRINT_SENSOR_HPP
#define FINGERPRINT_SENSOR_HPP

#include "mbed.h"

class FingerprintSensor {
private:
    Serial fingerprintSerial;
    bool fingerEnrolled;

public:
    FingerprintSensor(PinName tx, PinName rx);

    bool enrollFingerprint();
    bool scanFingerprint();
};

#endif // FINGERPRINT_SENSOR_HPP

