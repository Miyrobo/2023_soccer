#include <Arduino.h>
#include "sensors.h"
#include "motor.h"
#include "functions.h"
#include "wireless.h"

BALL ball;

void setup() {
  buzzer.windowsXP();
}

void loop() {
  ball.get();
}