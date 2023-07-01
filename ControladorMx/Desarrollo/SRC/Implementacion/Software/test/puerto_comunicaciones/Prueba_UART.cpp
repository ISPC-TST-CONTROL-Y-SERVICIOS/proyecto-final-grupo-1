/*************************************************************************************
Prueba de puertos de comunicaciones parte 3 de 3  comunicaciones UART
Fecha : 01/07/23
Autor : Mario Alejandro Gonzalez
Version : 1.0
Descripción : Enviamos Capturamos valores de Sensor BMP280 y los publicamos por serial
Microcontrolador : ESP32 38 PINES
Entorno de desarrollo : PlatformIO
Desarrollo : Integramos sensor BMP280 de preseion, temperatura y altitud al esp32 por comunicacion
I2C realizamos pruebas y publicamos por serial en consola
**************************************************************************************/
#include <Arduino.h>
int contador=0; 

void setup() {
  Serial.begin(9600);
}

void loop() {
Serial.print("Prueba de comunicacion UART Nro.: ");
Serial.println(contador);
contador++;
delay(3000);
}