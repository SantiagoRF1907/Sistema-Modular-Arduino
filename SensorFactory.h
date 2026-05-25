#ifndef SENSOR_FACTORY_H
#define SENSOR_FACTORY_H

#include <Arduino.h>
#include "Sensor.h"

class SensorFactory {
  public:
    static Sensor* crearSensor(String tipo, int pin);
};

#endif