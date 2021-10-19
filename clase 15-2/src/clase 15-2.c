/*
============================================================================
amarilla juan sebastian 1C

Ejercicio 15-2:
Realizar una función que reciba como parámetro un puntero a entero.
La función le pedirá al usuario que cargue un valor por medio del
puntero.
Retornará si pudo cargarlo o no.

============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int recibirPuntero(int* pNumero);

int main(void)
{
	int estado;
	int* pNumero;
	int inicializado;

	setbuf(stdout, NULL);

	inicializado = -1;
	pNumero = &inicializado;

	estado = recibirPuntero(pNumero);

	if(estado == 1)
	{
		printf("Ingreso con exito \n");

	}

	else
	{
		printf("Ingreso sin exito \n");
	}
	return 0;
}

int recibirPuntero(int* pNumero)
{
	int retorno;

	retorno = 0;

	printf("ingrese un numero: \n");
	scanf("%d", pNumero);

	if(pNumero != NULL)
	{
		retorno = 1;

	}

	return retorno;

}
