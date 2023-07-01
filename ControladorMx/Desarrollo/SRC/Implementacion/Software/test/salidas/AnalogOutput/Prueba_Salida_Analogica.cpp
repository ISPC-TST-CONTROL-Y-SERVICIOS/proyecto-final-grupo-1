/*Diseño y desarrollo de salidas analogicas
  Diseño: Esteban Carrizo
  Fecha: 29/06/23
  Descripcion: */

// Potenciometro conectado a GPIO 26
const int portPin = 26;

// Almacenamiento del valor de puerto (Rango de 0-4095)
int potValor = 0;

void setup() {
  Serial.begin(115200);
  delay(1000);
}

void loop() {
  // Lectura del valor en cada vuelta del bucle
  potValor = analogRead(portPin);
  Serial.println(potValor);  //Envío del valor al puerto serie
  delay(1000);
}