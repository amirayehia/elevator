#include "REG51.H"
#include "control.h"
#include "port.h"

void SetPINDir(unsigned char portName, unsigned char pinNumber, unsigned char direction){
    switch (portName){
        case '0':
            if (direction == '0'){
                CLR_BIT(P0, pinNumber);
            }
            else{
                SET_BIT(P0, pinNumber);
            }
            break;
        case '1':
            if (direction == '0'){
                CLR_BIT(P1, pinNumber);
            }
            else{
                SET_BIT(P1, pinNumber);
            }
            break;
        case '2':
            if (direction == '0'){
                CLR_BIT(P2, pinNumber);
            }
            else{
                SET_BIT(P2, pinNumber);
            }
            break;
        case '3':
            if (direction == '0'){
                CLR_BIT(P3, pinNumber);
            }
            else{
                SET_BIT(P3, pinNumber);
            }
            break;
        default:
            break;
    }
}
unsigned char Read(unsigned char portName, unsigned char pinNumber){
    unsigned char return_value = 0;
    switch (portName){
        case '0':
            return_value = READ_BIT(P0,pinNumber);
            break;
        case '1':
            return_value = READ_BIT(P1,pinNumber);
            break;  
        case '2':
            return_value = READ_BIT(P2,pinNumber);
            break;  
        case '3':
            return_value = READ_BIT(P3,pinNumber);
            break;
        default:
            break;
    }
    return return_value;
}

void Write(unsigned char portName, unsigned char pinNumber, unsigned char value){
    switch (portName){
        case '0':
            if(value == 1){
                SET_BIT(P0,pinNumber);
            }
            else{
                CLR_BIT(P0,pinNumber);
            }
            break;
        case '1':
            if(value == 1){
                SET_BIT(P1,pinNumber);
            }
            else{
                CLR_BIT(P1,pinNumber);
            }
            break;
        case '2':
            if(value == 1){
                SET_BIT(P2,pinNumber);
            }
            else{
                CLR_BIT(P2,pinNumber);
            }
            break;
        case '3':
            if(value == 1){
                SET_BIT(P3,pinNumber);
            }
            else{
                CLR_BIT(P3,pinNumber);
            }
            break;
        default:
            break;
    }
}

void Toggle(unsigned char portName, unsigned char pinNumber){
    switch (portName)
    {
    case '0':
        TOG_BIT(P0,pinNumber);
        break;
    case '1':
        TOG_BIT(P1,pinNumber);
        break;
    case '2':
        TOG_BIT(P2,pinNumber);
        break;
    case '3':
        TOG_BIT(P3,pinNumber);
        break;
    default:
        break;
    }
}