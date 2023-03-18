// ; Credit: Dr Meetha V. Shenoy
// Two interrupt sources #include<stdio.h>
#include "stm32f4xx.h"
#include "stm32f4xx_hal.h"




int EXTI0counter;


/* Handler code for  EXTI0_IRQ. The name of handler cannot change as EXTI0_IRQHandler is defined in startup_stm32f407xx.s */
void EXTI0_IRQHandler (void)   { 
    
	__asm("SVC 0X10");
	EXTI0counter=EXTI0counter+1; 
         
} 



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


int main(void)
{   	
			SystemClock_Config(); // Set AHB clock to 168MHz, APB1 to 42Mhz and APB2 to 82Mhz
	
			NVIC_SetPriorityGrouping(3); // Set priotiy grouping
			NVIC_SetPriority(EXTI0_IRQn,3);//

			//NVIC_EnableIRQ(EXTI0_IRQn);   // Enable IRQ for ext. signals, line EXTI3_IRQn
			NVIC->ISER[0]=0X40;
	
	//__asm	("	MOV R0,#1");

		//	__asm	("	MSR PRIMASK,R0");
	
	//	NVIC_SetPendingIRQ(EXTI0_IRQn);
			NVIC->ISPR[0]=0X40;
		  
	
	while(1);
}

__asm  void SVC_Handler(void)
{ push {lr};
	TST LR,#4;
	MRSEQ R0,MSP;
	MRSNE R0,PSP;
	LDR R0,[R0,#24];
	LDRB R0,[R0,#-2];
	MOV R3,#0x10;
	SUBS R5,R0, R3;
	ADDEQ R1,R1,R2;
	SUBNE R1,R1,R2;
	pop {pc};
}

		
	
	
	