#ifndef _CONTROL_H_
#define _CONTROL_H_

void SetPINDir(unsigned char portName, unsigned char pinNumber, unsigned char direction);

unsigned char Read(unsigned char portName, unsigned char pinNumber);

void Write(unsigned char portName, unsigned char pinNumber, unsigned char value);

void Toggle(unsigned char portName, unsigned char pinNumber);

#endif