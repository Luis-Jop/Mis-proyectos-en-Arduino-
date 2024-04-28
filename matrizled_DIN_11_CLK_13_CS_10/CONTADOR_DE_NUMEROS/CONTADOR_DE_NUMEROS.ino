#include "LedControl.h"     // incluye libreria LedControl

LedControl lc=LedControl(11,13,10,1); // crea objeto

#define demora 1000     // constante demora con valor de 1000

byte cero[8]= {       // array que contiene todos los elementos de las
  B00111000,        // filas necesarias por mostrar el digito cero
  B01000100,
  B01000100,
  B01000100,
  B01000100,
  B01000100,
  B01000100,
  B00111000
};

byte uno[8]= {        // array que contiene todos los elementos de las
  B00010000,        // filas necesarias por mostrar el digito uno
  B00110000,
  B00010000,
  B00010000,
  B00010000,
  B00010000,
  B00010000,
  B00111000
};

byte dos[8]= {        // array que contiene todos los elementos de las
  B00111000,        // filas necesarias por mostrar el digito dos
  B01000100,
  B00000100,
  B00000100,
  B00001000,
  B00010000,
  B00100000,
  B01111100
};

byte tres[8]= {       // array que contiene todos los elementos de las
  B00111000,        // filas necesarias por mostrar el digito tres
  B01000100,
  B00000100,
  B00011000,
  B00000100,
  B00000100,
  B01000100,
  B00111000
};

byte cuatro[8]= {     // array que contiene todos los elementos de las
  B00001000,        // filas necesarias por mostrar el digito cuatro
  B00011000,
  B00101000,
  B01001000,
  B01001000,
  B01111100,
  B00001000,
  B00001000
};

byte cinco[8]= {      // array que contiene todos los elementos de las
  B01111100,        // filas necesarias por mostrar el digito cinco
  B01000000,
  B01000000,
  B01111000,
  B00000100,
  B00000100,
  B01000100,
  B00111000
};

byte seis[8]= {       // array que contiene todos los elementos de las
  B00111000,        // filas necesarias por mostrar el digito seis
  B01000100,
  B01000000,
  B01111000,
  B01000100,
  B01000100,
  B01000100,
  B00111000
};

byte siete[8]= {      // array que contiene todos los elementos de las
  B01111100,        // filas necesarias por mostrar el digito siete
  B00000100,
  B00000100,
  B00001000,
  B00010000,
  B00100000,
  B00100000,
  B00100000
};

byte ocho[8]= {       // array que contiene todos los elementos de las
  B00111000,        // filas necesarias por mostrar el digito ocho
  B01000100,
  B01000100,
  B00111000,
  B01000100,
  B01000100,
  B01000100,
  B00111000
};

byte nueve[8]= {      // array que contiene todos los elementos de las
  B00111000,        // filas necesarias por mostrar el digito nueve
  B01000100,
  B01000100,
  B01000100,
  B00111100,
  B00000100,
  B01000100,
  B00111000
};

void setup() {
  lc.shutdown(0,false);     // enciende la matriz
  lc.setIntensity(0,4);     // establece brillo
  lc.clearDisplay(0);     // blanquea matriz
}

void loop(){
  mostrar_0();        // llama funcion mostrar_0
  delay(demora);      // demora
  mostrar_1();        // llama funcion mostrar_1
  delay(demora);      // demora
  mostrar_2();        // llama funcion mostrar_2
  delay(demora);      // demora
  mostrar_3();        // llama funcion mostrar_3
  delay(demora);      // demora
  mostrar_4();        // llama funcion mostrar_4
  delay(demora);      // demora
  mostrar_5();        // llama funcion mostrar_5
  delay(demora);      // demora
  mostrar_6();        // llama funcion mostrar_6
  delay(demora);      // demora
  mostrar_7();        // llama funcion mostrar_7
  delay(demora);      // demora
  mostrar_8();        // llama funcion mostrar_8
  delay(demora);      // demora
  mostrar_9();        // llama funcion mostrar_9
  delay(demora);      // demora
}

void mostrar_0(){     // funcion mostrar_0
  for (int i = 0; i < 8; i++)     // bucle itera 8 veces por el array
  {
    lc.setRow(0,i,cero[i]);   // establece fila con valor de array cero en misma posicion
  }
}

void mostrar_1(){     // funcion mostrar_1
  for (int i = 0; i < 8; i++)     // bucle itera 8 veces por el array 
  {
    lc.setRow(0,i,uno[i]);    // establece fila con valor de array uno en misma posicion
  }
}

void mostrar_2(){     // funcion mostrar_2
  for (int i = 0; i < 8; i++)     // bucle itera 8 veces por el array
  {
    lc.setRow(0,i,dos[i]);    // establece fila con valor de array dos en misma posicion
  }
}

void mostrar_3(){     // funcion mostrar_3
  for (int i = 0; i < 8; i++)     // bucle itera 8 veces por el array 
  {
    lc.setRow(0,i,tres[i]);   // establece fila con valor de array tres en misma posicion
  }
}

void mostrar_4(){     // funcion mostrar_4
  for (int i = 0; i < 8; i++)     // bucle itera 8 veces por el array 
  {
    lc.setRow(0,i,cuatro[i]);   // establece fila con valor de array cuatro en misma posicion
  }
}

void mostrar_5(){     // funcion mostrar_5
  for (int i = 0; i < 8; i++)     // bucle itera 8 veces por el array 
  {
    lc.setRow(0,i,cinco[i]);    // establece fila con valor de array cinco en misma posicion
  }
}

void mostrar_6(){     // funcion mostrar_6
  for (int i = 0; i < 8; i++)     // bucle itera 8 veces por el array 
  {
    lc.setRow(0,i,seis[i]);   // establece fila con valor de array seis en misma posicion
  }
}

void mostrar_7(){     // funcion mostrar_7
  for (int i = 0; i < 8; i++)     // bucle itera 8 veces por el array 
  {
    lc.setRow(0,i,siete[i]);    // establece fila con valor de array siete en misma posicion
  }
}

void mostrar_8(){     // funcion mostrar_8
  for (int i = 0; i < 8; i++)     // bucle itera 8 veces por el array 
  {
    lc.setRow(0,i,ocho[i]);   // establece fila con valor de array ocho en misma posicion
  }
}

void mostrar_9(){     // funcion mostrar_9
  for (int i = 0; i < 8; i++)     // bucle itera 8 veces por el array 
  {
    lc.setRow(0,i,nueve[i]);    // establece fila con valor de array nueve en misma posicion
  }
}
