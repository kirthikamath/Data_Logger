/************************************************************
*Description : Rain gauge interrupt handling
************************************************************/

#include "interrupts.h"

void rain_gauge_ISR(void)
{
  /***********************************************************
    *Each rain guage tip generates one pulse
    *Interrupt-based counting prevents missing rainfall events
  ************************************************************/

rain_pulse_count++;
}
