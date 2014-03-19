void setPWM(int pin, int level)
{
    if(pin == 6)       // OCR0A	register
    {
        OCR0A = level;
        TCCR0A |= (1 << COM0A1) | (1 << WGM01) | (1 << WGM00);
        TCCR0B |= (1 << CS00);
    }

    else if(pin == 5)       // OCR0B	register
    {
        OCR0B = level;
        TCCR0A |= (1 << COM0B1) | (1 << WGM01) | (1 << WGM00);
        TCCR0B |= (1 << CS00);
    }

    else if(pin == 11)      // OCR2A	register
    {
        OCR2A = level;
        TCCR2A |= (1 << COM2A1) | (1 << WGM01) | (1 << WGM00);
        TCCR2B |= (1 << CS01);
    }

    else if(pin == 10)      // OCR1B	register
    {
        OCR1B = level;
        TCCR1A |= (1 << COM1B1) | (1 << WGM21) | (1 << WGM20);
        TCCR1B |= (1 << CS20);
    }

    else {}
}

