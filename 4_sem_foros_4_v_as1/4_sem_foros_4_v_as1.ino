//4 semaforos de 2 calles con leds 
void setup()
{
  for(int i=2; i<14; i++)
  {
  	pinMode(i, OUTPUT); //definimos las variables 
  }
}

void loop()
{
  digitalWrite(13, HIGH);
  digitalWrite(4, HIGH);
  digitalWrite(5, HIGH);
  digitalWrite(8, HIGH);
  delay(5000);
  digitalWrite(13, LOW);
  digitalWrite(4, LOW);
  digitalWrite(5, HIGH);
  digitalWrite(8, HIGH);
  digitalWrite(3, HIGH);
  digitalWrite(12, HIGH);
  delay(2000);
  digitalWrite(5, LOW);
  digitalWrite(8, LOW);
  digitalWrite(3, LOW);
  digitalWrite(12, LOW);
  digitalWrite(11, HIGH);
  digitalWrite(2, HIGH);
  digitalWrite(7, HIGH);
  digitalWrite(10, HIGH);
  delay(5000);
  digitalWrite(7, LOW);
  digitalWrite(10, LOW);
  digitalWrite(11, LOW);
  digitalWrite(2, LOW);
  digitalWrite(11, HIGH);
  digitalWrite(2, HIGH);
  digitalWrite(6, HIGH);
  digitalWrite(9, HIGH);
  delay(2000);
  digitalWrite(6, LOW);
  digitalWrite(9, LOW);
  digitalWrite(11, LOW);
  digitalWrite(2, LOW);
  
}
