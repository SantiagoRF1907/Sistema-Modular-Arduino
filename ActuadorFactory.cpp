#include "ActuadorFactory.h"
#include "Actuador.h"
#include "LED.h"
#include "Buzzer.h"

Actuador* ActuadorFactory::crearActuador(String tipo, int pin){
  if(tipo == "LED") return new LED(pin);
  if(tipo == "Buzzer") return new Buzzer(pin);
  return nullptr;
}