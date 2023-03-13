/*
 * IoByte.c
 *
 * Created: 13.03.2023 18:40:14
 *  Author: User
 */ 

#include "IncFile1.h"

//  Отправка байта
void USARTTransmitChar(const char c)
{
	//  Устанавливается, когда регистр свободен
	while(!( UCSRA & (1<<UDRE)));
	UDR = c;
}

//  Получение байта
char USARTReceiveChar(void)
{
	//  Устанавливается, когда регистр свободен
	while(!(UCSRA & (1<<RXC)));
	return UDR;
}
