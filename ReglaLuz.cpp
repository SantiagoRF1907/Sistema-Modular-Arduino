#include "ReglaLuz.h"
#include <Arduino.h>

ReglaLuz::ReglaLuz(float u) {
  umbral = u;
  cantidadActuadores = 0;
}

void ReglaLuz::agregarActuador(Actuador* a) {
  actuadores[cantidadActuadores] = a;
  cantidadActuadores++;
}

void ReglaLuz::evaluar(float valor) {

  int estado = (valor < umbral) ? 1 : 0;

  if(estado == 1) {
    Serial.println("Actuadores encendidos");
    Serial.println();
  } else {
    Serial.println("Actuadores apagados");
    Serial.println();
  }

  for (int i = 0; i < cantidadActuadores; i++) {
    actuadores[i]->ejecutar(estado);
  }
  return estado;
}