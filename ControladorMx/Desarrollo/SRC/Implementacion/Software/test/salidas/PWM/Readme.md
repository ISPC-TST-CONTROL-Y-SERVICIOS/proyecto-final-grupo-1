# Comunicacion PWM

## Descripcion

PWM es una técnica utilizada para controlar la potencia de una señal digital mediante la variación del ancho del pulso. 
Esto es especialmente útil en aplicaciones donde se requiere controlar la velocidad de un motor, regular la intensidad de una luz LED o generar señales analógicas simuladas.

El Esp32 cuenta con 16 salidas PWM, las cuales son:

GPIO0 a GPIO19
GPIO21 a GPIO23
GPIO25 a GPIO27
GPIO32 a GPIO33

## Ejemplo de uso

Esta funcion se puede realizar simplemente declarando el pin como salida, luego utilizando la funcion analogWrite de la siguiente manera

pinMode(OUTPUT,10); en esya linea se configura el pin la GPIO10 como salida

analogWrite(10,150);