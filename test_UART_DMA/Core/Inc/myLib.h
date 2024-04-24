/*
 * myLib.h
 *
 *  Created on: Apr 19, 2024
 *      Author: SAMSUNG
 */

#ifndef INC_MYLIB_H_
#define INC_MYLIB_H_

extern UART_HandleTypeDef huart2;

int __io_putchar(int ch)
{
	HAL_UART_Transmit(&huart2, &ch, 1, 10);
	return ch;
}

void ProgramStart()
{
	 printf("\033[2J");	// screen clear
	 printf("\033[1;1H");	// Move cursor pos to (1,1)
	 printf("Program Started....Press Blue button to continue\r\n");
	 while(HAL_GPIO_ReadPin(B1_GPIO_Port, B1_Pin));  // (B1 == 0) if pressed
	 printf("\033[2J");	// screen clear
}

void Wait(int o)
{
	//if(o)
}



#endif /* INC_MYLIB_H_ */
