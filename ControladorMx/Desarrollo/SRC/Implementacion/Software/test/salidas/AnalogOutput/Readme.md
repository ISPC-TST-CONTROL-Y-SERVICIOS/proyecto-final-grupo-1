# Diseño y desarrollo de salidas analogicas

# Descripcion
El ESP32, al igual que otros microcontroladores, ofrece salidas analógicas que permiten generar señales de voltaje continuo en un rango determinado

La forma para usar un pin analogico es la siguente:
- analogWritePin(pin, valor)
  
donde pin es el numero de GPIO, y valor es el valor de salida analógica en un rango de 0 a 255
