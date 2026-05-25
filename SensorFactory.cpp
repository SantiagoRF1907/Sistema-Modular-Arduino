#include "SensorFactory.h"
#include "SensorLDR.h"

Sensor* SensorFactory::crearSensor(String tipo, int pin) {
  if(tipo == "LDR") return new SensorLDR(pin);
  return nullptr;
}