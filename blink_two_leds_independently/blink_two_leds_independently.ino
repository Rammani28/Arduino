int redLED = 6;
int redOn;
int redOff;

int yellowLED = 9;
int yellowOff;
int yellowOn;

int numRedBlink;
int numYellowBlink;

String redMessage = "The Red LED is blinking";
String yellowMessage = "The yellow LED is blinking";

void setup() {

  // put your setup code here, to run once:
  Serial.begin(9600); //9600 is a baud rate, the rate at which the ports talk to each other
  pinMode(yellowLED, OUTPUT);
  pinMode(redLED, OUTPUT);

  Serial.println("enter value for redOn in ms");
  while(Serial.available()==0){}
  redOn = Serial.parseInt();


  Serial.println("enter value for redOff in ms");
  while(Serial.available()==0){}
  redOff = Serial.parseInt();

  
  Serial.println("enter value for yellowOn in ms");
  while(Serial.available()==0){}
  yellowOn = Serial.parseInt();   
    
  Serial.println("enter value for yellowOff in ms");
  while(Serial.available()==0){}
  yellowOff = Serial.parseInt();   
  
}

void loop() {
  // put your main code here, to run repeatedly:
  
  Serial.println("enter value for numRedBlink: ");
  while(Serial.available()==0){}
  numRedBlink = Serial.parseInt(); //read int from serial input. there are also parseFloat and readString
  
  Serial.println("enter value for numYellowBlink: ");
  while(Serial.available()==0){}
  numYellowBlink = Serial.parseInt();
  
  Serial.println(yellowMessage);
  for(int i=0;i<numRedBlink;i++){
    Serial.print("    you're on yellow blink ");
    Serial.println(i);
    digitalWrite(yellowLED, HIGH);
    delay(yellowOn);
    digitalWrite(yellowLED, LOW);
    delay(yellowOff);
  }
  Serial.println(" ");

  Serial.println(redMessage);
  for(int j=0; j<numYellowBlink; j++){
    Serial.print("    you're on red blink");
    Serial.println(j);
    digitalWrite(redLED, HIGH);
    delay(redOn);
    digitalWrite(redLED, LOW);
    delay(redOff);
  }
  Serial.println(" ");
}
