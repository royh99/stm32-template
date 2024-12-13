#ifndef HWDEFS_H_INCLUDED
#define HWDEFS_H_INCLUDED


//Common for any config

#define RCC_CLOCK_SETUP() rcc_clock_setup_pll(&rcc_hse_8mhz_3v3[RCC_CLOCK_3V3_168MHZ])
#define OVER_CUR_TIMER     TIM3
#define OCURMAX            4096

//Address of parameter block in flash
#define FLASH_CONF_BASE 0x08004000
#define PARAM_BLKSIZE   0x800 //2048
#define PARAM_BLKOFFSET 0x800 
#define CAN_BLKSIZE     0x1000 //4096
#define CAN1_BLKOFFSET  0x1000
#define CAN2_BLKOFFSET  (CAN1_BLKOFFSET + CAN_BLKSIZE)


#endif // HWDEFS_H_INCLUDED
