
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
    Serial.begin(9600);
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
 
 digitalWrite(2,HIGH);
 digitalWrite(3,HIGH);
 digitalWrite(4,HIGH);
 digitalWrite(5,HIGH);
  digitalWrite(6,HIGH);
   digitalWrite(7,HIGH);
 digitalWrite(8,HIGH);
 digitalWrite(9,HIGH);
 digitalWrite(10,HIGH);
  digitalWrite(11,HIGH);
 
}

void loop () {
  
  if (Serial.available())  {
    cadena = String("");
    while (Serial.available()) {
      cadena = cadena + char(Serial.read());
      delay(1);
      
    }
    
    ledstatus1 = digitalRead(luz_dormitorio);
    ledstatus2 = digitalRead(luz_sala);
    ledstatus3 = digitalRead(ventilador_dormitorio);
    ledstatus4 = digitalRead(ventilador_sala);
     ledstatus5 = digitalRead(cafetera);
    ledstatus6 = digitalRead(plancha);
    ledstatus7 = digitalRead(iluminacion_led);
    ledstatus8 = digitalRead(bomba_de_agua);
    
    Serial.println(cadena);
    
    //Pin 2 ---------------------
    if (cadena == "luz_dormitorio") {
    if(ledstatus1==LOW){
    digitalWrite(luz_dormitorio, HIGH);
    }
    if(ledstatus1==HIGH){
    digitalWrite(luz_dormitorio, LOW);
    }
    }
    //pin3------------------------
   if (cadena == "luz_sala") {
    if(ledstatus2==LOW){
    digitalWrite(luz_sala, HIGH);
    }
    if(ledstatus2==HIGH){
    digitalWrite(luz_sala, LOW);
    }
   }
    //Pin 4---------------------- 
    if (cadena == "ventilador_dormitorio") {
    if(ledstatus3==LOW){
    digitalWrite(ventilador_dormitorio, HIGH);
    }
    if(ledstatus3==HIGH){
    digitalWrite(ventilador_dormitorio, LOW);
    }
    }
    //pin5----------------------------------
   if (cadena == "ventilador_sala") {
    if(ledstatus4==LOW){
    digitalWrite(ventilador_sala, HIGH);
    }
    if(ledstatus4==HIGH){
    digitalWrite(ventilador_sala, LOW);
    }
   }
      //Pin 6---------------------- 
    if (cadena == "cafetera") {
    if(ledstatus5==LOW){
    digitalWrite(cafetera, HIGH);
    }
    if(ledstatus5==HIGH){
    digitalWrite(cafetera, LOW);
    }
    }
    //pin  7------------------------
   if (cadena == "plancha") {
    if(ledstatus6==LOW){
    digitalWrite(plancha, HIGH);
    }
    if(ledstatus6==HIGH){
    digitalWrite(plancha, LOW);
    }
   }
    //Pin 8------------------------------
    if (cadena == "iluminacion_led") {
    if(ledstatus7==LOW){
    digitalWrite(iluminacion_led, HIGH);
    }
    if(ledstatus7==HIGH){
    digitalWrite(iluminacion_led, LOW);
    }
    }
    //pin 9--------------------------------
   if (cadena == "bomba_de_agua") {
    if(ledstatus8==LOW){
    digitalWrite(bomba_de_agua, HIGH);
    }
    if(ledstatus8==HIGH){
    digitalWrite(bomba_de_agua, LOW);
    }
   }
  
  }
}
