/*
 * IoByte.h
 *
 * Created: 13.03.2023 18:41:29
 *  Author: User
 */ 


#ifndef IOBYTE_H_
#define IOBYTE_H_

//  Отправка байта
void USARTTransmitChar(const char c);

//  Получение байта
char USARTReceiveChar();

#endif /* IOBYTE_H_ */