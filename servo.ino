#include <Servo.h>
int a=0;
int b=0;
int c=0;
int p=180;
int cl=1;
Servo myservo;
void setup() {
  pinMode(5,INPUT);
  myservo.attach(9);
  myservo.write(p);
  delay(1000);// put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  b=a;
  a=digitalRead(5);
  if ((a-b)==1){
    c++;
  }
 Serial.println(cl);
 Serial.println(p);
 Serial.println(a);
 delay(1000);
 if (p>180){
  p=180;
 }
 if(p<40){
  p=40;
 }
 if (p==180){
  cl=1;
 }
 if (p==40){
  cl=0;
 }
 if (cl==1){
   if (a==1){
    p-=2;
    myservo.write(p);
    delay(100);
   }
 }
 if(cl==0){
  if(a==1){
    p+=2;
    myservo.write(p);
    delay(100);
  }
 }

}
