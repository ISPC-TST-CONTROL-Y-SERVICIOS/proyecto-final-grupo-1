/* Autor: Pedro Rojo
Este código configura los pines 0, 2, 4, 12, 13 y 15 como entradas digitales y los pines 16, 17, 18, 19, 21, 22, 23 y 25 
como salidas digitales para encender una matriz de LED. En el bucle principal, se lee el estado de los pines de entrada y 
se encienden o apagan los pines de la matriz de LED según el estado de los pines de entrada
*/

#include <Arduino.h>

#define LED_MATRIX_PIN_1 GPIO_NUM_16
#define LED_MATRIX_PIN_2 GPIO_NUM_17
#define LED_MATRIX_PIN_3 GPIO_NUM_18
#define LED_MATRIX_PIN_4 GPIO_NUM_19
#define LED_MATRIX_PIN_5 GPIO_NUM_21
#define LED_MATRIX_PIN_6 GPIO_NUM_22
#define LED_MATRIX_PIN_7 GPIO_NUM_23
#define LED_MATRIX_PIN_8 GPIO_NUM_25

void setup() {
  // Configurar los pines de entrada como entradas digitales
    pinMode(GPIO_NUM_0, INPUT);
    pinMode(GPIO_NUM_2, INPUT);
    pinMode(GPIO_NUM_4, INPUT);
    pinMode(GPIO_NUM_12, INPUT);
    pinMode(GPIO_NUM_13, INPUT);
    pinMode(GPIO_NUM_15, INPUT);

    // Configurar los pines de la matriz de LED como salidas
    pinMode(LED_MATRIX_PIN_1, OUTPUT);
    pinMode(LED_MATRIX_PIN_2, OUTPUT);
    pinMode(LED_MATRIX_PIN_3, OUTPUT);
    pinMode(LED_MATRIX_PIN_4, OUTPUT);
    pinMode(LED_MATRIX_PIN_5, OUTPUT);
    pinMode(LED_MATRIX_PIN_6, OUTPUT);
    pinMode(LED_MATRIX_PIN_7, OUTPUT);
    pinMode(LED_MATRIX_PIN_8, OUTPUT);
}

void loop() {
    // Leer los valores de los pines de entrada
        int in1 = digitalRead(GPIO_NUM_0);
        int in2 = digitalRead(GPIO_NUM_2);
        int in3 = digitalRead(GPIO_NUM_4);
        int in4 = digitalRead(GPIO_NUM_12);
        int in5 = digitalRead(GPIO_NUM_13);
        int in6 = digitalRead(GPIO_NUM_15);

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


