/*************************************************************************************
Prueba de puertos de comunicaciones parte 1 de 3  comunicaciones SPI
Fecha : 01/07/23
Autor : Mario Alejandro Gonzalez
Version : 1.0
Descripción : Envia Payload a traves del puerto SPI "TST SyC prueba de comunicaciones"
Microcontrolador : ESP32 38 PINES
Entorno de desarrollo : PlatformIO
Desarrollo : usamos el puerto SPI del ESP32,
para enviar datos a un dispositivo esclavo y enviamos un string 
utilizamos estructuta "for" para recorrer el arreglo y enviar todo el string
**************************************************************************************/
#include <Arduino.h>
#include <SPI.h>
#define SS_PIN 5    // Seleccionar dispositivo slave (NSS) - GPIO5
#define MOSI_PIN 23 // Master Salida esclavo entrada (MOSI) - GPIO23
#define MISO_PIN 19 // Master Entrada esclavo salida (MISO) - GPIO19
#define SCK_PIN 18  // Clock (SCK) - GPIO18

void setup()
{
  SPI.begin(SCK_PIN, MISO_PIN, MOSI_PIN, SS_PIN); // Inicializar la comunicación SPI
  SPI.setClockDivider(SPI_CLOCK_DIV4);            // Configurar la velocidad de reloj a la mitad de la frecuencia del CPU (80 MHz / 2)
  SPI.setDataMode(SPI_MODE0);                     // Configurar el modo de datos a 0 (puede ajustarse según los requisitos)
}

void loop(){
  digitalWrite(SS_PIN, LOW);                              // Activar el dispositivo esclavo (Chip Select - CS)
  char dataToSend[] = "TST SyC prueba de comunicaciones"; // Enviar cadena de texto al dispositivo esclavo
  for (int i = 0; i < strlen(dataToSend); i++)  {
    SPI.transfer(dataToSend[i]);
    delayMicroseconds(10);                                // pausa permitir esclavo vea datos
  }
  digitalWrite(SS_PIN, HIGH);                             // Desactivar el dispositivo esclavo
}
