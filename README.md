# 🧮 Paralelización con OpenMP

Este programa en C demuestra el uso de **OpenMP** para realizar operaciones paralelas utilizando múltiples hilos. Está enfocado en dos tareas principales:

## 🔧 Funcionalidades

1. **Definición dinámica del número de hilos**  
   El usuario puede ingresar desde teclado cuántos hilos desea utilizar. Esto permite ajustar la paralelización según las capacidades del sistema o el objetivo del análisis.

2. **Suma paralela de valores enteros**  
   Utilizando la directiva `#pragma omp parallel for`, se realiza una operación de suma en paralelo.  
   Cada hilo toma un valor base (`a = 50`) y le suma el índice de iteración `i`. El resultado y el identificador del hilo se imprimen para mostrar cómo se divide el trabajo.

## 📚 Archivos del proyecto

- `ompLab_Alvarez.c`: contiene la función `main()` y ejecuta el programa.
- `OpenMPLab.c`: contiene las funciones auxiliares (`definirHilosUsuario`, `sumaParalela`).
- `OpenMPLab.h`: encabezados y variable compartida `hilos`.

## 🧠 Objetivo

El objetivo del proyecto es introducir al estudiante en el uso básico de OpenMP para dividir tareas sencillas y observar el comportamiento de los hilos en tiempo de ejecución.

