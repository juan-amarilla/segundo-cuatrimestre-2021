/*
 ============================================================================
 amarilla juan sebastian 1C

 Ejercicio 5-1:
 Pedir el ingreso de 5 números. Mostrarlos y
 calcular la sumatoria de los mismos.

 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#define TAM 5

void ingresarNumeros(float numeros[], int T);
void mostrarNumeros(float numeros[], int T);
void sumatoria(float numeros[], int T);

int main(void)
{
	float numeros[TAM];

	setbuf(stdout, NULL);

	ingresarNumeros(numeros, TAM);
	mostrarNumeros(numeros, TAM);
	sumatoria(numeros, TAM);

	return 0;
}

void ingresarNumeros(float numeros[], int T)
{
	int i;

	for (i = 0; i < T; i++)
	{
		printf("Ingrese el numero: \n");
		scanf("%f", &numeros[i]);

	}

}

void mostrarNumeros(float numeros[], int T)
{
	int i;

	for (i = 0; i < T; i++)
	{
		printf("El valor del indice %d es %.2f \n", i, numeros[i]);
	}
}

void sumatoria(float numeros[], int T)
{
	int i;
	float total;

	total = 0;

	for (i = 0; i < T; i++)
	{
		total += numeros[i];
    }

	printf("La sumatoria de todos los numeros es %.2f", total);

}
