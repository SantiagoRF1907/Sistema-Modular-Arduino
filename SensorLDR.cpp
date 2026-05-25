#include "SensorLDR.h"
#include <Arduino.h>

SensorLDR::SensorLDR(int p) {
  pin = p;
}

float SensorLDR::leer() {
  return analogRead(pin);
}