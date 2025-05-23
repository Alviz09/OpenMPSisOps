/*************************************************************
\tPontificia Universidad Javeriana
\tFecha: 22 de Mayo de 2025
\tAutor: Juan Sebastian Alvarez
\tMateria: Sistemas Operativos
\tTópico: Uso de OpenMP
\tDescripción: OpenMP es un modelo de programación 
\testándar para la programación paralela de memoria compartida.
**************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <omp.h>
#include "OpenMPLab.h"

// Variable global para definir la cantidad de hilos
int hilos = 1;

// Define la cantidad de hilos a usar según el usuario
void definirHilosUsuario(int argc, char *argv[]) {
    if (argc < 2) {
        printf("Entrada por consola \n\t  $./ejecutable NumHilos\\n");
        exit(0);
    }
    hilos = atoi(argv[1]);
    int maxHilos = omp_get_max_threads();
    omp_set_num_threads(hilos);
    printf("MaxHilos disponibles: %d\t Hilos definidos por el usuario: %d\n", maxHilos, hilos);
}

// Realiza la suma en paralelo usando OpenMP
void sumaParalela(void) {
    int i;
    int a = 50;
    int b = 0;
    const int N = 1000;

    #pragma omp parallel for private(a, i)
    for (i = 0; i < N; i++) {
        b = a + i;
    }

    printf("El valor de a = %d\t el valor de b = %d\t (se espera que sea a=50, b=1049)\n", a, b);
}

/*******************************************
		Conclusiones
El usuario define una cantidad de hilos que usara OpenMP
para realizar una suma en paralelo, al usuario se le muestra
en consoloa los valores actualizados de b y a.

el resultado de b aumenta mas de lo esperado ya que 
********************************************/




