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
#define TAM 4

int* agregar(int array[], int tam, int entero, int indice);

int main(void)
{

	int entero;
	int indice;
	int array[TAM] = {1, 5, 4, 9};
	int i;
	int* pArray;

	entero = 10;
	indice = 2;

	setbuf(stdout,NULL);

	for(i=0;i<TAM;i++)
	{
		printf("numero: %d \n", array[i]);

	}

	pArray = agregar(array, TAM, entero, indice);

	printf("estructurado de nuevo: \n");

	if(pArray != NULL)
	{
		for(i=0;i<TAM+1;i++)
		{
	        printf("numero estructurado: %d \n", *(pArray+i));
		}

	}
}

int* agregar(int array[], int tam, int entero, int indice)
{
	int i;
	int* pArray;

	if(tam > 1)
	{
		pArray = (int*) malloc(sizeof(int)*(tam+1));
	}


	if(pArray != NULL)
	{
		for(i = 0; i<tam+1; i++)
		{
			if(i < indice)
			{
				*(pArray+i) = array[i];

			}

			else
			{
				if(i > indice)
				{
					*(pArray+i) = array[i-1];
				}

				else
				{
					*(pArray+i) = 10;
				}

			}

		}

	}

	return pArray;

}
