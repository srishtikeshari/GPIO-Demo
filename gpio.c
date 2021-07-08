#include "stm32f4xx.h"
#include "gpio.h"
#include "nvic.h"


void PORT_INIT(char portName, int portNum, int output)
{
	if(portName == 'A')
	{
		if(output == 0)
		{
			GPIOA->MODER &= ~((1<<(2 * portNum)) | (1<<(2 * portNum + 1)));
		}
		else
		{
			GPIOA->MODER |= (1<<(2 * portNum));
		}
	}
	else if(portName == 'B')
	{
		if(output == 0)
		{
			GPIOB->MODER &= ~((1<<(2 * portNum)) | (1<<(2 * portNum + 1)));
		}
		else
		{
			GPIOB->MODER |= (1<<(2 * portNum));
		}
	}
	else if(portName == 'C')
	{
		if(output == 0)
		{
			GPIOC->MODER &= ~((1<<(2 * portNum)) | (1<<(2 * portNum + 1)));
		}
		else
		{
			GPIOC->MODER |= (1<<(2 * portNum));
		}
	}
}

void GPIO_OUTPUT_0(char x)
{
	if(x == 'A')
	{
			GPIOA->ODR = GPIOA->ODR | 0x2000;
	}
	else if(x == 'B')
	{
			GPIOB->ODR = GPIOB->ODR | 0x2000;
	}
	else if(x == 'C')
	{
			GPIOC->ODR = GPIOC->ODR | 0x2000;
	}
	
}

void GPIO_OUTPUT_1(char x)
{
	if(x == 'A')
	{
			GPIOA->ODR = GPIOA->ODR | 0x4000;
	}
	else if(x == 'B')
	{
			GPIOB->ODR = GPIOB->ODR | 0x4000;
	}
	else
	{
			GPIOC->ODR = GPIOC->ODR | 0x4000;
	}
}

void GPIO_OUTPUT_2(char x)
{
	if(x == 'A')
	{
			GPIOA->ODR = GPIOA->ODR | 0x8000;
	}
	else if(x == 'B')
	{
			GPIOB->ODR = GPIOB->ODR | 0x8000;
	}
	else
	{
			GPIOC->ODR = GPIOC->ODR | 0x8000;
	}
}
