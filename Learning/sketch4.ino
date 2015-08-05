void setup()
{
    Serial.begin(9600);
}

void loop()
{
    while (digitalRead(3) == HIGH);
    Serial.println("Somebody closed the switch!");
    while (digitalRead(3) == LOW);
    Serial.println("The switch is now open!");
}
