#include "sensors.h"

void read_temp_humidity_sensor(float *temp, float *hum)
{
  // Read sensor registers using I2C

  //Convert raw sensor data

  //Store converted values
}

float calculate_rainfall (uint32_t pulse_count)
{
  /********************************************************
    * Each rain gauge tip corresponds to fixed rainfall.
    * Example: 1 pulse = 0.25mm rainfall
  ********************************************************/

  return (pulse_count *0.25);
}
