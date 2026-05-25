===============================
README - Proyecto Arduino LDR
===============================

1. DESCRIPCIÓN DEL PROYECTO
----------------------------
Este proyecto utiliza un sensor LDR (Light Dependent Resistor)
para detectar cambios en la intensidad de luz.

El sistema lee los valores del sensor mediante un Arduino y puede
activar actuadores como un buzzer o un LED dependiendo de la cantidad
de luz detectada.

El objetivo principal es demostrar el uso de sensores analógicos,
lectura de datos y control básico de actuadores en Arduino.


2. LENGUAJE UTILIZADO
----------------------
- C++
- Arduino Framework


3. REQUISITOS DE HARDWARE
--------------------------
Componentes necesarios:

- 1 Arduino UNO, Nano o compatible
- 1 Sensor LDR
- 1 Resistencia de 10kΩ
- 1 Buzzer (opcional)
- 1 LED (opcional)
- Protoboard
- Cables jumper
- Cable USB para programar Arduino


4. CONEXIÓN DEL CIRCUITO
-------------------------

LDR:
- Una pata -> 5V
- Otra pata -> A0 y resistencia

Resistencia 10kΩ:
- Una pata -> A0
- Otra pata -> GND

Buzzer:
- Pin positivo -> Pin digital configurado
- Pin negativo -> GND

LED:
- Ánodo -> Pin digital
- Cátodo -> Resistencia -> GND


5. CÓMO IMPLEMENTAR EL CÓDIGO
------------------------------

Paso 1:
Instalar Arduino IDE:
https://www.arduino.cc/en/software

Paso 2:
Conectar el Arduino a la computadora mediante USB.

Paso 3:
Abrir el archivo del proyecto (.ino).

Paso 4:
Seleccionar:
- Herramientas -> Placa -> Arduino UNO
- Herramientas -> Puerto -> Puerto correspondiente

Paso 5:
Presionar el botón "Upload" para subir el código.

Paso 6:
Abrir el Monitor Serial para visualizar los datos del sensor.


6. FUNCIONAMIENTO
------------------
- El LDR detecta la cantidad de luz.
- Arduino lee el valor analógico.
- Si la luz cumple cierta condición:
    - Se activa el buzzer o LED.
- Si no se cumple:
    - El buzzer se apaga usando noTone().


7. POSIBLES MEJORAS
--------------------
- Agregar pantalla LCD
- Ajustar sensibilidad
- Activar relés
- Crear alarmas automáticas
- Guardar datos de sensores


8. AUTOR
---------
Proyecto desarrollado con Arduino para prácticas de electrónica
y programación embebida.