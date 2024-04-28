//proyecto de semaforo de luis

//SELECCION DE VARIABLES 
int rojo=2;
int amarillo=4;
int verde=7;

void setup() {
  //SELECCION DE ENTRADAS O SI SON DE SALIDA 
 pinMode(verde,OUTPUT);
 pinMode(amarillo,OUTPUT);
 pinMode(rojo,OUTPUT);

}
//ESTO ES EL BUCLE DE LAS LED 
void loop() {
  //---------------ROJO---------------------
 digitalWrite(rojo,HIGH);
 delay(5000);
 digitalWrite(rojo,LOW);
 delay(500);

  digitalWrite(rojo,HIGH);
 delay(500);
 digitalWrite(rojo,LOW);
 delay(500);

 digitalWrite(rojo,HIGH);
 delay(500);
 digitalWrite(rojo,LOW);
 delay(500);
 //-----------AMARILLO-----------
 digitalWrite(amarillo,HIGH);
 delay(3000);
 digitalWrite(amarillo,LOW);
 delay(500);

 digitalWrite(amarillo,HIGH);
 delay(500);
 digitalWrite(amarillo,LOW);
 delay(500);

 digitalWrite(amarillo,HIGH);
 delay(500);
 digitalWrite(amarillo,LOW);
 delay(500);

 digitalWrite(verde,HIGH);
 delay(6000);
 digitalWrite(verde,LOW);
 delay(500);
//----------VERDE---------
digitalWrite(verde,HIGH);
 delay(500);
 digitalWrite(verde,LOW);
 delay(500);

 digitalWrite(verde,HIGH);
 delay(500);
 digitalWrite(verde,LOW);
 delay(500);

  digitalWrite(verde,HIGH);
 delay(500);
 digitalWrite(verde,LOW);
 delay(500);
 
}
