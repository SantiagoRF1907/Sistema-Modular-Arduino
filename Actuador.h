#ifndef ACTUADOR_H
#define ACTUADOR_H

class Actuador {
  public:
    virtual void ejecutar(float valor) = 0;
};

#endif