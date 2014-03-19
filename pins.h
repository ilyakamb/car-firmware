//****************INPUT PINS*************
#define D0_In DDRD &=B11111110
#define D1_In DDRD &=B11111101
#define D2_In DDRD &=B11111011
#define D3_In DDRD &=B11110111
#define D4_In DDRD &=B11101111
#define D5_In DDRD &=B11011111
#define D6_In DDRD &=B10111111
#define D7_In DDRD &=B01111111

#define D8_In DDRB &= B11111110
#define D9_In DDRB &= B11111101
#define D10_In DDRB &=B11111011
#define D11_In DDRB &=B11110111
#define D12_In DDRB &=B11101111
#define D13_In DDRB &=B11011111

#define D14_In DDRC &=B11111110
#define D15_In DDRC &=B11111101
#define D16_In DDRC &=B11111011
#define D17_In DDRC &=B11110111
#define D18_In DDRC &=B11101111
#define D19_In DDRC &=B11011111

//***************Output Pins*************
#define MotorA0 DDRD |=B00010000
#define MotorA1 DDRD |=B00100000
#define MotorB0 DDRD |=B01000000
#define MotorB1 DDRD |=B10000000

#define D0_Out DDRD |=B00000001
#define D1_Out DDRD |=B00000010
#define D2_Out DDRD |=B00000100
#define D3_Out DDRD |=B00001000
#define D4_Out DDRD |=B00010000
#define D5_Out DDRD |=B00100000
#define D6_Out DDRD |=B01000000
#define D7_Out DDRD |=B10000000

#define D8_Out DDRB |= B00000001
#define D9_Out DDRB |= B00000010
#define D10_Out DDRB |=B00000100
#define D11_Out DDRB |=B10001000
#define D12_Out DDRB |=B00010000
#define D13_Out DDRB |=B00100000

#define D14_Out DDRC |=B00000001
#define D15_Out DDRC |=B00000010
#define D16_Out DDRC |=B00000100
#define D17_Out DDRC |=B00001000
#define D18_Out DDRC |=B00010000
#define D19_Out DDRC |=B00100000

//***************Status High Pins*************
#define D0_High PORTD |=B00000001
#define D1_High PORTD |=B00000010
#define D2_High PORTD |=B00000100
#define D3_High PORTD |=B00001000
#define D4_High PORTD |=B00010000
#define D5_High PORTD |=B00100000
#define D6_High PORTD |=B01000000
#define D7_High PORTD |=B10000000

#define D8_High PORTB |=B00000001
#define D9_High PORTB |=B00000010
#define D10_High PORTB|=B00000100
#define D11_High PORTB|=B00001000
#define D12_High PORTB|=B00010000
#define D13_High PORTB|=B00100000

#define D14_High PORTC |=B00000001
#define D15_High PORTC |=B00000010
#define D16_High PORTC |=B00000100
#define D17_High PORTC |=B00001000
#define D18_High PORTC |=B00010000
#define D19_High PORTC |=B00100000

//***************Status Low Pins*************
#define D0_Low PORTD &= B11111110
#define D1_Low PORTD &= B11111101
#define D2_Low PORTD &= B11111011
#define D3_Low PORTD &= B11110111
#define D4_Low PORTD &= B11101111
#define D5_Low PORTD &= B11011111
#define D6_Low PORTD &= B10111111
#define D7_Low PORTD &= B01111111

#define D8_Low PORTB &= B11111110
#define D9_Low PORTB &= B11111101
#define D10_Low PORTB &=B11111011
#define D11_Low PORTB &=B11110111
#define D12_Low PORTB &=B11101111
#define D13_Low PORTB &=B11011111

#define D14_Low PORTC &= B11111110
#define D15_Low PORTC &= B11111101
#define D16_Low PORTC &= B11111011
#define D17_Low PORTC &= B11110111
#define D18_Low PORTC &= B11101111
#define D19_Low PORTC &= B11011111

//**************Invert Status Pins*************
#define D0_Inv PORTD ^=B00000001
#define D1_Inv PORTD ^=B00000010
#define D2_Inv PORTD ^=B00000100
#define D3_Inv PORTD ^=B00001000
#define D4_Inv PORTD ^=B00010000
#define D5_Inv PORTD ^=B00100000
#define D6_Inv PORTD ^=B01000000
#define D7_Inv PORTD ^=B10000000

#define D8_Inv PORTB ^=B00000001
#define D9_Inv PORTB ^=B00000010
#define D10_Inv PORTB^=B00000100
#define D11_Inv PORTB^=B00001000
#define D12_Inv PORTB^=B00010000
#define D13_Inv PORTB^=B00100000

#define D14_Inv PORTC ^=B00000001
#define D15_Inv PORTC ^=B00000010
#define D16_Inv PORTC ^=B00000100
#define D17_Inv PORTC ^=B00001000
#define D18_Inv PORTC ^=B00010000
#define D19_Inv PORTC ^=B00100000

//**************READ Status Pins*************
#define D0_Read (PIND & B00000001)
#define D1_Read ((PIND & B00000010)>>1)
#define D2_Read ((PIND & B00000100)>>2)
#define D3_Read ((PIND & B00001000)>>3)
#define D4_Read ((PIND & B00010000)>>4)
#define D5_Read ((PIND & B00100000)>>5)
#define D6_Read ((PIND & B01000000)>>6)
#define D7_Read ((PIND & B10000000)>>7)

#define D8_Read (PINB & B00000001)
#define D9_Read ((PINB & B00000010)>>1)
#define D10_Read ((PINB & B00000100)>>2)
#define D11_Read ((PINB & B00001000)>>3)
#define D12_Read ((PINB & B00010000)>>4)
#define D13_Read ((PINB & B00100000)>>5)

#define D14_Read (PINC & B00000001)
#define D15_Read ((PINC & B00000010)>>1)
#define D16_Read ((PINC & B00000100)>>2)
#define D17_Read ((PINC & B00001000)>>3)
#define D18_Read ((PINC & B00010000)>>4)
#define D19_Read ((PINC & B00100000)>>5)

//**************Analog READ*******************
#define A0_Read (AnRead(B01000000))
#define A1_Read (AnRead(B01000001))
#define A2_Read (AnRead(B01000010))
#define A3_Read (AnRead(B01000011))
#define A4_Read (AnRead(B01000100))
#define A5_Read (AnRead(B01000101))
#define A6_Read (AnRead(B01000110))
#define A7_Read (AnRead(B01000111))

uint16_t AnRead(uint8_t An_pin)
{
  ADMUX=An_pin;
  _delay_us(10);
  ADCSRA=B11000110;	//B11000111-125kHz B11000110-250kHz
  while (ADCSRA & (1 << ADSC));
  An_pin = ADCL;
  uint16_t An = ADCH;
  return (An<<8) + An_pin;
}

void pinOut(int pin) {
  if(pin == 1) D1_Out;
  else if(pin == 2) D2_Out;
  else if(pin == 3) D3_Out;
  else if(pin == 4) D4_Out;
  else if(pin == 5) D5_Out;
  else if(pin == 6) D6_Out;
  else if(pin == 7) D7_Out;
  else if(pin == 8) D8_Out;
  else if(pin == 9) D9_Out;
  else if(pin == 10) D10_Out;
  else if(pin == 11) D11_Out;
  else if(pin == 12) D12_Out;
  else if(pin == 13) D13_Out;
  else if(pin == 14) D14_Out;
  else if(pin == 15) D15_Out;
  else if(pin == 16) D16_Out;
  else if(pin == 17) D17_Out;
  else if(pin == 18) D18_Out;
  else if(pin == 19) D19_Out;
}

void pinIn(int pin) {
  if(pin == 1) D1_In;
  else if(pin == 2) D2_In;
  else if(pin == 3) D3_In;
  else if(pin == 4) D4_In;
  else if(pin == 5) D5_In;
  else if(pin == 6) D6_In;
  else if(pin == 7) D7_In;
  else if(pin == 8) D8_In;
  else if(pin == 9) D9_In;
  else if(pin == 10) D10_In;
  else if(pin == 11) D11_In;
  else if(pin == 12) D12_In;
  else if(pin == 13) D13_In;
  else if(pin == 14) D14_In;
  else if(pin == 15) D15_In;
  else if(pin == 16) D16_In;
  else if(pin == 17) D17_In;
  else if(pin == 18) D18_In;
  else if(pin == 19) D19_In;
}

void pinHigh(int pin) {
  if(pin == 1) D1_High;
  else if(pin == 2) D2_High;
  else if(pin == 3) D3_High;
  else if(pin == 4) D4_High;
  else if(pin == 5) D5_High;
  else if(pin == 6) D6_High;
  else if(pin == 7) D7_High;
  else if(pin == 8) D8_High;
  else if(pin == 9) D9_High;
  else if(pin == 10) D10_High;
  else if(pin == 11) D11_High;
  else if(pin == 12) D12_High;
  else if(pin == 13) D13_High;
  else if(pin == 14) D14_High;
  else if(pin == 15) D15_High;
  else if(pin == 16) D16_High;
  else if(pin == 17) D17_High;
  else if(pin == 18) D18_High;
  else if(pin == 19) D19_High;
}

void pinLow(int pin) {
  if(pin == 1) D1_Low;
  else if(pin == 2) D2_Low;
  else if(pin == 3) D3_Low;
  else if(pin == 4) D4_Low;
  else if(pin == 5) D5_Low;
  else if(pin == 6) D6_Low;
  else if(pin == 7) D7_Low;
  else if(pin == 8) D8_Low;
  else if(pin == 9) D9_Low;
  else if(pin == 10) D10_Low;
  else if(pin == 11) D11_Low;
  else if(pin == 12) D12_Low;
  else if(pin == 13) D13_Low;
  else if(pin == 14) D14_Low;
  else if(pin == 15) D15_Low;
  else if(pin == 16) D16_Low;
  else if(pin == 17) D17_Low;
  else if(pin == 18) D18_Low;
  else if(pin == 19) D19_Low;
}
