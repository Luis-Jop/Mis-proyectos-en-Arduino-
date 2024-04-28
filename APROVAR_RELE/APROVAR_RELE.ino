byte rele = 13 ;
byte pin = 3 ;


void setup() {
pinMode(rele,OUTPUT); 
pinMode(3, OUTPUT);
}

void loop() {
 digitalWrite(rele, HIGH);
 delay(1000);
 digitalWrite(rele, LOW);
 delay(500);

}
