
//declaración de variables
String cadena;
int luz_dormitorio = 2;
int luz_sala = 3;
int ventilador_dormitorio = 4;
int ventilador_sala = 5;
int cafetera = 6;
int plancha = 7;
int iluminacion_led = 8;
int bomba_de_agua = 9;

int ledstatus1 = 0; 
int ledstatus2 = 0; 
int ledstatus3 = 0; 
int ledstatus4 = 0; 
int ledstatus5 = 0; 
int ledstatus6 = 0; 
int ledstatus7 = 0; 
int ledstatus8 = 0; 
int ledstatus9 = 0;
void setup () {
    Serial.begin(9600);// setea la velocidad del puerto serie a 9600
    //pin 2 y 3 como salidas
 pinMode(2,OUTPUT);
 pinMode(3,OUTPUT);
 pinMode(4,OUTPUT);
 pinMode(5,OUTPUT);
 pinMode(6,OUTPUT);
 pinMode(7,OUTPUT);
 pinMode(8,OUTPUT);
 pinMode(9,OUTPUT);
 pinMode(10,OUTPUT);
 pinMode(11,OUTPUT);
 digitalWrite(5,HIGH);
 digitalWrite(6,HIGH);
 digitalWrite(7,HIGH);
 digitalWrite(8,HIGH);
  digitalWrite(9,HIGH);
 
}

void loop () {
  //lee las cadenas de caracteres que ingresan al puerto serie
  if (Serial.available())  {
    cadena = String("");
    while (Serial.available()) {
      cadena = cadena + char(Serial.read());//Lee caracter por caracter y concatena a la variable cadena
      delay(1);
      
    }
    //Lee el estados de los pines 2 y 3 y se los asignas a las variables ledstatus 1 y ledstatus2
    ledstatus1 = digitalRead(luz_dormitorio);
    ledstatus2 = digitalRead(luz_sala);
    ledstatus3 = digitalRead(ventilador_dormitorio);
    ledstatus4 = digitalRead(ventilador_sala);
     ledstatus5 = digitalRead(cafetera);
    ledstatus6 = digitalRead(plancha);
    ledstatus7 = digitalRead(iluminacion_led);
    ledstatus8 = digitalRead(bomba_de_agua);
    
    Serial.println(cadena);//Muestra en el terminal serial la cadena obtenida
    
    //Pin 2 
    if (cadena == "luz_dormitorio") {//compara el valor de la cadena obetinada
    if(ledstatus1==LOW){// si el valor en bajo enciende el pin 2
    digitalWrite(luz_dormitorio, HIGH);
    }
    if(ledstatus1==HIGH){// de lo contrario lo apaga
    digitalWrite(luz_dormitorio, LOW);
    }
    }
    //pin3
   if (cadena == "luz_sala") {//compara el valor de la cadena obetinada
    if(ledstatus2==LOW){// si el valor en bajo enciende el pin 3
    digitalWrite(luz_sala, HIGH);
    }
    if(ledstatus2==HIGH){// de lo contrario lo apaga
    digitalWrite(luz_sala, LOW);
    }
   }
    //Pin 2 
    if (cadena == "ventilador_dormitorio") {//compara el valor de la cadena obetinada
    if(ledstatus3==LOW){// si el valor en bajo enciende el pin 2
    digitalWrite(ventilador_dormitorio, HIGH);
    }
    if(ledstatus3==HIGH){// de lo contrario lo apaga
    digitalWrite(ventilador_dormitorio, LOW);
    }
    }
    //pin3
   if (cadena == "ventilador_sala") {//compara el valor de la cadena obetinada
    if(ledstatus4==LOW){// si el valor en bajo enciende el pin 3
    digitalWrite(ventilador_sala, HIGH);
    }
    if(ledstatus4==HIGH){// de lo contrario lo apaga
    digitalWrite(ventilador_sala, LOW);
    }
   }
      //Pin 2 
    if (cadena == "cafetera") {//compara el valor de la cadena obetinada
    if(ledstatus5==LOW){// si el valor en bajo enciende el pin 2
    digitalWrite(cafetera, HIGH);
    }
    if(ledstatus5==HIGH){// de lo contrario lo apaga
    digitalWrite(cafetera, LOW);
    }
    }
    //pin3
   if (cadena == "plancha") {//compara el valor de la cadena obetinada
    if(ledstatus6==LOW){// si el valor en bajo enciende el pin 3
    digitalWrite(plancha, HIGH);
    }
    if(ledstatus6==HIGH){// de lo contrario lo apaga
    digitalWrite(plancha, LOW);
    }
   }
    //Pin 2 
    if (cadena == "iluminacion_led") {//compara el valor de la cadena obetinada
    if(ledstatus7==LOW){// si el valor en bajo enciende el pin 2
    digitalWrite(iluminacion_led, HIGH);
    }
    if(ledstatus7==HIGH){// de lo contrario lo apaga
    digitalWrite(iluminacion_led, LOW);
    }
    }
    //pin3
   if (cadena == "bomba_de_agua") {//compara el valor de la cadena obetinada
    if(ledstatus8==LOW){// si el valor en bajo enciende el pin 3
    digitalWrite(bomba_de_agua, HIGH);
    }
    if(ledstatus8==HIGH){// de lo contrario lo apaga
    digitalWrite(bomba_de_agua, LOW);
    }
   }
  
  }
}
