#include <Arduino.h>

const int LEDPin = 17;
int brightness = 0;
int fade = 5;

void setup() {
  Serial.begin(9600);
  pinMode(LEDPin, OUTPUT);
}

void loop() {
  analogWrite(LEDPin, brightness);
  brightness += fade;
  Serial.printf("\nbrightness: %i | fade: %i", brightness, fade);
  if (brightness <= 0 || brightness >= 255) {
    fade = -fade;
    Serial.printf("\nbrightness: %i | fade: %i", brightness, fade);
  }
  delay(300);
}
