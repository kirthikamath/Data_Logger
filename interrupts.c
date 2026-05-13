#include "interrupt.h"

void calculate_rainfall(void)
{
  /***********************************************
    *Each rain guage tip generates one pulse
    *Interrupt ensure pulses are not missed
  ************************************************/

rain_pulse_count++;
}
