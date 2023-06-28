/* Autor: Leonardo Gonzalez
Codigo para el testeo de PWM, me diante un ciclo for aumenta su intensidad
*/

#include <Arduino.h>

void setup() {
  // put your setup code here, to run once:
  pinMode(25,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  for (int dutyCycle = 0; dutyCycle <= 255; dutyCycle++) {
    analogWrite(25, dutyCycle);
    delay(100);  // Pausa para observar el cambio gradual
  }
}


