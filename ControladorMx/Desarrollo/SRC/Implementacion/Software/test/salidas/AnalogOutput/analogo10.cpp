#include <Arduino.h>
const int pwmPin = 25;  // Pin PWM

void setup() {
  ledcSetup(0, 10000, 10);  // Canal 0, frecuencia de 10 kHz, resolución de 10 bits
  ledcAttachPin(pwmPin, 0);  // Asociar el pin con el canal
}

void loop() {
  // Generar una señal PWM de 0-10V
  for (int dutyCycle = 0; dutyCycle <= 1023; dutyCycle++) {  // Generar una señal PWM de 0-10V
    ledcWrite(0, dutyCycle);
    delay(1);  // Pausa entre cada cambio de ciclo de trabajo
  }

  delay(1000);  // Esperar 1 segundo antes de repetir el ciclo
}
