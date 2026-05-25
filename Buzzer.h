#ifndef BUZZER_H
#define BUZZER_H

#include "Actuador.h"

class Buzzer : public Actuador {
  private:
    int pin;
  public:
    Buzzer(int p);
    void ejecutar(float valor) override;
};

#endif