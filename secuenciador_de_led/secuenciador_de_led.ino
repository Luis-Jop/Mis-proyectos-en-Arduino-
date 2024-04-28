int led =1, ledanterior = 13;
int x; 
void setup() {
  for (x=1;x<=13;x=x++){ 
pinMode(x, OUTPUT);
  }
}

void loop() {
 if (led == 13) ;
 (led = 1);
 {
 digitalWrite(led, HIGH);
 digitalWrite(ledanterior,LOW);
 ledanterior = led;
 led += 1;
 delay(600);}

}
