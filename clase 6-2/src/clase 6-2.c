/*
============================================================================
amarilla juan sebastian 1C

Ejercicio 6-2:
Realizar un programa que permita el ingreso de 10 números enteros
(positivos y negativos). Necesito generar un listado de los
números positivos de manera creciente
y negativos de manera decreciente. (Como máximo 4 for)
Ejemplo:
Listado 1 : 4, 5, 6, 10, 18, 29
Listado 2 : -1,-5,-9,-12

============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "funcionesMias.h"
#define T 10

int main(void)
{
	int numeros[T];

	setbuf(stdout, NULL);

	inicializarIndice(numeros, T);
	ingresarNumeros(numeros, T);
	ordenamiento(numeros, T);
	listarCrecientePositivo(numeros, T);
	listarDecrecienteNegativo(numeros, T);

	return 0;
}
