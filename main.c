/***********************************************************************
  Description: Main application flow for Remote Weather Data Logger
************************************************************************/
/* =========================INCLUDES ===================================*/
#include<stdio.h>
#include<stdint.h>

#include "sensor.h"
#include "lora.h"
#include "sd_card.h"
#include "power_management.h"
#include "interrupts.h"

/* =========================GLOBAL VARIABLES ===================================*/
volatile uint32_t rain_pulse_count = 0;
float temp = 0;
float humidity = 0;
float rainfall = 0;
char tx_packet[100];

/* =========================FUNCTION PROTOTYPES ===================================*/
void system_init(void)

/* =========================INITIALIZATION ===================================*/
void system_init(void)
{
  //Initialize MCU clock
  clock_init();

  //Initialize GPIOs
  gpio_init();

  //Configure rain gauge inteerupt pin
  rain_gauge_interrupt_init();
  
 //Initialize sensor module 
   sensor_init();

 //Initialize SPI for SD card and LoRA
  spi_init();

 //Initialize SD_card
  sd_card_init();

 //Mount FAT file system
  fatfs_mount();

 //Initialize LoRa module
  lora_init();

 //Initialize RTC/timer 
 rtc_init();

 //Initialize low-power mode
  power_management_init();
}

/* =========================MAIN LOOP ===================================*/

int main(void)
{
    //perform all peripheral initialization
    system_init();
    while(1)
    {
        // Wake up periodically using RTC/timer
        wakeup_from_sleep();

        //Read temperature and humidity sensor using I2C
        read_temp_humidity_sensor(&temp,&humidity);

        //Calculating the rainfall from pulse count
        rainfall = calculate_rainfall(rain_pulse_count);

        //create data packet
        sprintf(tx_packet,
                "TEMP=%.2f,HUM=%.2f,RAIN=%.2f",
                 temp,
                 humidity,
                 rainfall);

        //store data in SD card
        sd_write_log(tx_packet);

        //transmit data using LoRa
        lora_send(tx_packet);

        //clear/update required variables
        rain_pulse_count = 0;

        //enter low-power sleep mode
        enter_sleep_mode();
    }
  return 0;
}
