#include <Arduino.h>

enum ButtonState
{
  ON,
  OFF
};

// ButtonState btnCurrent;
int btnPresses = 0;
const int LED_PIN = 13;
const int SWITCH_PIN = 27;
unsigned long lastChangeTime;
const int BOUNCE_DELAY_MS = 5;
ButtonState debouncedState = OFF;
ButtonState bouncedState = OFF;

void setup()
{
  Serial.begin(115200);
}

void loop()
{
  Serial.println("Arduino is ready and working");
}