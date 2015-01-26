/* Joystick LEDs */

int joyPin1 = 0;
int joyPin2 = 1;
int ledN = 2;
int ledNE = 3;
int ledE = 4;
int ledSE = 5;
int ledS = 6;
int ledSW = 7;
int ledW = 8;
int ledNW = 9;
int xpos = 0;
int ypos = 0;

void setup()
{
  Serial.begin(9600);
  pinMode(ledN, OUTPUT);
  pinMode(ledNE, OUTPUT);
  pinMode(ledE, OUTPUT);
  pinMode(ledSE, OUTPUT);
  pinMode(ledS, OUTPUT);
  pinMode(ledSW, OUTPUT);
  pinMode(ledW, OUTPUT);
  pinMode(ledNW, OUTPUT);
}

int treatValue(int data)
{
  return (data * 9 / 1024) + 48;
}

void loop()
{
  xpos = treatValue(analogRead(joyPin1));
  delay(100);
  ypos = treatValue(analogRead(joyPin2));
  resetLEDs();
  setLEDs();
}

void resetLEDs()
{
  digitalWrite(ledN, LOW);
  digitalWrite(ledNE, LOW);
  digitalWrite(ledE, LOW);
  digitalWrite(ledSE, LOW);
  digitalWrite(ledS, LOW);
  digitalWrite(ledSW, LOW);
  digitalWrite(ledW, LOW);
  digitalWrite(ledNW, LOW);
}

void setLEDs()
{
  Serial.print(xpos);
  Serial.println(" x");
  Serial.print(ypos);
  Serial.println(" y");

  if (xpos == 52 && ypos == 52) {
    Serial.println("NEUTRAL");
    return;
  }

  // N
  if (ypos < 52 && xpos >= 50 && xpos <= 54) {
    Serial.println("N");
    digitalWrite(ledN, HIGH);
  }

  // NE
  if (ypos < 52 && xpos >= 53 && xpos <= 56) {
    Serial.println("NE");
    digitalWrite(ledNE, HIGH);
  }

  // E
  if (xpos > 52 && ypos >= 50 && ypos <= 54) {
    Serial.println("E");
    digitalWrite(ledE, HIGH);
  }

  // SE
  if (ypos > 52 && xpos >= 53 && xpos <= 56) {
    Serial.println("SE");
    digitalWrite(ledSE, HIGH);
  }

  // S
  if (ypos > 52 && xpos >= 50 && xpos <= 54) {
    Serial.println("S");
    digitalWrite(ledS, HIGH);
  }

  // SW
  if (ypos > 52 && xpos >= 48 && xpos <= 51) {
    Serial.println("SW");
    digitalWrite(ledSW, HIGH);
  }

  // W
  if (xpos < 52 && ypos >= 50 && ypos <= 54) {
    Serial.println("W");
    digitalWrite(ledW, HIGH);
  }

  // NW
  if (ypos < 52 && xpos >= 48 && xpos <= 51) {
    Serial.println("NW");
    digitalWrite(ledNW, HIGH);
  }
}
