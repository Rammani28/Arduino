  int trigPin = 13;
  int echoPin = 11;
  float pingTime;
  float speedOfSound;
  float distance = 0.170000; //in meter

void setup() {
 // put your setup code here, to run once:
 pinMode(trigPin, OUTPUT);
 pinMode(echoPin, INPUT);
 Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2000); //we need to pause to let signal settle
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10); //pause with trigger pin HIGH for 10 microseconds
  digitalWrite(trigPin, LOW);

  pingTime = pulseIn(echoPin, HIGH); //ping travel time in microseconds

  speedOfSound = (2*distance)/pingTime*1000000; //meter per sec
  Serial.print("The speed of sound is: ");
  Serial.print(speedOfSound);
  Serial.print(" m/s ");
  Serial.println();
  delay(750);
}

//output was usually 337 m/s to 345 m/s for the distance of 17 cm
