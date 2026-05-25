#ifndef SENSOR_LDR_H
#define SENSOR_LDR_H

#include "Sensor.h"

class SensorLDR : public Sensor {
  private:
    int pin;

  public:
    SensorLDR(int p);
    float leer() override;
};

#endif