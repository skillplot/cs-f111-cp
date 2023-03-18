// ; Credit: Dr Meetha V. Shenoy
// Two interrupt sources #include<stdio.h>
#include "stm32f4xx.h"
#include "stm32f4xx_hal.h"
#include "stm32f4xx_hal_rcc.h"




void SystemClock_Config(void) {
  RCC_OscInitTypeDef RCC_OscInitStruct;
  RCC_ClkInitTypeDef RCC_ClkInitStruct;

  /* Enable Power Control clock */
  __HAL_RCC_PWR_CLK_ENABLE();

  /* The voltage scaling allows optimizing the power consumption when the
     device is clocked below the maximum system frequency (see datasheet). */
  __HAL_PWR_VOLTAGESCALING_CONFIG(PWR_REGULATOR_VOLTAGE_SCALE1);

  /*  */
  RCC_OscInitStruct.OscillatorType = RCC_OSCILLATORTYPE_HSE;
  RCC_OscInitStruct.HSEState = RCC_HSE_ON;
  RCC_OscInitStruct.PLL.PLLState = RCC_PLL_ON;
  RCC_OscInitStruct.PLL.PLLSource = RCC_PLLSOURCE_HSE;
  RCC_OscInitStruct.PLL.PLLM = 25;
  RCC_OscInitStruct.PLL.PLLN = 336;
  RCC_OscInitStruct.PLL.PLLP = RCC_PLLP_DIV2;
  RCC_OscInitStruct.PLL.PLLQ = 7;
  HAL_RCC_OscConfig(&RCC_OscInitStruct);

  /* Select PLL as system clock source and configure the HCLK, PCLK1 and PCLK2
     clocks dividers */
  RCC_ClkInitStruct.ClockType = RCC_CLOCKTYPE_SYSCLK | RCC_CLOCKTYPE_PCLK1 |
                                RCC_CLOCKTYPE_PCLK2;
  RCC_ClkInitStruct.SYSCLKSource = RCC_SYSCLKSOURCE_PLLCLK;
  RCC_ClkInitStruct.AHBCLKDivider = RCC_SYSCLK_DIV1;
  RCC_ClkInitStruct.APB1CLKDivider = RCC_HCLK_DIV4;
  RCC_ClkInitStruct.APB2CLKDivider = RCC_HCLK_DIV2;
  HAL_RCC_ClockConfig(&RCC_ClkInitStruct, FLASH_LATENCY_5);
}



char tog=0;
volatile int TimeDelay;

void SysTick_Handler(void)
{
   if(TimeDelay>0)
		 TimeDelay--;

}

void Delay(uint32_t nTime) { 

TimeDelay = nTime; 
while(TimeDelay != 0);
} 

void Systick_initialize (uint32_t ticks)
{
SysTick ->CTRL = 0; 
SysTick->LOAD = ticks - 1; 
SCB->SHP[11]=96;
SysTick->VAL = 0; 
SysTick->CTRL |= 7;//enable clock source, interrupt, enable systick
	
	
};

int main(void)
{   	
			SystemClock_Config(); // Set AHB clock to 168MHz, APB1 to 42Mhz and APB2 to 82Mhz
			Systick_initialize(1680000);

			NVIC_SetPriorityGrouping(3); // Set priotiy grouping
		
	

	
	while(1){
		Delay(200);
			tog=~tog;
	}
}

