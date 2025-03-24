#ifndef HWDEFS_H_INCLUDED
#define HWDEFS_H_INCLUDED


//Common for any config

//#define RCC_CLOCK_SETUP() rcc_clock_setup_pll(&rcc_hse_8mhz_3v3[RCC_CLOCK_3V3_96MHZ])
#define RCC_CLOCK_SETUP() rcc_clock_setup_pll(&rcc_hse_16mhz_3v3[RCC_CLOCK_3V3_96MHZ])
#define OVER_CUR_TIMER     TIM4
#define OCURMAX            4096

//Address of parameter block in flash for g473
#define FLASH_CONF_BASE 0x08004000
#define FLASH_PAGE_SIZE 2048
#define PARAM_BLKNUM  8 // 0x80004000 - 47FF
#define PARAM_BLKSIZE FLASH_PAGE_SIZE
#define CAN1_BLKNUM   10 // 0x80005000 - 57FF
#define CAN2_BLKNUM   12 // 0x80006000 - 67FF	

#define PARAM_BLKOFFSET 0x800 
#define CAN_BLKSIZE     0x1000 //4096
#define CAN1_BLKOFFSET  0x1000
#define CAN2_BLKOFFSET  (CAN1_BLKOFFSET + CAN_BLKSIZE)


#endif // HWDEFS_H_INCLUDED
