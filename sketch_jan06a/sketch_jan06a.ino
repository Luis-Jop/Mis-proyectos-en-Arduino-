#include <Servo.h>
Servo ser; 
 
 
 
 void setup() {
 ser.attach(3);
 Serial.begin(9600);

}

void loop() {
  ser.write(0);
  delay(2000);
  ser.write(90);
  delay(2000);
  
}
 
