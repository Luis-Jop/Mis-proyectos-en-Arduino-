#include "BluetoothSerial.h"
#include "soc/soc.h"
#include "soc/rtc_cntl_reg.h"
#if !defined(CONFIG_BT_ENABLED) || !defined(CONFIG_BLUEDROID_ENABLED)
#error Bluetooth is not enabled! Please run `make menuconfig` to and enable it
#endif

BluetoothSerial SerialBT;

int led = 13;

void setup() {
  WRITE_PERI_REG(RTC_CNTL_BROWN_OUT_REG, 0); //deshabilitar el detector de caída de tensión
  Serial.begin(115200);
  SerialBT.begin("ESP32-BT-Slave"); //Bluetooth device name
pinMode(led,OUTPUT);
}

void loop() {
 if(SerialBT.available()) {
  char dato = SerialBT.read();
  if(dato == 'E'){
    digitalWrite(led,HIGH);
    Serial.println("encendido");
  }
  else if (dato == 'R'){
    digitalWrite(led,LOW);
    Serial.println("apagado");
  }
 }
 delay(10);
}
