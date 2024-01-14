#include "FingerprintSensor.hpp"
FingerprintSensor::FingerprintSensor(PinName tx, PinName rx) : fingerprintSerial(tx, rx), fingerEnrolled(false) {
    // Initialisation du capteur
    // ...
}

bool FingerprintSensor::enrollFingerprint() {
    //  enregistrement de l'empreinte
    // ...

    fingerEnrolled = true;
    return true;
}

bool FingerprintSensor::scanFingerprint() {
    //  scanner de l'empreinte
    // ...

    if (fingerEnrolled) {
        // Empreinte reconnue
        return true;
    } else {
        // Empreinte non reconnue
        return false;
    }
}
