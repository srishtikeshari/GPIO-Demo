#include "stm32f4xx.h"
#include "gpio.h"
#include "nvic.h"
//int a=0;
char port;
void EXTI_INIT(char x, int y)
{
	port = x;
	if(y == 0)
	{
		EXTI->IMR=EXTI->IMR|0x00000001;
		EXTI->RTSR=EXTI->IMR|0x00000001;
		NVIC_SetPriorityGrouping(5); 
		NVIC_SetPriority(EXTI0_IRQn,2);
		NVIC_EnableIRQ(EXTI0_IRQn);
	}
	if(y == 1)
	{
		EXTI->IMR=EXTI->IMR|0x00000002;
		EXTI->RTSR=EXTI->IMR|0x00000002;
		NVIC_SetPriorityGrouping(5); 
		NVIC_SetPriority(EXTI1_IRQn,1);
		NVIC_EnableIRQ(EXTI1_IRQn);
	}
	if(y == 2)
	{
		EXTI->IMR= EXTI->IMR|0x00000004;
		EXTI->RTSR=EXTI->IMR|0x00000004;
		NVIC_SetPriorityGrouping(5); 
		NVIC_SetPriority(EXTI2_IRQn,0);
		NVIC_EnableIRQ(EXTI2_IRQn);
	}
}


void EXTI0_IRQHandler(void){   

		GPIO_OUTPUT_0(port);
		
		
}

void EXTI1_IRQHandler(void){   

		GPIO_OUTPUT_1(port);
}

void EXTI2_IRQHandler(void){   

		GPIO_OUTPUT_2(port);
}
