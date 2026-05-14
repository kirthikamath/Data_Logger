
#ifndef SENSOR_H
#define SENSOR_H

void read_temp_humidty_sensor(float *temp, float *humidity);
float calculate_rainfall(uint32_t pulse_count);

#endif
