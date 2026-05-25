#ifndef LED_H
#define LED_H

#include "Actuador.h"

class LED : public Actuador {
  private:
    int pin;
  public:
    LED(int p);
    void ejecutar(float valor) override;
};

#endif