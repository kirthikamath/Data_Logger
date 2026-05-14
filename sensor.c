/************************************************************
  * Description : Sensor handling implementation
*************************************************************/

#include "sensor.h"

/***********************************************************************
  * Description :Initializes temperature and humidity sensor
************************************************************************/
void sensor_init(void)
{
    //Initialize I2C communication
  
    //Configure sensor settings
  
    // Verify sensor readiness
}

/***********************************************************************
  * Description : Reads temperature and humidity sensor data using I2C
************************************************************************/

void read_temp_humidity_sensor(float *temp, float *hum)
{
  // Read sensor registers using I2C

  // Convert raw sensor data

  // Store converted values
}

/************************************************************
  * Description : Converts rain pulse count into rainfall value
*************************************************************/
float calculate_rainfall (uint32_t pulse_count)
{
  /********************************************************
    * Each rain gauge tip corresponds to fixed rainfall.
    * Example: 1 pulse = 0.25mm rainfall
  ********************************************************/

  return (pulse_count *0.25);
}
