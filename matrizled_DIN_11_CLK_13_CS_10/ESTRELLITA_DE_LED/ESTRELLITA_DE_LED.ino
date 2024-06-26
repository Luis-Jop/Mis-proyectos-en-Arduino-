
#include "LedControl.h"     // incluye libreria LedControl

LedControl lc=LedControl(11,13,10,1); // crea objeto

void setup() {
  lc.shutdown(0,false);     // enciende la matriz
  lc.setIntensity(0,4);     // establece brillo
  lc.clearDisplay(0);     // blanquea matriz
}

void loop(){
  for(int fila = 0; fila < 8; fila++) {     // itera por las filas
    for(int columna = 0; columna < 8; columna++) {  // itera por las columnas
      lc.setLed(0,fila,columna,true);     // enciende LED
      delay(100);         // demora de 100 mseg.
      lc.setLed(0,fila,columna,false);      // apaga LED
      delay(100);         // demora de 100 mseg.
    }
  }
}
