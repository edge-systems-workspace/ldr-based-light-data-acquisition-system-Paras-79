#include <Arduino.h>
/**
 * @file main.cpp
 * @brief Embedded Light Intensity Monitoring using LDR
 * @author Utkasrh_Singh_Routela
 * @date 19/02/2006
 *
 * @details
 * Reads analog brightness data from LDR sensor
 * and displays structured output via Serial Monitor.
 */

#include <Arduino.h>
#define LDR_PIN A0

void setup() {
    Serial.begin(9600);
    while (!Serial); //import for uno r4 wifi
}

void loop() {
    int ldrRaw = analogRead(LDR_PIN);
    //map to percentage
    int lightPercentage = map(ldrRaw, 0, 1023, 0, 100);
    Serial.print("LDR Raw Value: ");
    Serial.print(ldrRaw);
    Serial.print(" | Light Intensity: ");
    Serial.print(lightPercentage);
    Serial.println("%");
    delay(500);
}
