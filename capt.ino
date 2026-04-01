#include <Servo.h>  // Bibliothèque pour contrôler le servomoteur

#define CAPTEUR_IR 12  // Broche de sortie du capteur
#define SERVO_PIN 13   // Broche du servomoteur

Servo monServo;  // Création de l'objet Servo

void setup() {
    pinMode(CAPTEUR_IR, INPUT);
    monServo.attach(SERVO_PIN);
    monServo.write(90); // Position neutre au démarrage
}

void loop() {
    int etatCapteur = digitalRead(CAPTEUR_IR); // Lire la sortie du capteur

    if (etatCapteur == LOW) { // Si un obstacle est détecté
        monServo.write(90); // Tourner le servo à 180°
    } else {
        monServo.write(0); // Retour à la position initiale
    }

    delay(100); // Petite pause pour éviter trop de changements rapides
}



