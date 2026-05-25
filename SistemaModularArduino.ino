#include "SensorFactory.h"
#include "ActuadorFactory.h"
#include "LED.h"
#include "Buzzer.h"
#include "SensorLDR.h"
#include "ReglaLuz.h"

Sensor* sensor;
Actuador* led;
Actuador* buzzer;
ReglaLuz* regla;

void setup() {
  Serial.begin(9600);

  // Actuadores
  led = ActuadorFactory::crearActuador("LED", 13);
  buzzer = ActuadorFactory::crearActuador("Buzzer", 8);

  // Sensores
  sensor = SensorFactory::crearSensor("LDR", A0);

  // Logica de decision
  regla = new ReglaLuz(130);

  regla->agregarActuador(led);
  regla->agregarActuador(buzzer);

}

void loop() {
  float valor = sensor->leer();
  regla->evaluar(valor);


  Serial.print("Valor LDR: ");
  Serial.println(valor);

  delay(100);
}
