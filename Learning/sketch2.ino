/* Turn on LED connected to Pin 2 for 1 s. */

void setup()
{
    pinMode(2, OUTPUT);
    digitalWrite(2, HIGH);
    delay(1000);
    digitalWrite(2, LOW);
}

void loop()
{

}
