#include "board.h"

#include "main.h"



/**
  * @brief  ������
  * @param  ��
  * @retval ��
  */
int main(void)
{
    BSP_Init();

    while (1)
    {
        User_Deal();
    }
}


/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
