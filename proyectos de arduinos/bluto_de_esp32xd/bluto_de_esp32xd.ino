#include <BluetoothSerial.h>
#include <BTAddress.h>
#include <BTAdvertisedDevice.h>
#include <BTScan.h>

BluetoothSerial SerialBT;

const String deviceName = "soy_esp32";

void setup(){
Serial.begin (921600);
SerialBT.begin (deviceName);
Serial.println(deviceName + "listo para emparejar....");
}
void loop(){
serialEvent ();
}
void serialEvent(){
if (Serial.available())
SerialBT.write(Serial.read());
if (SerialBT.available())
Serial.write(SerialBT.read());
delay (20);
}
