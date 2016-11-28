#ifndef __CF_PROTOCOL_H
#define __CF_PROTOCOL_H

#include <linux/slab.h>
#include <linux/types.h>
    
#include <asm/drivers/cardreader/cardreader.h>
#include <asm/drivers/cardreader/card_io.h>

	
	
	
	
	
	
	
	
	
	
	
	
	


#define CF_INIT_RETRY				3
    
//Following functions are the API used for outside routine
    
//CF Initialization...
int cf_card_init(CF_Card_Info_t * card_info);

//get cf card information
//void cf_get_info(blkdev_stat_t *info);
//Check if any card is inserted according to pull up resistor
int cf_check_insert(void);


//Read data from CF card
int cf_read_data(unsigned long lba, unsigned long byte_cnt,
		 unsigned char *data_buf);

//Write data to CF card
int cf_write_data(unsigned long lba, unsigned long byte_cnt,
		  unsigned char *data_buf);

//CF Power on/off
void cf_power_on(void);



#endif				// __CF_PROTOCOL_H