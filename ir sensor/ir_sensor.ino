int irPin = 2;
int pinLed = 12;


void setup() {
  // put your setup code here, to run once:
  pinMode(irPin, INPUT);
  pinMode(pinLed, OUTPUT);
}

void loop() {
  if (digitalRead(irPin) == LOW)
  {
    digitalWrite(pinLed, HIGH);
  }
  else 
  {
    digitalWrite(pinLed, LOW);
  }

}
