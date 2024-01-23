#include <Arduino.h>

const int redPin = 21;
const int yellowPin = 18;
const int greenPin = 17;

void setup() {
  pinMode(greenPin, OUTPUT);
  pinMode(yellowPin, OUTPUT);
  pinMode(redPin, OUTPUT);
}

void loop() {
  digitalWrite(greenPin, HIGH);
  delay(1000);
  digitalWrite(greenPin, LOW);
  digitalWrite(yellowPin, HIGH);
  delay(1000);
  digitalWrite(yellowPin, LOW);
  digitalWrite(redPin, HIGH);
  delay(1000);
  digitalWrite(redPin, LOW);
}