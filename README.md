# |-OJO DE SAURON-|


Ojo de Sauron es un proyecto que combina el uso de C y Assembly para capturar la pantalla y demostrar técnicas de programación híbrida. El propósito de este proyecto es enseñar cómo los lenguajes de bajo nivel pueden interactuar con el hardware del sistema operativo y cómo integrarlos con lenguajes de alto nivel para crear aplicaciones más eficientes y robustas.

Este proyecto está diseñado con fines educativos y de concientización sobre la seguridad informática, con el objetivo de mostrar los riesgos potenciales en la seguridad de dispositivos si no se aplican medidas adecuadas de protección. No debe ser utilizado para fines malintencionados.( tu me entiendes )


-Características-
-

-Captura de pantalla simulada: El módulo en Assembly simula una captura de pantalla, mostrando cómo interactuar con el hardware o el sistema operativo.

-Integración de C y Assembly: La lógica principal está escrita en C, que llama a funciones críticas de bajo nivel en Assembly.

-Optimización y eficiencia: El uso de Assembly permite una mejor optimización en áreas críticas del código.


-funcionamiento-
-

El programa utiliza un enfoque híbrido:

C maneja la lógica general del programa.
Assembly ejecuta operaciones de bajo nivel, como la simulación de la captura de pantalla.
Cuando se ejecuta el programa, imprimirá mensajes indicando que la captura de pantalla está en curso, llamando a las funciones en Assembly que manejarían el acceso al hardware en un entorno real.



-Instalación y Compilación
-

1/Clona este repositorio:
--------------------------------------------------------------------------------

git clone https://github.com/usuario/ScreenLoggerHybrid.git
    
cd ScreenLoggerHybrid/src

--------------------------------------------------------------------------------

2/Compila el proyecto:
--------------------------------------------------------------------------------

make

--------------------------------------------------------------------------------

Ejecuta el programa:
--------------------------------------------------------------------------------

./screen_logger

--------------------------------------------------------------------------------


Requisitos del Sistema
-

Compilador C: GCC o cualquier compilador compatible con C.
NASM: Ensamblador para compilar el código Assembly.
Sistema Operativo: Linux (o un entorno compatible con la arquitectura x86_64).




Propósito y Ética
-

Este proyecto tiene fines educativos. Fue desarrollado para demostrar técnicas de programación de bajo nivel e ilustrar los riesgos potenciales de seguridad asociados con el uso indebido de código malicioso.

NO está destinado a ser utilizado con fines maliciosos o ilegales. Todo uso de este proyecto debe cumplir con las normativas legales y éticas vigentes.


Contribuciones
-

Si deseas contribuir al proyecto, puedes realizar un pull request o abrir un issue para sugerencias de mejora.
