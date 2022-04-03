int AD_data = 0;

void setup()
{
    pinMode(3, OUTPUT);
}

void loop()
{
    AD_data = analogRead(0); /* A/D 変換 */

    digitalWrite(3, HIGH);
    delay(AD_data);

    degitalWrite(3, LOW);
    delay(AD_data);
}