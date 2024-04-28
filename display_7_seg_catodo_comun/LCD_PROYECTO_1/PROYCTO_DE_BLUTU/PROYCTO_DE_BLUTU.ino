int estado = 0;
byte rele = 8;




void setup() {
  Serial.begin(9600);

  
  pinMode(8, OUTPUT);

}

void loop() {
 if(Serial.available()>0){
  estado = Serial.read();
 }
 if (estado == 'a'){
  digitalWrite(8, HIGH);
 }

  if (estado == 'b'){
    digitalWrite(8, LOW);
  }

}
