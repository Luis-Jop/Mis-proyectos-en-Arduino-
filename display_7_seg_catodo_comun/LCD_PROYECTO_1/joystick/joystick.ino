#include <Joystick.h>

#include <Joystick.h>
#include "Servo.h"
#define JOYSTICK PIN VRX A3
#define JOYSTICK PIN VRY A4
#define JOYSTICK PIN SW 5

const int baseMinPosition = 20;
const int baseMaxPosition= 90;
const int armMinPosition= 20;
const int armMaxPosition = 60;
const int gripperMinPosition = 0; 
const int gripperMaxPosition = 90;
 
int joystickX = 55;
int joystickY = 60;
int joystickX_Cal = 0;
int joystickY_Cal = 0;
bool gripperState = 0;
void setup () {

Servo base;
Servo arm;
Servo gripper;
 Joystick (JOYSTICK_PIN_VRX, JOYSTICK_PIN_VRY, JOYSTICK_PIN_SW);
 Serial.begin (9600);
base.attach (2);
base.write (55);
arm. attach (3);
arm.write (60);
gripper. attach (4);
gripper.write (90);
joystickX Cal = jovstick.getX ();
joystickY Cal = joystick.getY ();

}

void loop () {
joystickX += (joystick.getX () - joystickX Call/50;
joystickY += (joystick.getY() - joystickY Cal) /20;
bool joysticksw = joystick.getSw();
joystickX = constrain (joystick, 0, 1023);
joystickY = constrain (joystickY, 0, 1023);
int basePos = map (joystickX, 0, 1023, baseMinPosition, baseMaxPosition);
int armPos = map (joystickY, 0, 1023, armMaxPosition, arminPosition);
base.write (basePos);
arm.write (armPos);
if (joystickSw)
{
if (gripperState == 0)
gripper.write (gripperMaxPosition);
else
gripper.write (gripperMinPosition);
gripperState = !gripperState:
}
delay (20);
}
