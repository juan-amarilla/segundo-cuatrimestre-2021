/*
 ============================================================================
amarilla juan sebastian 1C

Ejercicio 2-2:
Ingresar 10 n�meros enteros, distintos de cero. Mostrar:
a.	Cantidad de pares e impares.
b.	El menor n�mero ingresado.
c.	De los pares el mayor n�mero ingresado.
d.	Suma de los positivos.
e.	Producto de los negativos.

 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#define T 3

int main(void) {

	int numero;
	int i;

	int contadorPar;
	int contadorImpar;

	contadorPar = 0;
	contadorImpar = 0;

    int numeroMenor;

    int numeroMayorPar;
    int flag;

    int sumaPositivos;
    int productoNegativos;

    sumaPositivos = 0;
    productoNegativos = 1;

    flag = 0;

	setbuf(stdout, NULL);

    for(i=0;i<T;i++)
	{
    	printf("Ingrese un numero: \n");
    	fflush(stdin);
    	scanf("%d", &numero);

    	while(numero == 0)
    	{
    		printf("Error, ingrese un numero distinto a cero: \n");
    		fflush(stdin);
    		scanf("%d", &numero);

    	}

    	if(numero % 2 == 0)
    	{
    		contadorPar++;
    	}

    	else
    	{
    		contadorImpar++;

    	}

    	if(i == 0 || numero < numeroMenor)
    	{
    		numeroMenor = numero;
    	}

    	if((numero % 2 == 0 && flag == 0) || (numero % 2 == 0 && numero > numeroMayorPar))
    	{
    		numeroMayorPar = numero;
    		flag = 1;

    	}

    	if(numero > 0)
    	{
           sumaPositivos += numero;
    	}

    	// aca esta mal
    	if(numero < 0)
    	{
    		productoNegativos *= numero;

    	}

	}

    printf("La cantidad de pares son %d y de impares son %d\n", contadorPar, contadorImpar);
    printf("El menor numero ingresado es %d\n", numeroMenor);

    if(flag == 1)
    {
    	printf("De los pares el mayor numero es %d\n", numeroMayorPar);

    }


    printf("La suma de positivos es %d\n", sumaPositivos);
    printf("El producto de negativos es %d\n", productoNegativos);

	return 0;
}
