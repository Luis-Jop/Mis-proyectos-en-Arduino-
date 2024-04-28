#include <SoftwareSerial.h>

SoftwareSerial miBT(10,11);// INSTANCIA LA CONEXION AL BLUTU PIN 10 A TX Y PIN 11 A RX

char NOMBRE[21] = "D2Mgicos"; //NOMBRE DE 20 CARACTERES
char BPS        = '4';  // 1=1200,  2 = 2400, 3=4800, 4=9600, 5=19200, 6=38400, 7=57600, 8=115200
char PASWORD [5]   ="5555"; //pin o clave  de 4 caracteres



void setup() {
Serial.begin(9600); //iniciar la comunicacion en el monitor serial a 9600 baudios 
miBT.begin(9600); //inicia la comunicacion en el modulo HC-06


Serial.println("TODOS OK");

pinMode(13,OUTPUT);
digitalWrite(13,HIGH); //ENCIENDE EL LED 13
delay(5000); //SE ENCIENDE 5 SEGUNDOS 

digitalWrite(13, LOW);
Serial.print("enviando comandos AT");

miBT.print("AT");
delay(1000);

miBT.print("AT+NAME"); //CONFIGURANDO  EL NUEVO NOMBRE
miBT.print(NOMBRE);
delay(1000);

miBT.print("AT+BAUD"); //CONFIGURANDO  LA NUEVA VELOCIDAD
miBT.print(BPS);
delay(1000);

miBT.print("AT+PIN"); //CONFIGURANDO  EL NUEVO PASWORD
miBT.print(PASWORD);
delay(1000);

Serial.println("fin de los comandos AT");
}
void loop() {
digitalWrite(13,!digitalRead(13) ); //hacemos parpadear nuestro led
delay(500);

}
