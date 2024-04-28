#include <IRremote.hpp>
#define boton_1  0x64BC2718
#define boton_2  0x49B0F626
#define boton_3  0xFFFFFFFF



int sensor = 11;
IRrecv irrecv(sensor);
decode_results codigo;

int ledrojo = 2;
int ledverde = 3;
int ledazul = 4;
void setup() {
 Serial. begin(9600);
 irrecv.enableIRIn();
 pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
   pinMode(4 ,OUTPUT);

}

void loop() {
 if (irrecv.decode(&codigo)){
  Serial.println(codigo.value, HEX);
  
  if(codigo. value == boton_1)
  digitalWrite(ledrojo, !digitalRead(ledrojo));
  
  if(codigo. value ==  boton_2)
  digitalWrite(ledverde, !digitalRead(ledverde));

 if (codigo. value ==  boton_3)
  digitalWrite(ledazul, !digitalRead(ledazul));
 
  
  irrecv.resume();
 }
delay(100);
}
