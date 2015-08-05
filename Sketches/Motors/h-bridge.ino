int motor1Pin1 = 3;         // pin 2 on L293D
int motor1Pin2 = 4;         // pin 7 on L293D
int motor1EnablePin = 9;    // pin 1 on L293D
int motor2Pin1 = 6;         // pin 15 on L293D
int motor2Pin2 = 7;         // pin 10 on L293D
int motor2EnablePin = 10;   // pin 16 on L293D

void setup() {
  pinMode(motor1Pin1, OUTPUT);
  pinMode(motor1Pin2, OUTPUT);
  pinMode(motor1EnablePin, OUTPUT);
  pinMode(motor2Pin1, OUTPUT);
  pinMode(motor2Pin2, OUTPUT);
  pinMode(motor2EnablePin, OUTPUT);

  // set enablePin high so that motor can turn on:
  digitalWrite(motor1EnablePin, HIGH);
  digitalWrite(motor2EnablePin, HIGH);
}

void loop() {
  // if the switch is high, motor will turn on one direction
  digitalWrite(motor1Pin1, LOW);
  digitalWrite(motor1Pin2, HIGH);
  digitalWrite(motor2Pin1, LOW);
  digitalWrite(motor2Pin2, HIGH);
  delay(2000);
  // if the switch is low, motor will turn in the opposite direction
  digitalWrite(motor1Pin1, HIGH);
  digitalWrite(motor1Pin2, LOW);
  digitalWrite(motor2Pin1, HIGH);
  digitalWrite(motor2Pin2, LOW);
  delay(2000);
}
