int luz ;
int t = 50;
void setup() {
  for(luz=0;luz<14;luz++){
  pinMode(luz,OUTPUT); 
  }
}

void loop() {
  for(luz=0;luz<14;luz++){
   
  
  digitalWrite(luz,1);
   delay(t);
   digitalWrite(luz,0);
   delay(t);
  }
}
