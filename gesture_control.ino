#include <NewPing.h>

// Define ultrasonic sensor pins
#define TRIG_PIN 9  
#define ECHO_PIN 10  
#define MAX_DISTANCE 200  // Maximum distance to measure (in cm)

// Initialize NewPing library
NewPing sonar(TRIG_PIN, ECHO_PIN, MAX_DISTANCE);

void setup() {
    Serial.begin(9600);  // Start serial communication
    Serial.println("Gesture Control Ready...");
}

void loop() {
    delay(50);  // Stabilization delay
    int distance = sonar.ping_cm();  // Measure distance

    if (distance > 0) {  // Ensure valid reading
        Serial.print("Distance: ");
        Serial.print(distance);
        Serial.println(" cm");

        // Assign gestures based on distance range
        if (distance < 10) {
            Serial.println("PLAY_PAUSE");  
        } 
        else if (distance < 20) {
            Serial.println("VOLUME_UP");  
        } 
        else if (distance < 30) {
            Serial.println("VOLUME_DOWN");  
        }
    }
}

