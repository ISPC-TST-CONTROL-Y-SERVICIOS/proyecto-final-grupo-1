/*************************************************************************************
Prueba de entradas analogicas 36 
Fecha : 01/07/23
Autor : Mario Alejandro Gonzalez
Version : 1.0
Descripción : Lee el puerto analogico A0 y publica valor
Microcontrolador : ESP32 38 PINES
Entorno de desarrollo : PlatformIO
Desarrollo : primero configuramos la entrada analogica en 12 bits de resolucion luego 
establecesmos el valor de referenciaa 1 v, leemos el pin analogo y mapeamos esta lectura 
a valores de entre 0v a 10v luego lo publicamos en el serial nativo

**************************************************************************************/
#include <Arduino.h>
const int analogInPin = 36; // Pin analógico de entrada
const float refVoltage = 1.0; // Valor de referencia en voltios

void setup() {
  Serial.begin(115200);
  delay(1000);
  analogReadResolution(12);        // Establecer la resolución del ADC en 12 bits (0-4095)
}

void loop() {
  int entrada = analogRead(analogInPin);
  float voltaje = map(entradaValue, 0, 4095, 0, 10);
   Serial.print("Voltaje: ");
  Serial.print(voltage, 2); // Imprimir con 2 decimales
  Serial.println("V");
  delay(1000); // Esperar 1 segundo antes de la próxima lectura
}
