/************************************************************
*Description : Rain gauge interrupt handling
************************************************************/

#include "interrupts.h"

/************************************************************************
* Description : Initializes rain gauge interrupt configuration
**************************************************************************/

void rain_gauge_interrupt_init(void)
{
  // Configure GPIO interrupt for rain gauge input

  // configure interrupt trigger
}

/*************************************************************************
*Description : Handles rain gauge pulse interrupt 
* This ISR is automatically triggered when rain gauge interrupt occurs
***************************************************************************/

void rain_gauge_ISR(void)
{
  /***********************************************************
    *Each rain guage tip generates one pulse
    *Interrupt-based counting prevents missing rainfall events
  ************************************************************/

  rain_pulse_count++;
}
