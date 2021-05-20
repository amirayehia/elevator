#include "led.h"

void LED_Init(unsigned char portName, unsigned char pinNumber, unsigned char state){
    setPINDir(portName,pinNumber,0); //0 = output
}

void LED_TurnOn(unsigned char portName, unsigned char pinNumber){
    Write(portName,pinNumber,1);
}

void LED_TurnOff(unsigned char portName, unsigned char pinNumber){
    Write(portName,pinNumber,0);
}

void LED_Toggle(unsigned char portName, unsigned char pinNumber){
    
}

void LED_ReadStatus(unsigned char portName, unsigned char PinNumber){
    return Read(PinNumber,PinNumber);
}