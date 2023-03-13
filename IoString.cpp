/*
 * IoString.c
 *
 * Created: 13.03.2023 19:44:18
 *  Author: User
 */ 
#include "IncFile1.h"
#include "IoByte.h"


//  Отправка строки
void USARTTransmitString(const char *str)
{
	register
	uint8_t i = 0;
	while(str[i])
	{
		USARTTransmitChar(str[i++]);
	}
}


//  Отправка строки
void USARTTransmitStringLn(const char *str)
{
	USARTTransmitString(str);
	USARTTransmitChar((char)13);
	USARTTransmitChar((char)10);
}
