/*
============================================================================
amarilla juan sebastian 1C

Ejercicio 5-3:
Realizar un programa que permita el ingreso de 10 números enteros
distintos de cero.
La carga deberá ser aleatoria
(todos los elementos se inicializan en cero por default).
Determinar el promedio de los positivos,
y del menor de los negativos la suma de los antecesores
(Según la recta numérica de los reales, hasta llegar a cero).
Utilizar funciones y vectores.

============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "funcionesNumericas.h"
#define T 10

int main(void)
{
	int numeros[T];
	int promedio;
	int menor;

	setbuf(stdout, NULL);

	inicializarIndice(numeros, T);
	ingresarNumerosAleatoria(numeros);
	promedio = promedioPositivo(numeros, T);
	menor = sumaAntecesorDesdeNegativo(numeros, T);

	if(promedio > 0)
	{
	  printf("El promedio de los positivos es: %d \n", promedio);
	}

	if(menor < 0)
	{
	  printf("La suma de antecesores desde el menor de los negativos es: %d", menor);
	}

	return 0;
}
