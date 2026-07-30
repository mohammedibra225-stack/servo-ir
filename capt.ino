#include <Servo.h>  

#define CAPTEUR_IR 12  
#define SERVO_PIN 13   

Servo monServo;  

void setup() {
    pinMode(CAPTEUR_IR, INPUT);
    monServo.attach(SERVO_PIN);
    monServo.write(90); 
}

void loop() {
    int etatCapteur = digitalRead(CAPTEUR_IR); 

    if (etatCapteur == LOW) { 
        monServo.write(90); 
    } else {
        monServo.write(0); 
    }

    delay(100); 
}



