#include <Arduino.h>

const int LEDPin = 17;
void setup() {
  pinMode(LEDPin, OUTPUT);
}

void loop() {
  digitalWrite(LEDPin, HIGH);
}