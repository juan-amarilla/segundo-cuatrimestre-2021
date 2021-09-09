/*
============================================================================
amarilla juan sebastian 1C

Ejercicio 5-2:
Pedir el ingreso de 10 números enteros entre -1000 y 1000. Determinar:

a)	Cantidad de positivos y negativos.
b)	Sumatoria de los pares.
c)	El mayor de los impares.
d)	Listado de los números ingresados.
e)	Listado de los números pares.
f)	Listado de los números de las posiciones impares.

Se deberán utilizar funciones y vectores.

============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "funcionesDeNumeros.h"
#define TAM 10
#define MIN -1000
#define MAX 1000

int main(void)
{
	int numeros[TAM];
	int contadorPositivos;
	int contadorNegativos;
	int total;
	int mayorDeImpar;

	contadorPositivos = 0;
	contadorNegativos = 0;

	setbuf(stdout, NULL);

	ingresarNumeros(numeros, TAM, MIN, MAX);
	contadorPositivos = cantidadDePositivos(numeros, TAM, contadorPositivos);
	contadorNegativos = cantidadDeNegativos(numeros, TAM, contadorNegativos);
    total = sumatoriaDePares(numeros, TAM);
    mayorDeImpar = mayorImpar(numeros, TAM);

    printf(" La cantidad de positivos son: %d\n", contadorPositivos);
    printf(" La cantidad de negativos son: %d\n", contadorNegativos);
    printf(" La sumatoria de los pares son: %d\n", total);

    if(mayorDeImpar % 2 != 0)
    {
       printf(" El mayor de impares es: %d\n", mayorDeImpar);
    }

    mostrarNumerosIngresados(numeros, TAM);
    mostrarNumerosIngresadosPares(numeros, TAM);
    mostrarNumerosIngresadosDeIndiceImpar(numeros, TAM);

	return 0;
}
