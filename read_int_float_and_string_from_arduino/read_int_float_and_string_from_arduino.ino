String name;
int age;
float height;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  Serial.println("enter your name: ");
  while(Serial.available()==0){}
  name = Serial.readString();

  Serial.println("enter your age: ");
  while(Serial.available()==0){}
  age = Serial.parseInt();

  Serial.println("enter your height: ");
  while(Serial.available()==0){}
  height = Serial.parseFloat();
}
  
void loop() {
  Serial.print("Hello ");
  Serial.println(name);
  // put your main code here, to run repeatedly:
  delay(250);

}
