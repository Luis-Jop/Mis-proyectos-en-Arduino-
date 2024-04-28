#include <MatrizLed.h>
MatrizLed pantalla;


void setup() {
  pantalla.begin(11,12,10,1);
  pantalla.borrar();
  pantalla.setLed(0,0,0,true);
  pantalla.setLed(0,1,1,true);
  pantalla.setLed(0,2,2,true);
  pantalla.setLed(0,3,3,true);
  pantalla.setLed(0,4,4,true);
  pantalla.setLed(0,5,5,true);
  pantalla.setLed(0,6,6,true);
  pantalla.setLed(0,7,7,true);
  delay(2000);
  
}

void loop() {
   pantalla.escribirCaracter('B',0);
   delay(1500);
 pantalla.escribirCaracter('I',0);
    delay(1500);
 pantalla.escribirCaracter('E', 0);
    delay(1500);
 pantalla.escribirCaracter('N', 0);
    delay(1500);
 pantalla.escribirCaracter('V',0);
   delay(1500);
    pantalla.escribirCaracter('E',0);
   delay(1500);
 pantalla.escribirCaracter('N',0);
    delay(1500);
 pantalla.escribirCaracter('I', 0);
    delay(1500);
 pantalla.escribirCaracter('D', 0);
    delay(1500);
 pantalla.escribirCaracter('0',0);
   delay(1500);
    pantalla.escribirCaracter('❤️',0);
   delay(1500);


 
}
void efectoHorizontal(){
  for(int i=0; i<= 7; i++){
    for(int j = 0;j <= 7; j++){
      pantalla.setLed(0,i,j,true); //enciende 8 leds de cada fila
      }
      delay(50);
       for(int j = 0;j <= 7 ; j++){
      pantalla.setLed(0,i,j,false);//apaga 8 leds de cada fila
      }
    }
 for (int i = 6; i >= 0; i--){
  for(int j = 0;j <= 7; j++){
      pantalla.setLed(0,i,j,true); //enciende 8 leds de cada fila
      }
      delay(50);
       for(int j = 0;j <= 7 ; j++){
      pantalla.setLed(0,i,j,false);//apaga 8 leds de cada fila
      }    
 }
}
void efectoVertical(){
   for(int i=0; i<= 7; i++){
    for(int j = 0;j <= 7; j++){
      pantalla.setLed(0,j,i,true); //enciende 8 leds de cada fila
      }
      delay(50);
       for(int j = 0;j <= 7 ; j++){
      pantalla.setLed(0,j,i,false);//apaga 8 leds de cada fila
      }
    }
 for (int i = 6; i >= 0; i--){
  for(int j = 0;j <= 7; j++){
      pantalla.setLed(0,j,i,true); //enciende 8 leds de cada fila
      }
      delay(50);
       for(int j = 0;j <= 7 ; j++){
      pantalla.setLed(0,j,i,false);//apaga 8 leds de cada fila
      }    
 }
}
