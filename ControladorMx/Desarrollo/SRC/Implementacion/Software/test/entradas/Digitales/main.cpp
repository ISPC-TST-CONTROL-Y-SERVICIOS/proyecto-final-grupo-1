/* Autor: Pedro Rojo
Este código configura el pin 2 como entradas digitales y el pin 14 
como salida digitale para encender un LED. En el bucle principal, se escribe el estado del pin de entrada y 
se enciende o apaga el LED según el estado del pin de entrada.
Esto se realizo con un solo ulsador a modo de Test, se podria aplicar replicando para cada uno de los
puertos solicitados.
*/

#include <Arduino.h>

// Declaramos el pin al que estará conectado el pulsador
int pinPulsador1=2;

// Declaramos el pin al que estará conectado el led
int pinLed1=14;

void setup()
{
  //Determinamos que el pin del pulsador sera para recibir 
  pinMode(pinPulsador1, INPUT);

  //Determinamos que el pin del led sera para salir
  pinMode(pinLed1, OUTPUT);
}
void loop()
{
  //Si la señal del pulsador es activa encendemos el led
  if (digitalRead(pinPulsador1) == HIGH) {
    digitalWrite(pinLed1, HIGH);
  } 
  //de lo contrario apagamos el led
  else {
    digitalWrite(pinLed1, LOW);
  }
}
