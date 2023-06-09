# Diseño y desarrollo de puertos de comunicación, entradas: I2C, SPI, UART. - Documentación y prueba

## Descripción 
- I2C (Inter-Integrated Circuit): El bus I2C es un estándar de comunicación de dos cables que permite la transferencia de datos serie entre dispositivos. Utiliza dos líneas, SDA (Serial Data Line) y SCL (Serial Clock Line), para la transmisión de datos y señales de reloj, respectivamente. El diseño de un puerto I2C implica la implementación de estos dos canales y el manejo de las operaciones de lectura y escritura en los dispositivos conectados.
En la placa de desarollo ESP32 de 38 pines, el bus I2C se encuentra disponible en los pines GPIO 21 (SDA) y GPIO 22 (SCL). Para utilizar el bus I2C en un programa de Arduino, es necesario incluir la librería `Wire.h` y utilizar las funciones `Wire.begin()` y `Wire.beginTransmission()` para iniciar la comunicación. Para enviar datos, se utiliza la función `Wire.write()` y para recibir datos, la función `Wire.read()`. Finalmente, para terminar la comunicación, se utiliza la función `Wire.endTransmission()`.

- SPI (Serial Peripheral Interface): El bus SPI es un estándar de comunicación de cuatro cables que permite la transferencia de datos serie entre dispositivos. Utiliza cuatro líneas, SCLK (Serial Clock), MOSI (Master Output/Slave Input), MISO (Master Input/Slave Output) y SS (Slave Select), para la transmisión de datos, señales de reloj y selección de dispositivos, respectivamente. El diseño de un puerto SPI implica la implementación de estos cuatro canales y el manejo de las operaciones de lectura y escritura en los dispositivos conectados
En la placa de desarollo ESP32 de 38 pines, el bus SPI se encuentra disponible en los pines GPIO 18 (SCLK), GPIO 23 (MOSI), GPIO 19 (MISO) y GPIO 5 (SS). Para utilizar el bus SPI en un programa de Arduino, es necesario incluir la librería `SPI.h` y utilizar las funciones `SPI.begin()` y `SPI.beginTransaction()` para iniciar la comunicación. Para enviar datos, se utiliza la función `SPI.transfer()` y para recibir datos, la función `SPI.transfer()`. Finalmente, para terminar la comunicación, se utiliza la función `SPI.endTransaction()`.

- UART (Universal Asynchronous Receiver-Transmitter): El protocolo UART es un estándar de comunicación serial asíncrona que utiliza una línea para transmitir y recibir datos. Generalmente, se utiliza para la comunicación serie entre un microcontrolador y otros dispositivos. Al diseñar y desarrollar un puerto UART, debes considerar lo siguiente: Configuración de la velocidad de transmisión (baud rate). Configuración del número de bits de datos, bits de parada y paridad. Documentación de las funciones y registros utilizados para la comunicación UART en los dispositivos involucrados. Pruebas de comunicación para verificar la transferencia correcta de datos entre los dispositivos.
En la placa de desarollo ESP32 de 38 pines, el bus UART se encuentra disponible en los pines GPIO 1 (TX) y GPIO 3 (RX). Para utilizar el bus UART en un programa de Arduino, es necesario incluir la librería `HardwareSerial.h` y utilizar las funciones `Serial.begin()` y `Serial.print()` para iniciar la comunicación y enviar datos, respectivamente. Para recibir datos, se utiliza la función `Serial.read()`. Finalmente, para terminar la comunicación, se utiliza la función `Serial.end()`.


# Pruebas de sistema de comunicaciones


## Protocolo I2C ##

[![Alt text](https://img.youtube.com/vi/HJDiYeqc5bk/0.jpg)](https://www.youtube.com/watch?v=HJDiYeqc5bk)


## Protocolo UART ##

[![Alt text](https://img.youtube.com/vi/jb8EbSaha9A/0.jpg)](https://www.youtube.com/watch?v=jb8EbSaha9A)

