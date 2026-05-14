/**********************************************************
* Description : Header file for SD Card handling functions
***********************************************************/

#ifndef SD_CARD_H
#define SD_CARD_H

/*====================== FUNCTION PROTOTYPES =============*/

/**********************************************************
* Description : Initialize SD card and filesystem
***********************************************************/
void sd_card_init(void);

/**********************************************************
* Description : Stores sensor log data into SD Card
***********************************************************/
void sd_write_log(char * data);

#endif
