# Comunicacion PWM

## Descripcion

PWM es una técnica utilizada para controlar la potencia de una señal digital mediante la variación del ancho del pulso. 
Esto es especialmente útil en aplicaciones donde se requiere controlar la velocidad de un motor, regular la intensidad de una luz LED o generar señales analógicas simuladas.

El Esp32 cuenta con 16 salidas PWM, las cuales son:

- GPIO0 a GPIO19
- GPIO21 a GPIO23
- GPIO25 a GPIO27
- GPIO32 a GPIO33

## Ejemplo de uso

Esta funcion se puede realizar simplemente declarando el pin como salida, luego utilizando la funcion analogWrite de la siguiente manera

pinMode(OUTPUT,25); en esta linea se configura el pin la GPIO25 como salida

analogWrite(25,128); //activamos el pin GPIO25 al 50% de su potencia

![ezgif-4-1b203c3f69](https://github.com/ISPC-TST-CONTROL-Y-SERVICIOS/proyecto-final-grupo-1/assets/109010330/6bcb9cf1-fc98-480b-b9ff-0cc04aac36c5)

https://github.com/ISPC-TST-CONTROL-Y-SERVICIOS/proyecto-final-grupo-1/assets/108964477/2a05d8b5-3b6f-4c8f-8dee-bfa0007d21c4



## Video
[![Alt text](https://img.youtube.com/vi/woGeL7PGjPg/0.jpg)](https://www.youtube.com/watch?v=woGeL7PGjPg)
