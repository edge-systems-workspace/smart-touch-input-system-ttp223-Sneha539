#include <Arduino.h>
/**
 * @file main.ino
 * @brief Embedded Touch Detection System using TTP223
 * @author Sneha singh
 * @date 2026-02-27
 *
 * @details
 * Reads digital touch input from TTP223 sensor
 * and displays structured output via Serial Monitor.
 */

const int touchPin = 2;
int touchState = 0;

void setup() {

    Serial.begin(9600);
    pinMode(touchPin, INPUT);
    Serial.println("TTP223 Touch Sensor System Initialized...");
}

void loop() {

    touchState = digitalRead(touchPin);


    if (touchState == HIGH) {
        Serial.println("Touch Detected");
    } else {
        Serial.println("No Touch");
    }
    delay(300);
}
