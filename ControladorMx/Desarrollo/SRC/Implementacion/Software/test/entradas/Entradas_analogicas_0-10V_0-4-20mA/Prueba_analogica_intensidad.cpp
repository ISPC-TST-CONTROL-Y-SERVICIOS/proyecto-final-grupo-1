/*************************************************************************************
Prueba de entradas analogicas 36 
Fecha : 01/07/23
Autor : Mario Alejandro Gonzalez
Version : 1.0
Descripción : Lee el puerto analogico A0 y publica valor
Microcontrolador : ESP32 38 PINES
Entorno de desarrollo : PlatformIO
Desarrollo : nos valemos de un sensor modelo ACS712 para la lectura de intensidad 
primero configuramos la entrada analogica en 12 bits de resolucion
luego leemos el valor analogico de la entrada A0 y acondicionamos para su muestra por serial 
**************************************************************************************/
#include <Arduino.h>
float Sensibilidad=0.185; //sensibilidad en Voltios/Amperio para sensor de 5A

float get_corriente(int n_muestras)
{
  float voltajeSensor;
  float corriente=0;
  for(int i=0;i<n_muestras;i++)
  {
    voltajeSensor = analogRead(A0) * (3.3 / 4096.0);////ESP32 ADC resolution 4096
    corriente=corriente+(voltajeSensor-2.0)/Sensibilidad; //Ecuación  para obtener la corriente
  }
  corriente=corriente/n_muestras;
  return(corriente);
}

void setup() {
  Serial.begin(9600);
  analogReadResolution(12);        // Establecer la resolución del ADC en 12 bits (0-4095)
}

void loop() {
  float I=get_corriente(200);//obtenemos la corriente promedio de 500 muestras 
  Serial.print("Corriente: ");
  Serial.println(I,3); 
  delay(100);     
}