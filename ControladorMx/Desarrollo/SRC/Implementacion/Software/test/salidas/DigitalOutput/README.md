## Diseño y desarrollo de salidas digitales (P 5 - 14 - 16 - 17 - 18 - 27 )

  ### Descripción de las salidas digitales
  La placa de desarrollo ESP32 de 38 pines posee los siguentes pines GPIO que se pueden configurar como salidas digitales para establecer un estado lógico alto (3.3V) o bajo (0V):  GPIO0, GPIO2, GPIO4, GPIO5, GPIO12 al GPIO33.

### Ejemplo de Uso:
  Para el ejemplo se utilizan los 6 pines descriptos anteriormente, los cuales se configuran como salida digital(OUTPUT) y se establece un estado lógico alto (3.3V) durante 1 segundo para una salida especifica y el resto en un estado lógico bajo (0V) a traves del metodo digitalWrite(), avanzando sucesivamente con el estado en HIGH hasta llegar a la última salida generando un efecto de rafaga, repitiendose el proceso indefinidamente.

![ezgif-1-7bb873135e](https://github.com/ISPC-TST-CONTROL-Y-SERVICIOS/proyecto-final-grupo-1/assets/109010330/a11d22cd-e155-4426-b79c-17681bbb61b7)
