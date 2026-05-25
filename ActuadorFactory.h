#ifndef ACTUADOR_FACTORY_H
#define ACTUADOR_FACTORY_H

#include <Arduino.h>
#include "Actuador.h"

class ActuadorFactory {
  public:
    static Actuador* crearActuador(String tipo, int pin);
};

#endif

