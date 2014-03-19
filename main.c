#include <avr/io.h>
#include <util/delay.h>
#include "binary.h"
#include "pins.h"
#include "uart.c"
#include "PWMlib.h"

int main(void)
{

    D5_Out;		// Set motor pins mode to 'output'
    D6_Out;
    D10_Out;
    D11_Out;

    D13_Out;

    int buffer;						// We receive a char from UART, the command name:
    char result;					// 'r' -> rigth two motors, forward
							// 'l' -> left two motors, forward
    USART0Init(); // Initialize	UART 	//	|----->	// 'q' -> right two motors, backward			
					//	|	// 'm' -> left two motors, backward
start: ;				//	|	// 'f' -> lights
					//	|
    result = USART0ReceiveByte(); //------------|							
							
        if(result=='r')					
        {						
            buffer = USART0ReceiveByte();			// Receive parameter, speed [0:9] for motors
            buffer = (int) buffer -48;			
            setPWM(6,0);
            if(buffer == 0){ setPWM(5,0); }
            else if(buffer == 9){ setPWM(5, 255); }
            else { setPWM(5, buffer*28); }
        }

        else if(result=='l')
        {
            buffer = USART0ReceiveByte();			// Receive parameter, speed [0:9] for motors
            buffer = (int) buffer -48;
            setPWM(11,0);					
            if(buffer == 0){ setPWM(10,0); }
            else if(buffer == 9){ setPWM(10, 255);  }
            else { setPWM(10,buffer*28); }
        }

        else if(result=='q')
        {
            buffer = USART0ReceiveByte();			// Receive parameter, speed [0:9] for motors
            buffer = (int) buffer -48;
            setPWM(5,0);
            if(buffer == 0){ setPWM(6, 0); }
            else if(buffer == 9){ setPWM(6, 255); }
            else { setPWM(6, buffer*28); }
        }

        else if(result=='m')					// Receive parameter, speed [0:9] for motors
        {
            buffer = USART0ReceiveByte();
            buffer = (int) buffer -48;
            setPWM(10,0);
            if(buffer == 0){ setPWM(11, 0); }
            else if(buffer == 9){ setPWM(11, 255); }
            else { setPWM(11, buffer*28); }
        }

        else if(result=='f')
	{
	    buffer = USART0ReceiveByte();			// Receive parameter for lights
            buffer = (int) buffer -48;				// '0' -> Off
            if(buffer == 0){ D13_Low; }				// '1' -> On
            else { D13_High; }
	}

goto start;

    return 0;
}
