void setPWM(int pin, int level)
{

    if(pin == 6)       // OCR0A
    {
        OCR0A = level;
        if(level == 0) TCCR0A |= (1 << COM0A1);
        else TCCR0A |= (1 << COM0A1) | (1 << WGM01) | (1 << WGM00);
        TCCR0B |= (1 << CS00);
    }

    else if(pin == 5)       // OCR0B
    {
        OCR0B = level;
        if(level == 0) TCCR0A |= (1 << COM0B1);
        else TCCR0A |= (1 << COM0B1) | (1 << WGM01) | (1 << WGM00);
        TCCR0B |= (1 << CS00);
    }

    else if(pin == 9)      // OCR1A
    {
        OCR1A = level;
        if(level == 0) TCCR1A &= ~(1 << COM1A1);
        else TCCR1A |= (1 << COM1A1) | (1 << WGM01) | (1 << WGM00);
        TCCR1B |= (1 << CS10);
    }

    else if(pin == 10)      // OCR1B
    {
        OCR1B = level;
        if(level == 0) TCCR1A &= ~(1 << COM1B1);
        else TCCR1A |= (1 << COM1B1) | (1 << WGM01) | (1 << WGM00);
        TCCR1B |= (1 << CS10);
    }

    else if(pin == 11)      // OCR2A
    {
        OCR2A = level;
        if(level == 0) TCCR2A &= ~(1 << COM2A1);
        else TCCR2A |= (1 << COM2A1) | (1 << WGM21) | (1 << WGM20);
        TCCR2B |= (1 << CS20);
    }

    else if(pin == 3)      // OCR2B
    {
        OCR2B = level;
        if(level == 0) TCCR2A &= ~(1 << COM2B1);
        else TCCR2A |= (1 << COM2B1) | (1 << WGM21) | (1 << WGM20);
        TCCR2B |= (1 << CS20);
    }

    else {}
}

