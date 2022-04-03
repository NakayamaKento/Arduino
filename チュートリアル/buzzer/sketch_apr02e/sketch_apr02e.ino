unsigned int buzzer[8] = {261,293,329,349,391,440,493,523};
unsigned char count = 0;

void setup()
{
    pinMode(3, OUTPUT);
    pinMode(4, INPUT);
}

void loop()
{
    tone(3, buzzer[count]);
    if(digitalRead(4) == 1){
        count++;
        if(count > 7) count = 0;
        while (digitalRead(4) == 1);
    }
}