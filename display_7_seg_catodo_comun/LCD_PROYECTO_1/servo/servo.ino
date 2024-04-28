#include <Servo.h>
Servo servo1;
Servo servo2;
Servo servo3;
Servo servo4;
int pos1 = 0;
int pos2=0;
int pos3=0;
int pos4=0;

void setup() {
servo1.attach(3);
servo2. attach(5);
servo3.attach(9);

}

void loop() {
//gira base
  for(pos1=30;pos1<100;pos1 +=1)
{
  servo1.write(pos1);
  delay(1000);
}
//baja
for(pos2=50;pos2<120;pos2 +=1)
{
  servo2.write(pos2);
  delay(1000);
}
//brir garra
for(pos3=40;pos2<125;pos2 +=1)
{
  servo3.write(pos3);
  delay(1000);
}
//cerramos garra
for(pos3=125;pos3>=40 ;pos2 -=1)
{
  servo3.write(pos3);
  delay(1000);
}
//sube
for(pos2=120;pos2>=50;pos2 -=1)
{
  servo3.write(pos2);
  delay(15);
}
 for(pos1=100;pos1>=30;pos1 -=1)
{
  servo1.write(pos1);
  delay(15);
}



}
