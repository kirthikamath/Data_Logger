/********************************************************************
* Description : Header file for rain gauge interrupt handling
*********************************************************************/

#ifndef INTERRUPTS_H
#define INTERRUPTS_H

/*========================== INCLUDES ===============================*/
#include<stdint.h>

/*========================== EXTERNAL VARAIBLES ======================*/
/* Rain pulse countyer updated inside ISR */
extern volatile uint32_t rain_pulse_count;

/*========================== FUNCTION PROTOTYPES ====================*/

/************************************************************************
* Description : Interrupt Service routine for rain gauge pulse detection
**************************************************************************/

void rain_gauge_ISR(void);

#endif
