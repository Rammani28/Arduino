int whiteLED = 5;
int redLED = 3;
int greenLED = 9;
int blueLED = 11;
int yellowLED = 6;

int led1=whiteLED;
int led2=redLED;
int led3=greenLED;
int led4=blueLED;
int led5=yellowLED;


int brightness = 50;
int onTime = 500;
int offTime = 100;

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

  //i = random(n);
    if(i%n==0){
    analogWrite(led1, brightness);
    analogWrite(led2, brightness);
    delay(onTime);
    analogWrite(led1, 0);
    analogWrite(led2, 0);
    delay(offTime);
    }
    else if(i%n==1){
    analogWrite(led2, brightness);
    analogWrite(led3, brightness);
    delay(onTime);
    analogWrite(led2, 0);
    analogWrite(led3, 0);
    delay(offTime);
    }
    else if(i%n==2){
    analogWrite(led3, brightness);
    analogWrite(led4, brightness);
    delay(onTime);
    analogWrite(led3, 0);
    analogWrite(led4, 0);
    delay(offTime);
    }
    else if(i%n==3){
    analogWrite(led4, brightness);
    analogWrite(led5, brightness);
    delay(onTime);
    analogWrite(led4, 0);
    analogWrite(led5, 0);
    delay(offTime);
    }
    else if(i%n==5){
    analogWrite(led5, brightness);
    analogWrite(led1, brightness);
    delay(onTime);
    analogWrite(led5, 0);
    analogWrite(led1, 0);
    delay(offTime);
    }
    i++;
    if(onTime >50 and offTime > 40){
    onTime = onTime -2;
    offTime = offTime -1;
    }
}
