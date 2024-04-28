int luz ;
int t = 100;
void setup() {

                      //izquierda a derecha
  for(luz=11;luz>=0;luz--){
  pinMode(luz,OUTPUT); 
 
  }
                   //derecha a izquerda
   for(luz=0;luz<=11;luz++){
  pinMode(luz,OUTPUT); 
  }
                        //del medio al final
    for(luz=5;luz <= 11; luz++) {
   pinMode(luz, OUTPUT);
 
  }
                     //del medio al rpincipio 
    for(luz=5;luz >= 0; luz--) {
    pinMode(luz, OUTPUT);
   }
}

void loop() {
                    //del final al inicio
  for(luz=11;luz>=0;luz--){
   
  
  digitalWrite(luz,1);
   delay(t);
   digitalWrite(luz,0);
   delay(t);
  }
                     //del inicio al final 
    for(luz=0;luz<=11;luz++){
   
  
  digitalWrite(luz,1);
   delay(t);
   digitalWrite(luz,0);
   delay(t);
  }

                    //del centro al final
    for(luz=5;luz<=11;luz++) {
   
  
  digitalWrite(luz,1);
   delay(t);
   digitalWrite(luz,0);
   delay(t);
  
  }
                    //del centro al principio
   for (luz=5;luz >= 0; luz--){
    digitalWrite(luz,1);
   delay(t);
   digitalWrite(luz,0);
   delay(t);
   }
   
}
