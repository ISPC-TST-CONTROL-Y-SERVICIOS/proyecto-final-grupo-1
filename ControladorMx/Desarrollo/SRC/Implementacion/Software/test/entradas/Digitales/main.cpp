/* Autor: Pedro Rojo
Este código configura los pines 0, 2, 4, 12, 13 y 15 como entradas digitales y los pines 16, 17, 18, 19, 21 y 22 
como salidas digitales para encender una matriz de LED. En el bucle principal, se lee el estado de los pines de entrada y 
se encienden o apagan los pines de la matriz de LED según el estado de los pines de entrada
*/

#include <Arduino.h>

#define LED_MATRIX_PIN_1 16
#define LED_MATRIX_PIN_2 17
#define LED_MATRIX_PIN_3 18
#define LED_MATRIX_PIN_4 19
#define LED_MATRIX_PIN_5 21
#define LED_MATRIX_PIN_6 22

void setup() {
  // Configurar los pines de entrada como entradas digitales
    pinMode(0, INPUT);
    pinMode(2, INPUT);
    pinMode(4, INPUT);
    pinMode(12, INPUT);
    pinMode(13, INPUT);
    pinMode(15, INPUT);

    // Configurar los pines de la matriz de LED como salidas
    pinMode(LED_MATRIX_PIN_1, OUTPUT);
    pinMode(LED_MATRIX_PIN_2, OUTPUT);
    pinMode(LED_MATRIX_PIN_3, OUTPUT);
    pinMode(LED_MATRIX_PIN_4, OUTPUT);
    pinMode(LED_MATRIX_PIN_5, OUTPUT);
    pinMode(LED_MATRIX_PIN_6, OUTPUT);
}

void loop() {
    // Leer los valores de los pines de entrada
        int in1 = digitalRead(0);
        int in2 = digitalRead(2);
        int in3 = digitalRead(4);
        int in4 = digitalRead(12);
        int in5 = digitalRead(13);
        int in6 = digitalRead(15);

    // Encender la matriz de LED según el estado de los pines de entrada
        digitalWrite(LED_MATRIX_PIN_1, in1);
        digitalWrite(LED_MATRIX_PIN_2, in2);
        digitalWrite(LED_MATRIX_PIN_3, in3);
        digitalWrite(LED_MATRIX_PIN_4, in4);
        digitalWrite(LED_MATRIX_PIN_5, in5);
        digitalWrite(LED_MATRIX_PIN_6, in6);

        // Esperar un tiempo antes de leer los pines de entrada de nuevo
        delay(500);  
}


