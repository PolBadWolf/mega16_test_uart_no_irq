/*
 * IncFile1.h
 *
 * Created: 13.03.2023 18:33:49
 *  Author: User
 */ 


#ifndef INCFILE1_H_
#define INCFILE1_H_

#define F_CPU 8000000UL
#define BAUD 9600
#define MYUBRR F_CPU/16/BAUD-1

#include <avr/io.h>
// #include <avr/interrupt.h>
#include <avr/iom16.h>




#endif /* INCFILE1_H_ */