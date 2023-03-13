/*
 * mega16_test_uart_no_irq.cpp
 *
 * Created: 13.03.2023 18:14:25
 * Author : User
 */ 

#include "IncFile1.h"
#include "USARTInit.h"
#include "IoByte.h"
#include "IoString.h"

// typedef enum {FALSE = 0, TRUE = !FALSE} bool;
// https://microtechnics.ru/mikrokontrollery-avr-uart-ispolzovanie-preryvanij/
// int		i = 0;
// uint8_t	testBuffer[8];
// bool readyToExchange;
// uint8_t numOfDataToSend;
// uint8_t numOfDataToReceive;
// uint8_t *sendDataPtr;
// uint8_t *receivedDataPtr;
// uint8_t numOfDataSended;
// uint8_t numOfDataReceived;
// 
// void UART_SendData(uint8_t *pSendData, uint8_t nNumOfDataToSend)
// {
// 	sendDataPtr = pSendData;
// 	numOfDataToSend = nNumOfDataToSend;
// 	numOfDataSended = 0;
// 	readyToExchange = false;
// 	UCSRB |= (1 << UDRIE) | (1 << TXEN);
// }
// 
// 
// void UART_ReceiveData(uint8_t* pReceivedData, uint8_t nNumOfDataToReceive)
// {
// 	receivedDataPtr = pReceivedData;
// 	numOfDataToReceive = nNumOfDataToReceive;
// 	numOfDataReceived = 0;
// 	readyToExchange = false;
// 	UCSRB |= (1 << RXCIE) | (1 << RXEN);
// }


int main(void)
{
    /* Replace with your application code */
	USARTInit(MYUBRR);
	USARTTransmitStringLn("Привет");
	USARTTransmitStringLn("Сайт: micro-pi.ru");
	while (true)
	{
	  char c = USARTReceiveChar();
	  USARTTransmitString("Вы отправили: ");
	  USARTTransmitChar(c);
	  USARTTransmitStringLn("");
	}
}

