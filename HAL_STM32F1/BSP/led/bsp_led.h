#ifndef __LED_H
#define	__LED_H

#include "stm32f1xx.h"

//引脚定义
/*******************************************************/
#define LED1_PIN                  GPIO_PIN_0                
#define LED1_GPIO_PORT            GPIOC                     
#define LED1_GPIO_CLK_ENABLE()   __HAL_RCC_GPIOC_CLK_ENABLE()

#define LED2_PIN                  GPIO_PIN_1               
#define LED2_GPIO_PORT            GPIOC                      
#define LED2_GPIO_CLK_ENABLE()   __HAL_RCC_GPIOC_CLK_ENABLE()

#define LED3_PIN                  GPIO_PIN_2              
#define LED3_GPIO_PORT            GPIOC                       
#define LED3_GPIO_CLK_ENABLE()    __HAL_RCC_GPIOC_CLK_ENABLE()

#define LED4_PIN                  GPIO_PIN_3                
#define LED4_GPIO_PORT            GPIOC                     
#define LED4_GPIO_CLK_ENABLE()   __HAL_RCC_GPIOC_CLK_ENABLE()

#define LED5_PIN                  GPIO_PIN_4               
#define LED5_GPIO_PORT            GPIOC                      
#define LED5_GPIO_CLK_ENABLE()   __HAL_RCC_GPIOC_CLK_ENABLE()

#define LED6_PIN                  GPIO_PIN_5              
#define LED6_GPIO_PORT            GPIOC                       
#define LED6_GPIO_CLK_ENABLE()    __HAL_RCC_GPIOC_CLK_ENABLE()

#define LED7_PIN                  GPIO_PIN_6                
#define LED7_GPIO_PORT            GPIOC                     
#define LED7_GPIO_CLK_ENABLE()   __HAL_RCC_GPIOC_CLK_ENABLE()

#define LED8_PIN                  GPIO_PIN_7               
#define LED8_GPIO_PORT            GPIOC                      
#define LED8_GPIO_CLK_ENABLE()   __HAL_RCC_GPIOC_CLK_ENABLE()



/************************************************************/


/** 控制LED灯亮灭的宏，
	* LED低电平亮，设置ON=0，OFF=1
	* 若LED高电平亮，把宏设置成ON=1 ，OFF=0 即可
	*/
#define ON  GPIO_PIN_RESET
#define OFF GPIO_PIN_SET

/* 带参宏，可以像内联函数一样使用 */
#define LED1(a)	HAL_GPIO_WritePin(LED1_GPIO_PORT,LED1_PIN,a)
#define LED2(a)	HAL_GPIO_WritePin(LED2_GPIO_PORT,LED2_PIN,a)
#define LED3(a)	HAL_GPIO_WritePin(LED2_GPIO_PORT,LED3_PIN,a)
#define LED4(a)	HAL_GPIO_WritePin(LED1_GPIO_PORT,LED1_PIN,a)
#define LED5(a)	HAL_GPIO_WritePin(LED2_GPIO_PORT,LED2_PIN,a)
#define LED6(a)	HAL_GPIO_WritePin(LED2_GPIO_PORT,LED3_PIN,a)
#define LED7(a)	HAL_GPIO_WritePin(LED1_GPIO_PORT,LED1_PIN,a)
#define LED8(a)	HAL_GPIO_WritePin(LED2_GPIO_PORT,LED2_PIN,a)





/* 直接操作寄存器的方法控制IO */
#define	digitalHi(p,i)			{p->BSRR=i;}			  //设置为高电平		
#define digitalLo(p,i)			{p->BSRR=(uint32_t)i << 16;}				//输出低电平
#define digitalToggle(p,i)		{p->ODR ^=i;}			//输出反转状态


/* 定义控制IO的宏 */
#define LED1_TOGGLE		digitalToggle(LED1_GPIO_PORT,LED1_PIN)
#define LED1_OFF		digitalHi(LED1_GPIO_PORT,LED1_PIN)
#define LED1_ON			digitalLo(LED1_GPIO_PORT,LED1_PIN)

#define LED2_TOGGLE		digitalToggle(LED2_GPIO_PORT,LED2_PIN)
#define LED2_OFF		digitalHi(LED2_GPIO_PORT,LED2_PIN)
#define LED2_ON			digitalLo(LED2_GPIO_PORT,LED2_PIN)

#define LED3_TOGGLE		digitalToggle(LED3_GPIO_PORT,LED3_PIN)
#define LED3_OFF		digitalHi(LED3_GPIO_PORT,LED3_PIN)
#define LED3_ON			digitalLo(LED3_GPIO_PORT,LED3_PIN)

#define LED4_TOGGLE		digitalToggle(LED4_GPIO_PORT,LED4_PIN)
#define LED4_OFF		digitalHi(LED4_GPIO_PORT,LED4_PIN)
#define LED4_ON			digitalLo(LED4_GPIO_PORT,LED4_PIN)

#define LED5_TOGGLE		digitalToggle(LED5_GPIO_PORT,LED5_PIN)
#define LED5_OFF		digitalHi(LED5_GPIO_PORT,LED5_PIN)
#define LED5_ON			digitalLo(LED5_GPIO_PORT,LED5_PIN)

#define LED6_TOGGLE		digitalToggle(LED6_GPIO_PORT,LED6_PIN)
#define LED6_OFF		digitalHi(LED6_GPIO_PORT,LED6_PIN)
#define LED6_ON			digitalLo(LED6_GPIO_PORT,LED6_PIN)

#define LED7_TOGGLE		digitalToggle(LED7_GPIO_PORT,LED7_PIN)
#define LED7_OFF		digitalHi(LED7_GPIO_PORT,LED7_PIN)
#define LED7_ON			digitalLo(LED7_GPIO_PORT,LED7_PIN)

#define LED8_TOGGLE		digitalToggle(LED8_GPIO_PORT,LED8_PIN)
#define LED8_OFF		digitalHi(LED8_GPIO_PORT,LED8_PIN)
#define LED8_ON			digitalLo(LED8_GPIO_PORT,LED8_PIN)

					
//黑(全部关闭)
#define LED_ALLON		do				\
						{				\
							LED1_ON;	\
							LED2_ON;	\
							LED3_ON;	\
							LED4_ON;	\
							LED5_ON;	\
							LED6_ON;	\
							LED7_ON;	\
							LED8_ON;	\
						} while (0)


#define LED_ALLOFF		do				\
						{				\
							LED1_OFF;	\
							LED2_OFF;	\
							LED3_OFF;	\
							LED4_OFF;	\
							LED5_OFF;	\
							LED6_OFF;	\
							LED7_OFF;	\
							LED8_OFF;	\
						} while (0)

					




void LED_GPIO_Config(void);
void LED_Test(void);

#endif /* __LED_H */
