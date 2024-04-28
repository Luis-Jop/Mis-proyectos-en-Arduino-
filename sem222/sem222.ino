int  led =  2;
int  led1 = 3;
int   led2 = 4;
void setup() {
 pinMode(2, OUTPUT); 
  pinMode(3, OUTPUT);
   pinMode(4, OUTPUT);

}

void loop() {
for (int i = 0 ; i <=255;i++){
  digitalWrite(2, i);
  delay(5);
}
for (int i = 255; i>= 0; i-- ){
  digitalWrite(2, i);
  delay(2);
}


for (int i = 0 ; i <=255;i++){
  digitalWrite(3, i);
  delay(3);
}
for (int i = 255; i>= 0; i-- ){
  digitalWrite(3, i);
  delay(2);
}


for (int i = 0 ; i <=255;i++){
  digitalWrite(4, i);
  delay(7);
}
for (int i = 255; i>= 0; i-- ){
  digitalWrite(4, i);
  delay(2);
}


}
