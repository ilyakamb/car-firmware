#define USART_BAUDRATE 9600
#define UBRR_VALUE (((F_CPU / (USART_BAUDRATE * 16UL))) - 1)

void USART0Init(void)
{
	UBRR0H = (uint8_t)(UBRR_VALUE>>8);		//Set BAUD Rate
	UBRR0L = (uint8_t)UBRR_VALUE;
	UCSR0C |= (1<<UCSZ01)|(1<<UCSZ00);		//Set frame format to 8 data bits, no parity, 1 stop bit
	UCSR0B |= (1<<RXEN0)|(1<<TXEN0);		//Enable transmission and reception
}

void USART0SendByte(uint8_t u8Data)
{
	while(!(UCSR0A&(1<<UDRE0))){};			//Wait while previous byte is completed
	UDR0 = u8Data;					//Transmit data
}

uint8_t USART0ReceiveByte()
{
	while(!(UCSR0A&(1<<RXC0))){};			//Wait for byte to be received
	return UDR0;					//Return received data
}
