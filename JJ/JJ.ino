   int x;
   int y ;
   int led_izquierdo = 3;
   int led_derecho = 5;
   int led_abajo = 6;
   int led_arriba = 9;
   int pulsador = 10;
   int led_sw = 11;
   int sw;

void setup() {
  pinMode(led_izquierdo, OUTPUT);
  pinMode(led_derecho, OUTPUT);
  pinMode(led_abajo, OUTPUT);
  pinMode(led_arriba, OUTPUT);
  pinMode(led_sw, OUTPUT);
  pinMode(pulsador, INPUT);
}

void loop() {
 x = analogRead(A0);
 y = analogRead(A1);
 sw =  digitalRead(pulsador);
 if (x >= 0 && x < 480){
  analogWrite(led_izquierdo, map(x,0, 480, 255, 0));
 } else {
  analogWrite(led_izquierdo, 0);
 }

 if (x > 520 && x <= 1023){
  analogWrite(led_derecho, map(x,520, 1023, 0, 255));
 } else {
  analogWrite(led_derecho, 0);
 }
 if (y >= 0 && x < 480){
  analogWrite(led_abajo, map(y,0, 480, 255, 0));
 } else {
  analogWrite(led_abajo, 0);
 }
 if (y > 520 && x <= 1023){
  analogWrite(led_arriba, map(y,520, 1023, 0, 255));
 } else {
  analogWrite(led_arriba, 0);
 }
 digitalWrite(led_sw, !sw);

}
