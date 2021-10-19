/*
============================================================================
 amarilla juan sebastian 1C

Ejercicio 15-1:
Realizar el ordenamiento de un vector de enteros.
Para ello deberán crear una función que se encargue de realizar
el intercambio de los dos valores que se van a ordenar (función swap),
que solo puede recibir dos parámetros.

============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#define TAM 4

int intercambio(int* numeroUno, int* numeroDos);

int main(void)
{
	int numero[TAM] = {1,8,4,2};
	int estado;
	int i;

	setbuf(stdout, NULL);

	estado = intercambio(&numero[0],&numero[1]);
	estado = intercambio(&numero[2],&numero[3]);

	if(estado == 1)
	{
		for(i=0;i<TAM;i++)
		{
			printf("%d \n", *(numero+i));

		}

	}

	return 0;
}

int intercambio(int* numeroUno, int* numeroDos)
{
	int auxiliar;
	int retorno;

	retorno = 0;

	if(numeroUno != NULL && numeroDos != NULL)
	{
		auxiliar = *numeroUno;
		*numeroUno = *numeroDos;
		*numeroDos = auxiliar;
		retorno = 1;
	}

	return retorno;

}
