#include <Servo.h>

int valorX = 0; // VARIABLE DE LECTURA DEL EJE X
int valorY = 0; // VARIABLE DE LECTURA DEL EJE Y
int pinJX = A0; // EJE X CONECTADO AL PIN ANALOGICO A0
int pinJY = A1; // EJE Y COENCTADO AL PIN ANALOGIC0 A1

void setup() {
Serial.begin (9600); // ACTIVAR COMUNICACIÓN POR PUERTO SERIE
}

void loop() {
valorX = analogRead ( pinJX); // LECTURA DEL PUERTO ANALOG. A0 DEL EJE X
valorY = analogRead ( pinJY); // LECTURA DEL PUERTO ANALOG. A1 DEL EJE Y

Serial.print ("X: ");
Serial.print (valorX); // MOSTRAR POR PANTALLA LOS VALORES DEL EJE X DE 0 A 1023
Serial.print("\t");
Serial.print ("Y: ");
Serial.println (valorY); // MOSTRAR POR PANTALLA LOS VALORES DEL EJE Y DE 0 A 1023
}
