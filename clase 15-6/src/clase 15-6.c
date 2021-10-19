/*
============================================================================
amarilla juan sebastian 1C

Ejercicio 15-6
Realizar una función que reciba como
parámetros dos vectores.
La función deberá determinar si el
segundo vector está contenido en el primero.

============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#define TAM 2

int determinarIgualdadDeVector(int vector[], int vectorDos[]);

int main(void)
{
	int vector[TAM] = {111, 11};
	int vectorDos[TAM] = {111, 11};
	int estado;

	setbuf(stdout, NULL);

	estado = determinarIgualdadDeVector(vector, vectorDos);

	if(estado == 1)
	{
       printf("Son iguales \n");
	}

	else
	{
		printf("No son iguales \n");
	}

	return 0;
}

int determinarIgualdadDeVector(int vector[], int vectorDos[])
{
	int retorno;

	retorno = 0;

	if(*vector == *vectorDos)
	{
		retorno = 1;

	}

	return retorno;

}
