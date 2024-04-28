#include "LedControl.h" 
 
 
 
LedControl matriz=LedControl(11,13,10,1); // crea objeto
 
/* 12 para el DIN, 11 para el CLK, 10 para el CS y el 1 se refiere a la asignacion de la matriz*/ 
 
 
 
//Corazón pequeño
 
byte Corazon_datos[] = {
 
B00000000,
 
B01100110,
 
B11111111,
 
B11111111,
 
B01111110,
 
B00111100,
 
B00011000,
 
B00000000};
 
 
 // cara emoji
byte Cara_datos[] = 
 
{B00111100,
 
B01000010,
 
B10100101,
 
B10000001,
 
B10100101,
 
B10011001,
 
B01000010,
 
B00111100};
 
 

 
void setup()
 
{
 
  // El numero que colocamos como argumento de la funcion se refiere a la direccion del decodificador
 
  matriz.shutdown(0,false);
 
  matriz.setIntensity(0,8);// La valores estan entre 1 y 15 
 
  matriz.clearDisplay(0);
 
  
 
}
 
void loop()
 
{
   
  RepresentarMatriz(Corazon_datos,2000); // llama método para mostrar Corazón
  delay(500);
  RepresentarMatriz(Cara_datos,2000);  // llama método para mostrar emoji
  delay(500);
 
  matriz.clearDisplay(0);
 
}
 

// Definimos una funcion para representar las figuras
 
 
 
void RepresentarMatriz(byte *Datos,int espera) //Representa los bytes de datos para una matriz de 8x8 
 
{
 
  for (int i = 0; i < 8; i++)  
 
  {
 
    matriz.setColumn(0,i,Datos[7-i]);
 
  }
 
  delay(espera);
 
}
