int  led =  18;
int  led1 = 19;
int   led2 = 21;
void setup() {
 pinMode(18, OUTPUT); 
  pinMode(19, OUTPUT);
   pinMode(21, OUTPUT);

}

void loop() {
for (int i = 0 ; i <=255;i++){
  digitalWrite(18, i);
  delay(2);
}
for (int i = 255; i>= 0; i-- ){
  digitalWrite(18, i);
  delay(2);
}


for (int i = 0 ; i <=255;i++){
  digitalWrite(19, i);
  delay(2);
}
for (int i = 255; i>= 0; i-- ){
  digitalWrite(19, i);
  delay(2);
}


for (int i = 0 ; i <=255;i++){
  digitalWrite(21, i);
  delay(2);
}
for (int i = 255; i>= 0; i-- ){
  digitalWrite(21, i);
  delay(2);
}

}
