/*
	Capitulo 35 de Arduino desde cero en Español.
	Simple programa que muestra en la pantalla de un modulo LCD 1602A mediante adaptador
	LCD I2C un texto que parpadea a intervalos de medio segundo. Adaptador basado en
	circuito integrado PCF8574 y libreria LiquidCrystal_I2C descargada desde:
	https://github.com/fmalpartida/New-LiquidCrystal
	
	https://www.youtube.com/c/BitwiseAr
	Autor: bitwiseAr  

*/

#include <Wire.h>			// libreria de comunicacion por I2C
#include <LCD.h>			// libreria para funciones de LCD
#include <LiquidCrystal_I2C.h>		// libreria para LCD por I2C

LiquidCrystal_I2C lcd (0x27, 2, 1, 0, 4, 5, 6, 7); // DIR, E, RW, RS, D4, D5, D6, D7

void setup()
{
    lcd.setBacklightPin(3,POSITIVE);	// puerto P3 de PCF8574 como positivo
    lcd.setBacklight(HIGH);		// habilita iluminacion posterior de LCD
    lcd.begin(16, 2);			// 16 columnas por 2 lineas para LCD 1602A
    lcd.clear();			// limpia pantalla
}

void loop()
{
    lcd.setCursor(3, 5);		// ubica cursor en columna 0 y linea 0
    lcd.print("!AYUDA!");	// escribe texto
    lcd.display();			// muestra el texto
    delay(500);				// demora de medio segundo
    
}