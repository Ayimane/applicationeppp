#include "Application.hpp"

Application::Application() : fingerprintSensor(P13, P14), ledController(P24, P25) {
    // Initialisation d'autres composants si nécessaire
}

void Application::run() {
    // Enregistrement de l'empreinte au démarrage (peut être fait une seule fois)
    fingerprintSensor.enrollFingerprint();

    while (1) {
        // Scan de l'empreinte
        if (fingerprintSensor.scanFingerprint()) {
            // Empreinte reconnue, allumez l'anneau de LED en vert
            ledController.turnOnGreen();
        } else {
            // Empreinte non reconnue, allumez l'anneau de LED en rouge
            ledController.turnOnRed();
        }

        wait(2);  // Attendre avant la prochaine tentative
        ledController.turnOff();  // Éteindre l'anneau de LED
    }
}
