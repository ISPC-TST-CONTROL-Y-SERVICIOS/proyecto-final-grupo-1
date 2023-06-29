/* Autor: Pedro Rojo
Este código configura los pines 0, 2, 4, 12, 13 y 15 como entradas digitales y los pines 14, 27, 26, 25, 33 y 32 
como salidas digitales para encender una secuencia de LEDs. En el bucle principal, se escribe el estado de los pines de entrada y 
se encienden o apagan los pines de la secuencia de LEDs según el estado de los pines de entrada
*/

#include <Arduino.h>

// Declaramos el pin al que estará conectado el pulsador
int pinPulsador1=2;
int pinPulsador2=2;
int pinPulsador3=4;
int pinPulsador4=12;
int pinPulsador5=13;
int pinPulsador6=15;

// Declaramos el pin al que estará conectado el led
int pinLed1=14;
int pinLed2=27;
int pinLed3=26;
int pinLed4=25;
int pinLed5=33;
int pinLed6=32;

void setup()
{
  //Determinamos que el pin del pulsador sera para recibir 
  pinMode(pinPulsador1, INPUT);
  pinMode(pinPulsador2, INPUT);
  pinMode(pinPulsador3, INPUT);
  pinMode(pinPulsador4, INPUT);
  pinMode(pinPulsador5, INPUT);
  pinMode(pinPulsador6, INPUT);

  //Determinamos que el pin del led sera para salir
  pinMode(pinLed1, OUTPUT);
  pinMode(pinLed2, OUTPUT);
  pinMode(pinLed3, OUTPUT);
  pinMode(pinLed4, OUTPUT);
  pinMode(pinLed5, OUTPUT);
  pinMode(pinLed6, OUTPUT);
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
  if (digitalRead(pinPulsador2) == HIGH) {
    digitalWrite(pinLed2, HIGH);
  } 
   else {
    digitalWrite(pinLed2, LOW);
  }
  if (digitalRead(pinPulsador3) == HIGH) {
    digitalWrite(pinLed3, HIGH);
  } 
   else {
    digitalWrite(pinLed3, LOW);
  }
   if (digitalRead(pinPulsador4) == HIGH) {
    digitalWrite(pinLed4, HIGH);
  } 
   else {
    digitalWrite(pinLed4, LOW);
  }
  if (digitalRead(pinPulsador5) == HIGH) {
    digitalWrite(pinLed5, HIGH);
  } 
   else {
    digitalWrite(pinLed5, LOW);
  }
   if (digitalRead(pinPulsador6) == HIGH) {
    digitalWrite(pinLed6, HIGH);
  } 
   else {
    digitalWrite(pinLed6, LOW);
  }
  delay(200);
}