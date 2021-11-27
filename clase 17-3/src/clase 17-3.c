/*
============================================================================
amarilla juan sebastian 1C

Ejercicio 17-3: (Push)
Realizar una función que reciba como parámetro un array de enteros,
su tamaño, un valor entero y un índice.
La función se encargará de insertar el valor
entero en el índice especificado.
El array deberá reestructurarse dinámicamente.

valor---->1	 5	4	9
posicion->0	 1	2	3

indice= 2
valor = 10

valor---->1	 5	10	4	9
posicion->0	 1	2	3	4


============================================================================
 */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int agregar(int* pArray, int* tam, int entero, int indice);

int main(void)
{

	int entero;
	int indice;
	int array[4] = {1, 5, 4, 9};
	int i;
	int* pArray;
	int tam;
	int retorno;

	entero = 10;
	indice = 2;
	tam = 4;

	setbuf(stdout,NULL);

	pArray = (int*) malloc(sizeof(int)*tam);
	pArray = array;

	for(i=0;i<tam;i++)
	{
		printf("numero: %d \n", *(pArray+i));

	}

	retorno = agregar(pArray, &tam, entero, indice);

	if(pArray != NULL && retorno == 1)
	{
	    printf("estructurado de nuevo: \n");

		for(i=0;i<tam;i++)
		{
	        printf("numero estructurado: %d \n", *(pArray+i));
		}

	}

	return 0;
}

int agregar(int* pArray, int* tam, int entero, int indice)
{
	int i;
	int retorno;
	int aux;

	retorno = -1;

	//1 >1 5 4 9
	//2 >1 5 10 4 ?
	// resultado > 1 5 10 4 9

	if(pArray != NULL && tam != NULL)
	{
		for(i = 0; i<*tam; i++)
		{
			if(i == indice)
			{
				 aux = *(pArray+i);
				*(pArray+i) = entero;
				*tam = *tam + 1;
				retorno = 1;
			}

			else
			{
				if(i > indice)
				{
					*(pArray+i) = aux;
				}

			}

		}

		pArray = (int*) realloc(pArray, sizeof(int)*(*(tam)+1));

	}

	else
	{
		free(pArray);
		free(tam);
	}

	return retorno;

}
