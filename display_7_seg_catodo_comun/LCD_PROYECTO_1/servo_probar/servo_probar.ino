#include <Servo.h>
Servo servo1;
Servo servo2;

void setup() {
servo1.attach(9);
servo2.attach(5);
}

void loop() {
  servo1.write(0);
  delay(2000);
 servo1.write(90);
  delay(2000); 
  servo2.write(90);
  delay(2000);
  servo1.write(180);
  delay(2000);

  
  servo2.write(180);
  delay(2000);
}
