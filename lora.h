/***********************************************************
* Description : Header file for LoRa communication functions
************************************************************/

#ifndef LORA_H
#define LORA_H

/* ===================== FUNCTION PROTOTYPES ==============*/

/***********************************************************
* Description : Initializes LoRa communication module
************************************************************/
void lora_init(void);

/***********************************************************
* Description : Sends sensor data packet using LoRa
************************************************************/
void lora_send(char * data);

#endif
