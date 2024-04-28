 const int LEDPin= 13;
const int PIRPin= 2;
const byte buzer = 3;
byte vent = 12;


void setup(){
  pinMode(LEDPin, OUTPUT);
  pinMode(PIRPin, INPUT);
  pinMode(buzer, OUTPUT);
  pinMode(12, OUTPUT);
}

void loop()
{
  int value= digitalRead(PIRPin);
 
  if (value == HIGH)
  {
    digitalWrite(LEDPin, HIGH);
     digitalWrite(buzer,HIGH);
     digitalWrite(12,LOW);
   
  }
  else
  {
    digitalWrite(LEDPin, LOW);
    digitalWrite(buzer, LOW);
      digitalWrite(12, HIGH);
  }
}
