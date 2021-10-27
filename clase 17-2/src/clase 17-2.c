/*
============================================================================
amarilla juan sebastian 1C

Ejercicio 17-2: (Remove)
Realizar una función que reciba como parámetro un array de enteros,
su tamaño y un entero.
La función se encargará de buscar el valor entero y
borrará la primera ocurrencia del mismo.
El array deberá reestructurarse dinámicamente.

valor = 2

valor---->5	 4 '2'	1	3
posicion->0	 1	2	3   4

valor---->5	 4	 1	 3
posicion->0	 1	 2	 3

============================================================================
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#define TAM 5

int* remover(int array[], int tam, int entero);

int main(void)
{
	int entero;
	int array[TAM] = {5, 4, 2, 1, 3};
	int i;
	int* pArray;

	entero = 2;

	setbuf(stdout,NULL);

	for(i=0;i<TAM;i++)
	{
		printf("numero: %d \n", array[i]);

	}

	pArray = remover(array, TAM, entero);

	printf("estructurado de nuevo: \n");

	if(pArray != NULL)
	{
		for(i=0;i<TAM-1;i++)
		{
            printf("numero estructurado: %d \n", *(pArray+i));
		}

	}

	return 0;
}

int* remover(int array[], int tam, int entero)
{
	int i;
	int* pArray;

	pArray = NULL;

	if(tam > 1)
	{
		pArray = (int*) malloc(sizeof(int)*(tam-1));
	}

	else
	{
		return pArray;
	}

	if(pArray == NULL)
	{
		return pArray;
	}

	for(i = 0;i<tam-1; i++)
	{
		if(i < entero)
		{
          *(pArray+i) = array[i];
		}

		else
		{
			*(pArray+i) = array[i+1];
		}

	}

	return pArray;

}
