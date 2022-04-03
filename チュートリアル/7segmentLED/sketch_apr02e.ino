unsigned char data[10][7] = {
    {1,1,1,1,1,1,0}, //0
    {1,0,1,0,0,0,0}, //1
    {1,1,0,1,1,0,1}, //2
    {1,1,1,1,0,0,1}, //3
    {1,0,1,0,0,1,1}, //4
    {0,1,1,1,0,1,1}, //5
    {0,1,1,1,1,1,1}, //6
    {1,1,1,0,0,0,0}, //7
    {1,1,1,1,1,1,1}, //8
    {1,1,1,1,0,1,1} //9
};

void setup()
{
    pinMode(2, OUTPUT); //a
    pinMode(3, OUTPUT); //b
    pinMode(4, OUTPUT); //c
    pinMode(5, OUTPUT); //d
    pinMode(6, OUTPUT); //e
    pinMode(7, OUTPUT); //f
    pinMode(8, OUTPUT); //g
}

void loop()
{
    int i = 0;
    int j = 0;

    for (i = 0; i < 10; i++){
        for (j = 0; j < 7; j++){
            digitalWrite((j+2), data[i][j]);
        }
        delay(1000);
    }
}