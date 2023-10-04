int redLED = 6;
int redOn=500;
int redOff=500;

int yellowLED = 9;
int yellowOff=500;
int yellowOn= 500;

int numRedBlink = 1;
int numYellowBlink = 1;

int writeValueYellow;
int writeValueRed;

String redMessage = "The Red LED is blinking";
String yellowMessage = "The yellow LED is blinking";

void setup() {

  // put your setup code here, to run once:
  Serial.begin(9600); //9600 is a baud rate, the rate at which the ports talk to each other
  pinMode(yellowLED, OUTPUT);
  pinMode(redLED, OUTPUT);
  digitalWrite(13, LOW);

  Serial.println("enter value for analog voltage writeValueRed from 0 to 255");
  while(Serial.available()==0){}
  writeValueRed = Serial.parseInt();
  Serial.println(writeValueRed);

  Serial.println("enter value for writeValueYellow from 0 to 255");
  while(Serial.available()==0){}
  writeValueYellow = Serial.parseInt();
  Serial.println(writeValueYellow);
}

void loop() {
  // put your main code here, to run repeatedly:
  
  Serial.println(yellowMessage);
  for(int i=0;i<numRedBlink;i++){
    Serial.print("    you're on yellow blink ");
    Serial.println(i);
    analogWrite(yellowLED, writeValueYellow);
    delay(yellowOn);
    digitalWrite(yellowLED, LOW);
    delay(yellowOff);
  }
  Serial.println(" ");

  Serial.println(redMessage);
  for(int j=0; j<numYellowBlink; j++){
    Serial.print("    you're on red blink");
    Serial.println(j);
    analogWrite(redLED, writeValueRed);
    delay(redOn);
    digitalWrite(redLED, LOW);
    delay(redOff);
  }
  Serial.println(" ");
}
