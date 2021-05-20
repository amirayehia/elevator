#ifndef _LED_H_
#define _LED_H_

void LED_Init(unsigned char portName, unsigned char pinNumber, unsigned char state);

void LED_TurnOn(unsigned char portName, unsigned char pinNumber);

void LED_TurnOff(unsigned char portName, unsigned char pinNumber);

void LED_Toggle(unsigned char portName, unsigned char pinNumber);

void LED_ReadStatus(unsigned char portName, unsigned char PinNumber);

#endif