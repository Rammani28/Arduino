int potPin=A0;
int readValue;

void setup() {
  // put your setup code here, to run once:
  pinMode(potPin, INPUT);
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
  readValue = analogRead(potPin);
  Serial.println(readValue);
  delay(250);

}
