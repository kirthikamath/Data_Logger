/************************************************************
*Description : Rain gauge interrupt handling
************************************************************/

#include "interrupts.h"

/* External rain pulse counter variable*/
extern volatile uint32_t rain_pulse_count;

void rain_gauage_ISR(void)
{
  /***********************************************************
    *Each rain guage tip generates one pulse
    *Interrupt-based counting prevents missing rainfall events
  ************************************************************/

rain_pulse_count++;
}
