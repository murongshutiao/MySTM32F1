#include "board.h"





void BSP_Init(void)
{

    HSE_SetSysClock();
    LED_GPIO_Config();
}


void User_Deal(void)
{
    LED_Test();
}