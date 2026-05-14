/************************************************************
  * Description : Header file for sensor handling functions
*************************************************************/

#ifndef SENSOR_H
#define SENSOR_H

/* ========================= INCLUDES =====================*/
#include <stdint.h>

/* ========================= FUNCTION PROTOTYPES =====================*/

/***********************************************************************
  * Description : Initializes temperature and humidity sensor
************************************************************************/
void sensor_init(void);

/************************************************************
  * Description : Reads temperature and humidity sensor data
*************************************************************/
void read_temp_humidity_sensor(float *temp, float *humidity);

/************************************************************
  * Description : Converts rain pulse count into rainfall value
*************************************************************/
float calculate_rainfall(uint32_t pulse_count);

#endif
