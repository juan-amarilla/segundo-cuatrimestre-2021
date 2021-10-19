/*
============================================================================
amarilla juan sebastian 1C

Ejercicio 15-5
Escriba una función que reciba dos números enteros y los
devuelva ordenados.
Es decir que en el primer parámetro debe devolver
el menor valor y en el 2do. el mayor.

============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int menorMayorDevuelto(int* pMenor, int* pMayor);

int main(void)
{
	int numero;
	int numeroDos;
	int retorno;

	setbuf(stdout, NULL);

	numero = 2;
	numeroDos = 1;

	printf("%d \n", numero);
	printf("%d \n\n", numeroDos);

	retorno = menorMayorDevuelto(&numero, &numeroDos);

	if(retorno == 1)
	{
		printf("Ordenado: \n");
		printf("%d \n", numero);
		printf("%d \n", numeroDos);

	}


	return 0;
}

int menorMayorDevuelto(int* pMenor, int* pMayor)
{
	int retorno;
	int auxiliar;

	retorno = 0;

	if(*pMenor > *pMayor && pMenor != NULL && pMayor != NULL)
	{
		auxiliar = *pMenor;
		*pMenor = *pMayor;
		*pMayor = auxiliar;
		retorno = 1;

	}

	return retorno;

}
