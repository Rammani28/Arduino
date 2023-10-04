int yellowLED = 9;
int waitTimeOn = 100;
int waitTimeOff = 50;

void setup() {
  // put your setup code here, to run once:
  pinMode(yellowLED, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(yellowLED, HIGH); //will provide 5 volts to the output pin numberyellowLED
  delay(waitTimeOn);
  digitalWrite(yellowLED, LOW); // will provide 0 volt to pin number numberyellowLED
  delay(waitTimeOff);
  

}
