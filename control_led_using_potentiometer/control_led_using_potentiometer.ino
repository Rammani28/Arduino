int potPin=A0;
int LEDpin = 5;
float analogVoltage;

void setup() {
  // put your setup code here, to run once:
  pinMode(LEDpin, OUTPUT);
  pinMode(potPin, INPUT);
  Serial.begin(9600);
  
}

void loop() {
  // put your main code here, to run repeatedly:
  analogVoltage = analogRead(potPin);
  analogWrite(LEDpin, analogVoltage/1023*255);
  Serial.println(analogVoltage/204.6);  // 1023/5=204.6
  delay(250);
}
