#include <Arduino.h>

const int pwmPin = 25;  // Pin PWM
const int minDutyCycle = 204;  // Ciclo de trabajo mínimo correspondiente a 4mA
const int maxDutyCycle = 819;  // Ciclo de trabajo máximo correspondiente a 20mA

void setup() {
  ledcSetup(0, 10000, 10);  // Canal 0, frecuencia de 10 kHz, resolución de 10 bits
  ledcAttachPin(pwmPin, 0);  // Asociar el pin con el canal
}

void loop() {
  for (int dutyCycle = minDutyCycle; dutyCycle <= maxDutyCycle; dutyCycle++) {// Generar una señal PWM de 4-20mA
    ledcWrite(0, dutyCycle);
    delay(1);  // Pequeña pausa entre cada cambio de ciclo de trabajo
  }
  delay(1000);  // Esperar 1 segundo antes de repetir el ciclo
}
