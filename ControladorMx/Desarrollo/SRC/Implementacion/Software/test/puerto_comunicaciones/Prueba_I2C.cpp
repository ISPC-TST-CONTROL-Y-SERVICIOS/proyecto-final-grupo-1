/*************************************************************************************
Prueba de puertos de comunicaciones parte 2 de 3  comunicaciones I2C
Fecha : 01/07/23
Autor : Mario Alejandro Gonzalez
Version : 1.0
Descripción : Capturamos valores de Sensor BMP280 y los publicamos por serial
Microcontrolador : ESP32 38 PINES
Entorno de desarrollo : PlatformIO
Desarrollo : Integramos sensor BMP280 de preseion, temperatura y altitud al esp32 por comunicacion
I2C realizamos pruebas y publicamos por serial en consola
**************************************************************************************/
#include <Wire.h>               // incluimos libreria de comunicacion I2C nativa
#include <Adafruit_BMP280.h>    // incluimos libreria de adafruit para sensor BMP280

Adafruit_BMP280 bmp; 

void setup() {
  Serial.begin(9600);
  Serial.println(F("BMP280 Forced Mode Test."));
  bmp.begin(BMP280_ADDRESS_ALT, BMP280_CHIPID);   // iniciamos el objeto sensor en la direccion alterna 0x77
  bmp.setSampling(Adafruit_BMP280::MODE_FORCED,     /* Operating Mode. */
                  Adafruit_BMP280::SAMPLING_X2,     /* Temp. oversampling */
                  Adafruit_BMP280::SAMPLING_X16,    /* Pressure oversampling */
                  Adafruit_BMP280::FILTER_X16,      /* Filtering. */
                  Adafruit_BMP280::STANDBY_MS_500); /* Standby time. */
}

void loop() {
  if (bmp.takeForcedMeasurement()) {
    Serial.print(F("Temperatura = "));
    Serial.print(bmp.readTemperature());
    Serial.println(" *C");
    Serial.print(F("Presion = "));
    Serial.print(bmp.readPressure());
    Serial.println(" Pa");
    Serial.print(F("Altitud = "));
    Serial.print(bmp.readAltitude(1013.25));
    Serial.println(" m");
    Serial.println();
    delay(2000);
  } else {
    Serial.println(" Falla en la adquisicion de datos");
  }
}