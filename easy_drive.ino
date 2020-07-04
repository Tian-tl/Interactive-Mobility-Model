int smDirectionPin = 2; //Direction pin
int smStepPin = 3; //Stepper pin
int fingerPin= 5;
int DIR= 0; 
int a=0;
int b=0;
int c=0;
void setup(){
  /*Sets all pin to output; the microcontroller will send them(the pins) bits, it will not expect to receive any bits from thiese pins.*/
  pinMode(smDirectionPin, OUTPUT);
  pinMode(smStepPin, OUTPUT);
  pinMode(fingerPin,INPUT);
 
  Serial.begin(9600);
}
 
void loop(){
  b=a;  
  a = digitalRead(fingerPin);
  if ((a-b)==1){
    c++;
  }
  if(c%4==0){
    DIR=0;
   }
   if( c%4==1){
    DIR=1;
   }
    if( c%4==2){
    DIR=0;
   }
    if( c%4==3){
    DIR=2;
   }
   climb(DIR);
 Serial.print("a=");
 Serial.print(a);
 Serial.print("\n");
 Serial.print("c=");
 Serial.print(c);
 Serial.print("\n");
 Serial.print("DIR=");
 Serial.print(DIR);
  Serial.print("\n\n");
 //delay(100);
}
