void climb(int x,int a){
    if( x==1&a==1){
    //delay(100);
    digitalWrite(smDirectionPin, HIGH); //Writes the direction to the EasyDriver DIR pin. (HIGH is clockwise).
   
  /*Slowly turns the motor 1600 steps*/
  for(int i=0;i<1600;i++){
    digitalWrite(smStepPin, HIGH);
    delayMicroseconds(100);
    digitalWrite(smStepPin, LOW);
    delayMicroseconds(100);
  }
   }
  //delay(1000); //Pauses for a second (the motor does not need to pause between switching direction, so you can safely remove this)
 
  if(x==2&a==1){
   // delay(100);
    digitalWrite(smDirectionPin, LOW); //Writes the direction to the EasyDriver DIR pin. (LOW is counter clockwise).
  
  /*Turns the motor fast 1600 steps*/
  for(int i=0;i<1600;i++){
    digitalWrite(smStepPin, HIGH);
    delayMicroseconds(100);
    digitalWrite(smStepPin, LOW);
    delayMicroseconds(100);
  }
 
  //delay(1000);
}
if(x==0){
  //delay(100);
}
}

