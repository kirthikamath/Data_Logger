/**********************************************************
* Description : SD Card handling implementation
***********************************************************/

#include "sd_card.h"

/**********************************************************
* Description : Initializes SD card and filesystem
***********************************************************/
void sd_card_init(void)
{
  // Initialize SPI communication

  // Detect Sd Card

  // Mount FAT filesystem
}

/**********************************************************
* Description : Stores sensor log data into SD card
***********************************************************/
void sd_write_log(char *data)
{
  // Open log file

  // Write sensor data

  // Close file safely
}
