# Entradas Digitales - 


## Descripcion

Las entradas digitales de un microcontrolador son pines que permiten la entrada de señales digitales al microcontrolador. Estas señales son de dos estados posibles, "alto" o "bajo", 
que se representan con los valores binarios "1" y "0", respectivamente. Las entradas digitales se utilizan para leer señales provenientes de sensores, interruptores, pulsadores, y 
otros dispositivos que generan señales digitales.
Se configuran para leer el estado de una señal en un momento dado. Dependiendo de la configuración, el microcontrolador puede activar resistencias de pull-up o pull-down para asegurar 
que la señal tenga un valor definido cuando no esté siendo activada por el dispositivo conectado a la entrada digital.

El Esp32 cuenta con 36 pines de proposito general (GPIO) que pueden configurarse como entradas o salidas digitales.

## Ejemplo de uso

Esta funcion se puede realizar simplemente declarando el pin como entrada, luego utilizando la funcion digitalRead de la siguiente manera

pinMode(12, INPUT); // aqui configuramos el pin 12 como entrada

digitalRead(12); // leemos el valor de entrada de ese pin (que puede ser alto o bajo)

