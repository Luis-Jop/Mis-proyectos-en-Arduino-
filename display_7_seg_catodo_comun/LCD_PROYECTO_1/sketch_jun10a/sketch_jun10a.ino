int amarillo=3;
int verde=2;
int rojo=4;
int tr=3000;
int tv=5000;
int ta=500;


void setup() {
  pinMode(amarillo, OUTPUT);
  pinMode(verde, OUTPUT);
  pinMode(rojo, OUTPUT);
  // put your setup code here, to run once:

}

void loop() {
  digitalWrite(rojo, 1);
  delay(tr);
  digitalWrite(rojo, 0);
  digitalWrite(verde, 1);
  delay(tv);
  digitalWrite(verde, 0);
  digitalWrite(amarillo, 1);
  delay(ta);
  digitalWrite(amarillo, 0);
  delay(ta);
  digitalWrite(amarillo, 1);
  delay(ta);
  digitalWrite(amarillo, 0);
  delay(ta);
  digitalWrite(amarillo, 1);
  delay(ta);
  digitalWrite(amarillo, 0);
  delay(ta);
  
  
  // put your main code here, to run repeatedly:

}
