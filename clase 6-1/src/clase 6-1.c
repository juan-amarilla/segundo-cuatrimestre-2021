/*
============================================================================
amarilla juan sebastian 1C

Ejercicio 6-1:
Disponemos de dos variables numéricas (a y b).
Realizar un algoritmo que permita el intercambio de
valores de dichas variables.

============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "funcionesMias.h"

int main(void)
{
	int a;
	int b;

	a=0;
	b=0;

	setbuf(stdout, NULL);

	a = ingresarEntero("Ingrese el primer numero \n", a);
	b = ingresarEntero("Ingrese el segundo numero \n", b);
	intercambioDeValores(a, b);

	return 0;
}
