#include "Buzzer.h"
#include <Arduino.h>

Buzzer::Buzzer(int p) : pin(p) {
  pinMode(pin, OUTPUT);
}

void Buzzer::ejecutar(float valor) {
  if(valor > 0){
    tone(pin, 1000);
  } else {
    noTone(pin);
  }
}