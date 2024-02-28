#ifndef __BSP_RCC_H
#define	__BSP_RCC_H
#include "stm32f1xx.h"
#include "stm32f1xx_hal_rcc.h"

void HSE_SetSysClock(void);
void HSI_SetSysClock(void);

#endif /* __CLKCONFIG_H */
