/* Autor: Pedro Rojo
Este código configura los pines 0, 2, 4, 12, 13 y 15 como entradas digitales y los pines 14, 27, 26, 25, 33 y 32 
como salidas digitales para encender una secuencia de LEDs. En el bucle principal, se escribe el estado de los pines de entrada y 
se encienden o apagan los pines de la secuencia de LEDs según el estado de los pines de entrada
*/

#include <Arduino.h>

//Iniciamos los pines del ESP32
const int ledPins[] = {14, 27, 26, 25, 33, 32}; // Pines de salida para los LEDs
const int inputPins[] = {0, 2, 4, 12, 13, 15}; // Pines de entrada

void setup() {
   for (int i = 0; i < 6; i++) {
     pinMode(ledPins[i], OUTPUT); // Declaramos los pines de Salida 
     pinMode(inputPins[i], INPUT); // Declaramos los pines de Entrada 
   }
}
void loop() {
  //Activamos Secuenciador de Leds
  for (int i = 0; i < 6; i++) {
    if (digitalRead(inputPins[i]) == LOW) {  //Leemos Estado Pin de Entrada, Si es bajo
      digitalWrite(ledPins[i], HIGH);        // Pasamos estado a Alto
      delay(500);                          // Pausa de medio segundo
      digitalWrite(ledPins[i], LOW);       // Pasamos estado a Bajo 
    }
   
  }  
}  
