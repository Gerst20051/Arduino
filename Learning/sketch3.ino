/*-------------------------------------------
Flash LED connected to Pin 2 at 1 Hz forever.
--------------------------------------------*/

void setup() // one-time actions
{
    pinMode(2, OUTPUT); // define pin 2 as an output
}

void loop() // loop forever
{
    digitalWrite(2, HIGH); // pin 2 high (LED on)
    delay(500); // wait 500 ms
    digitalWrite(2, LOW); // pin 2 low (LED off)
    delay(500); // wait 500 ms
}
