#include <Arduino.h>
/*
- Diseño y desarrollo de salidas digitales (P 5 - 14- 16 - 17 - 18 - 27 )
Fecha : 28/06/2023
Autor : Birge Adolfo Fedeico
Version : 1.0
Descripción : Enciende y apaga las salidas digitales
Microcontrolador : ESP32 38 PINES
Entorno de desarrollo : PlatformIO
Desarrollo : Ejemplo para mostrar la funcionalidad de las salidas digitales del ESP32, se encienden y apagan leds conectados a cada una de estas salidas.

*/

// Definición de pines de salida
#define LED_BUILTIN1 5
#define LED_BUILTIN2 14
#define LED_BUILTIN3 16
#define LED_BUILTIN4 17
#define LED_BUILTIN5 18
#define LED_BUILTIN6 27

void setup()
{
  // Inicialización de pines de salida
  pinMode(LED_BUILTIN1, OUTPUT);
  pinMode(LED_BUILTIN2, OUTPUT);
  pinMode(LED_BUILTIN3, OUTPUT);
  pinMode(LED_BUILTIN4, OUTPUT);
  pinMode(LED_BUILTIN5, OUTPUT);
  pinMode(LED_BUILTIN6, OUTPUT);
}

void loop()
{
  // Encendido de led 6
  digitalWrite(LED_BUILTIN1, LOW);
  digitalWrite(LED_BUILTIN2, LOW);
  digitalWrite(LED_BUILTIN3, LOW);
  digitalWrite(LED_BUILTIN4, LOW);
  digitalWrite(LED_BUILTIN5, LOW);
  digitalWrite(LED_BUILTIN6, HIGH);
  delay(1000); // espera de 1 segundo

  // Encendido de led 2
  digitalWrite(LED_BUILTIN1, LOW);
  digitalWrite(LED_BUILTIN2, HIGH);
  digitalWrite(LED_BUILTIN3, LOW);
  digitalWrite(LED_BUILTIN4, LOW);
  digitalWrite(LED_BUILTIN5, LOW);
  digitalWrite(LED_BUILTIN6, LOW);
  delay(1000); // espera de 1 segundo

  // Encendido de led 5
  digitalWrite(LED_BUILTIN1, LOW);
  digitalWrite(LED_BUILTIN2, LOW);
  digitalWrite(LED_BUILTIN3, LOW);
  digitalWrite(LED_BUILTIN4, LOW);
  digitalWrite(LED_BUILTIN5, HIGH);
  digitalWrite(LED_BUILTIN6, LOW);
  delay(1000); // espera de 1 segundo

  // Encendido de led 1
  digitalWrite(LED_BUILTIN1, HIGH);
  digitalWrite(LED_BUILTIN2, LOW);
  digitalWrite(LED_BUILTIN3, LOW);
  digitalWrite(LED_BUILTIN4, LOW);
  digitalWrite(LED_BUILTIN5, LOW);
  digitalWrite(LED_BUILTIN6, LOW);
  delay(1000); // espera de 1 segundo

  // Encendido de led 4
  digitalWrite(LED_BUILTIN1, LOW);
  digitalWrite(LED_BUILTIN2, LOW);
  digitalWrite(LED_BUILTIN3, LOW);
  digitalWrite(LED_BUILTIN4, HIGH);
  digitalWrite(LED_BUILTIN5, LOW);
  digitalWrite(LED_BUILTIN6, LOW);
  delay(1000); // espera de 1 segundo

  // Encendido de led 3
  digitalWrite(LED_BUILTIN1, LOW);
  digitalWrite(LED_BUILTIN2, LOW);
  digitalWrite(LED_BUILTIN3, HIGH);
  digitalWrite(LED_BUILTIN4, LOW);
  digitalWrite(LED_BUILTIN5, LOW);
  digitalWrite(LED_BUILTIN6, LOW);
  delay(1000); // espera de 1 segundo
}
