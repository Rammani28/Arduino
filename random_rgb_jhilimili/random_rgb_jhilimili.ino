int whiteLED = 5;
int redLED = 3;
int greenLED = 9;
int blueLED = 11;
int yellowLED = 6;


int brightness = 100;
int onTime = 200;
int n1=200;
int n2=200; 

void setup() {
  // put your setup code here, to run once:
  pinMode(redLED, INPUT);
  pinMode(greenLED, INPUT);
  pinMode(blueLED, INPUT);

}

int i=0;
int n=5;
void loop() {
    // put your main code here, to run repeatedly:

  i = random(n);
  if(i%n==1){
    analogWrite(redLED, brightness);
    delay(random(n1, n2));
    analogWrite(redLED, 0);
    }
  else if(i%n==2){
    analogWrite(greenLED, brightness);
    delay(random(n1, n2));
    analogWrite(greenLED, 0);
    }
    else if(i%n==3){
    analogWrite(blueLED, brightness);
    delay(random(n1, n2));
    analogWrite(blueLED, 0);
    }
    else if(i%n==4){
    analogWrite(yellowLED, brightness*2);
    delay(random(n1, n2));
    analogWrite(yellowLED, 0);
    //delay();
    }
  else{
    analogWrite(whiteLED, brightness);
    delay(random(n1, n2));
    analogWrite(whiteLED, 0);
    }
    i++;
}
