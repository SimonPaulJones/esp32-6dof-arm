/*
TODO:
Map pots 1-6 to 6 measurements
 - resolder 4 + 6
Convert to angles
Map servos 1-6
Read servo positions? (else default position and careful initial setup)
Loop through pots
Run function to move servo to angle smoothly before moving to the next pot
*/

#include <Arduino.h>
// Map Potentiometers 1-6
const int potPins[] = {15, 33, 4, 27, 26, 32};
const int numPots = 6;

void setup() {
  Serial.begin(115200);
  for (int i = 0; i < numPots; i++) {
     pinMode(potPins[i], INPUT);
  }
}

void loop() {
  for (int i = 0; i < numPots; i++) {
    int analogValue = analogRead(potPins[i]);
    // int angle = map(analogValue, 0, 4095, 0, 180);
    Serial.print("Pot ");
    Serial.print(i + 1);
    Serial.print(" pin: ");
    Serial.print(potPins[i]);
    Serial.print(": ");
    Serial.print(analogValue);
    Serial.println(" analogue");
  }
  delay(500);
}
