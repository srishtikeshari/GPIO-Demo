#include "stm32f4xx.h"
#include "nvic.h"
#include "gpio.h"

int main(void)
{

	int i = 0, j = 0;
	char (portNames[3] = {'A', 'B', 'C'};
	int portIns[] = {0,1,2};
	int portOuts[] = {13,14,15};
	for(i = 0; i < 3; i++)
	{
		for(j = 0; j < 3; j++)
		{
			PORT_INIT(portNames[i] , portIns[j], 0);    //0 - input
		}
	}
	for(i = 0; i < 3; i++)
	{
		for(j = 0; j < 3; j++)
		{
			PORT_INIT(portNames[i], portOuts[j], 1);  //1 - output
		}
	}
	
	EXTI_INIT('A', 0);
	EXTI_INIT('C', 2);
	
	
	while (1);
	 

	//C2 - E 0x40020810 = 0x00000004

	}
	
	

