#include "LED.h"
#include <Arduino.h>

LED::LED(int p){
  pin = p;
}

void LED::ejecutar(float valor){
  digitalWrite(pin, valor > 0 ? HIGH : LOW);
}
