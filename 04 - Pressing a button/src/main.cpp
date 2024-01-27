#include <Arduino.h>

const int buttonPin = 18;
int previousState = HIGH;
int currentState;

void setup() {
  Serial.begin(9600);
  pinMode(buttonPin, INPUT_PULLUP);

}

void loop() {
  currentState = digitalRead(buttonPin);
  if (previousState == HIGH && currentState == LOW) {
    Serial.println("button is clicked");
  }

  else if (previousState == LOW && currentState == HIGH) {
    Serial.println("button is not clicked");
  }

  previousState = currentState;
}
