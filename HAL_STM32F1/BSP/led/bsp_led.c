#include "./led/bsp_led.h"   

 /**
  * @brief  初始化控制LED的IO
  * @param  无
  * @retval 无
  */
void LED_GPIO_Config(void)
{		

    GPIO_InitTypeDef  GPIO_InitStruct;

    LED1_GPIO_CLK_ENABLE();
    LED2_GPIO_CLK_ENABLE();
    LED3_GPIO_CLK_ENABLE();
    LED4_GPIO_CLK_ENABLE();
    LED5_GPIO_CLK_ENABLE();
    LED6_GPIO_CLK_ENABLE();
    LED7_GPIO_CLK_ENABLE();
    LED8_GPIO_CLK_ENABLE();
  														   
    GPIO_InitStruct.Pin = LED1_PIN;	
    GPIO_InitStruct.Mode  = GPIO_MODE_OUTPUT_PP;  
    GPIO_InitStruct.Pull  = GPIO_NOPULL; 
    GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_HIGH;
    HAL_GPIO_Init(LED1_GPIO_PORT, &GPIO_InitStruct);	
														   
    GPIO_InitStruct.Pin = LED2_PIN;	
    HAL_GPIO_Init(LED2_GPIO_PORT, &GPIO_InitStruct);	
															   
    GPIO_InitStruct.Pin = LED3_PIN;	
    HAL_GPIO_Init(LED3_GPIO_PORT, &GPIO_InitStruct);	
															   
    GPIO_InitStruct.Pin = LED4_PIN;	
    HAL_GPIO_Init(LED4_GPIO_PORT, &GPIO_InitStruct);	
															   
    GPIO_InitStruct.Pin = LED5_PIN;	
    HAL_GPIO_Init(LED5_GPIO_PORT, &GPIO_InitStruct);	
															   
    GPIO_InitStruct.Pin = LED6_PIN;	
    HAL_GPIO_Init(LED6_GPIO_PORT, &GPIO_InitStruct);	
															   
    GPIO_InitStruct.Pin = LED7_PIN;	
    HAL_GPIO_Init(LED7_GPIO_PORT, &GPIO_InitStruct);	
															   
    GPIO_InitStruct.Pin = LED8_PIN;	
    HAL_GPIO_Init(LED8_GPIO_PORT, &GPIO_InitStruct);	
															   
    LED_ALLON;
}

void LED_Test(void)
{
    LED1_TOGGLE;
    HAL_Delay(1000);
    LED2_TOGGLE;
    HAL_Delay(1000);
    LED3_TOGGLE;
    HAL_Delay(1000);
    LED4_TOGGLE;
    HAL_Delay(1000);
    LED5_TOGGLE;
    HAL_Delay(1000);
    LED6_TOGGLE;
    HAL_Delay(1000);
    LED7_TOGGLE;
    HAL_Delay(1000);
    LED8_TOGGLE;
    HAL_Delay(1000);
}


/*********************************************END OF FILE**********************/
