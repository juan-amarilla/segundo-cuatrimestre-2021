/*
============================================================================
amarilla juan sebastian 1C

Ejercicio 3-4:
Especializar la función anterior para que permita validar el entero
ingresado en un rango determinado.

============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int retornarEntero(int, int);

int main(void)
{
	int numero;

	setbuf(stdout, NULL);

	numero=retornarEntero(1, 100);

	printf("El numero retornado es: %d", numero);
	return 0;
}

int retornarEntero(int T1, int T2)
{
	int entero;

	printf("Ingrese un numero: \n");
	scanf("%d", &entero);

	while(entero < T1 || entero > T2)
	{
		printf("Error, ingrese un numero valido entre 1 y 100 inclusive: \n");
		scanf("%d", &entero);

	}

	return entero;
}
