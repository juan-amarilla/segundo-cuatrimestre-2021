/*
 ============================================================================
 Name        : clase.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#define T 5

int main(void) {

    int i;
    int numero;
    float promedio;
    int suma;

    suma=0;

    for(i=0;i<T;i++)
    {
    	printf("Ingrese un numero: \n");
    	fflush(stdout);
    	scanf("%d", &numero);
    	suma += numero;

    }

    promedio = (float)suma / i;

    printf("El promedio es %.2f", promedio);

	return 0;
}
