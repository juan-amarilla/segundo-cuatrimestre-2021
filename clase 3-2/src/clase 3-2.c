/*
============================================================================
amarilla juan sebastian 1C

Ejercicio 3-2:
Crear una función que permita determinar si un número es par o no.
La función retorna 1 en caso afirmativo
y 0 en caso contrario. Probar en el main.

============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int determinarSiEsPar(int);

int main(void)
{
	int numero;
	int determinar;

	setbuf(stdout, NULL);

	printf("Ingrese un numero: \n");
	scanf("%d", &numero);

	determinar = determinarSiEsPar(numero);

	if(determinar == 1)
	{
	  printf("El numero es par.");
	}

	else
	{
	  printf("El numero no es par.");
	}

	return 0;
}

int determinarSiEsPar(int numero)
{
	int determinacion;

	if(numero % 2 == 0)
	{
	  determinacion = 1;
	}

	else
	{
	  determinacion = 0;
	}

	return determinacion;
}
