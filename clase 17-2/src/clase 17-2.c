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

int remover(int* pArray, int* tam, int entero);

int main(void)
{
	int entero;
	int i;
	int* pArray;
	int retorno;
	int tam;

	tam = 5;

	entero = 2;

	setbuf(stdout,NULL);

	pArray = (int*) malloc(sizeof(int)*tam);

	for(i=0;i<tam;i++)
	{
	    *(pArray+i) = i + 1;
		printf("numero: %d \n", *(pArray+i));

	}

	retorno = remover(pArray, &tam, entero);

	printf("estructurado de nuevo: \n");

	if(pArray != NULL && retorno == 1)
	{
		for(i=0;i<tam;i++)
		{
            printf("numero estructurado: %d \n", *(pArray+i));
		}

	}

	return 0;
}

int remover(int* pArray, int* tam, int entero)
{
	int i;
	int j;
	int retorno;

	retorno = -1;

	if(pArray != NULL)
	{
		for(i = 0;i<*tam; i++)
		{
			if(*(pArray+i) == entero)
			{
				for(j = i;j<*tam; j++)
				{
					*(pArray+j) = *(pArray+j+1);

				}

				retorno = 1;
				pArray = (int*) realloc(pArray, sizeof(int)*(*tam-1));
				*tam = *tam - 1;
				break;

			}

		}

	}

	return retorno;

}
