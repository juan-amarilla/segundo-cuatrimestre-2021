/*
============================================================================
amarilla juan sebastian 1C

Ejercicio 3-3:
Crear una función que pida el ingreso de un entero y lo retorne.

============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#define T 28

int retornarEntero();
float retornarFlotante();
char retornarCaracter();

int main(void)
{
	char caracter;

	setbuf(stdout, NULL);

	caracter=retornarCaracter();

	printf("El caracter retornado es: %c", caracter);

	return 0;
}

int retornarEntero()
{
	int entero;

	printf("Ingrese un numero: \n");
	scanf("%d", &entero);

	return entero;
}

float retornarFlotante()
{
	float flotante;

	printf("Ingrese un numero: \n");
	scanf("%f", &flotante);

	return flotante;
}

char retornarCaracter()
{
	char caracter;

	printf("Ingrese un caracter: \n");
	scanf("%c", &caracter);

	return caracter;
}
