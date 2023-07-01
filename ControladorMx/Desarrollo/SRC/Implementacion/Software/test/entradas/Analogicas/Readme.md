# Diseño y desarrollo de entradas analógicas (canales) 0-10V, 0-20 mA y 4-20 mA (P 34 - 35 - 36 - 39)

## Descripción

- Rango de voltaje de 0-10V: La placa ESP32 tiene un rango de voltaje de 0-3.3V, por lo que se requiere un divisor de voltaje para poder medir el voltaje de 0-10V.Por ejemplo, un divisor de voltaje que está compuesto por dos resistencias de 10K y 20K. El voltaje de entrada se mide en el pin 36 (ADC1_0) de la placa ESP32.

- Rango de corriente de 0-20 mA y 4-20 mA:se puede utilizar una resistencia de precisión en serie con la entrada analógica correspondiente (por ejemplo, P35 para 0-20mA y P36 para 4-20mA). La caída de voltaje a través de la resistencia se puede medir como una señal analógica utilizando el conversor analógico-digital (ADC) del ESP32. Se puede calcular el valor de la corriente en función de la caída de voltaje y el valor de la resistencia.
Antes de realizar la lectura de las entradas analógicas, se debe configurar el ADC del ESP32 para que funcione en el rango adecuado y con la precisión requerida. Esto incluye la configuración de la resolución, el voltaje de referencia y otros parámetros según tus necesidades.

# Video
[![Alt text](https://img.youtube.com/vi/MJga2HBaJcY/0.jpg)](https://www.youtube.com/watch?v=MJga2HBaJcY)

