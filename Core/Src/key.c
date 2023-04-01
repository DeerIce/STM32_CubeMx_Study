#include "stm32f1xx_hal.h"                // Device header
#include "main.h"
void doif_keyDowm(void)
{
	if(HAL_GPIO_ReadPin(KEY0_GPIO_Port, KEY0_Pin)==0)
	{
		HAL_Delay(20);
		while(HAL_GPIO_ReadPin(KEY0_GPIO_Port, KEY0_Pin)==0);
		HAL_Delay(20);
		HAL_GPIO_TogglePin(LED0_GPIO_Port, LED0_Pin);
	}
	if(HAL_GPIO_ReadPin(KEY1_GPIO_Port, KEY1_Pin)==0)
	{
		HAL_Delay(20);
		while(HAL_GPIO_ReadPin(KEY1_GPIO_Port, KEY1_Pin)==0);
		HAL_Delay(20);
		HAL_GPIO_TogglePin(BEEP_GPIO_Port, BEEP_Pin);
	}
}
