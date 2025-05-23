/*************************************************************
	Pontifica Universidad Javeriana
	Fecha: 22 de Mamyo de 2025
	Autor: Juan Sebastian Alvarez
	Materia: Sistemas Operativos
	Topico: Uso de OMP OpenMP
	Descripcion: OPenMP es un un modelo de programacion 
	estandar para la programacion paralela de memoria
	compartida.
**************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <omp.h>
#include "OpenMPLab.c"


// Función principal
int main(int argc, char *argv[]) {
    definirHilosUsuario(argc, argv);
    sumaParalela();
    return 0;
}


