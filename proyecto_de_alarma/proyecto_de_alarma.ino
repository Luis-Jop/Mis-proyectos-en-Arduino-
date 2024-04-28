#include <Config.h>
#include <EasyBuzzer.h>



int analogPin=0;
int valorLDR=0;
int umbralNumber=900;// Ejemplo puede ser cualquier numero deseable
byte LED=13;
const byte buzer = 2;
int led1 = 3;

void setup(){
  pinMode(LED, OUTPUT);
  Serial.begin(9600);
  pinMode(led1, OUTPUT);
  pinMode(buzer, OUTPUT);
}
void loop(){
  valorLDR=analogRead(analogPin);
  if (valorLDR >= umbralNumber){
    digitalWrite(LED, HIGH);
    digitalWrite(led1, HIGH);
    digitalWrite(buzer,HIGH);
  }
  else{
    digitalWrite(LED, LOW);
    digitalWrite(led1, LOW);
    digitalWrite(buzer, LOW);
  }
}
