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

    // TODO 6:
    // Read digital value from touch sensor

    // TODO 7:
    // If touch detected (HIGH)
    //     Print "Touch Detected"
    // Else
    //     Print "No Touch"

    // TODO 8:
    // Add small delay (200–500ms)
}
