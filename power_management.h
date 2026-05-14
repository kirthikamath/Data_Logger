/***************************************************************
* Description : Header file for power management functions
****************************************************************/
#ifndef POWER_MANAGEMENT_H
#define POWER_MANAGEMENT_H

/* ==================== FUNCTION PROTOTYPES ===============*/

/***************************************************************
* Description : Initializes power management subsystem
****************************************************************/
void power_management_init(void);

/***************************************************************
* Description : Puts MCU into low-power sleep mode
****************************************************************/
void enter_sleep_mode(void);

/***************************************************************
* Description : Wakes MCU from sleep mode
****************************************************************/
void wakeup_from_sleep(void);

#endif
