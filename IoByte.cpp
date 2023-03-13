/*
 * IoByte.c
 *
 * Created: 13.03.2023 18:40:14
 *  Author: User
 */ 

#include "IncFile1.h"

//  �������� �����
void USARTTransmitChar(const char c)
{
	//  ���������������, ����� ������� ��������
	while(!( UCSRA & (1<<UDRE)));
	UDR = c;
}

//  ��������� �����
char USARTReceiveChar(void)
{
	//  ���������������, ����� ������� ��������
	while(!(UCSRA & (1<<RXC)));
	return UDR;
}
