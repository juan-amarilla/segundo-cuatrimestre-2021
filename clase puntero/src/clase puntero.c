/*
============================================================================
amarilla juan sebastian 1C


============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

void cargarVector(int*,int);
void mostrarVector(int*,int);

int main(void)
{
	setbuf(stdout, NULL);

	/*int* pNumero;
	int numero;

	numero = 10;

	*pNumero = numero;

	printf("%d \n", &pNumero);
	printf("%d \n", pNumero);
	printf("%d \n", *pNumero);*/

    int vector[5] ={100,2,300,4,5};
    int* pVector;

    pVector = vector;

    cargarVector(pVector, 5);
    mostrarVector(pVector, 5);

	return 0;
}


void cargarVector(int* pVector, int tam)
{
	int i;

	for(i=0;i<tam;i++)
	{
		printf("Ingrese numero: \n");
		scanf("%d", (pVector+i));
	}

}

void mostrarVector(int* pVector, int tam)
{
	int i;

	for(i=0;i<tam;i++)
	{
	   printf("%d \n", *(pVector+i));
	}

}
