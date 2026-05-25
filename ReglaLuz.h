#ifndef REGLA_LUZ_H
#define REGLA_LUZ_H

#include "Actuador.h"

class ReglaLuz {
  private:
    float umbral;

    Actuador* actuadores[10];
    int cantidadActuadores;

  public:
    ReglaLuz(float u);

    void agregarActuador(Actuador* a);

    void evaluar(float valor);
};

#endif