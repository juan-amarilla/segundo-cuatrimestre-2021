/*
============================================================================
amarilla juan sebastian 1C

Ejercicio 3-5:
Realizar un programa en donde se puedan utilizar los prototipos
de la función Sumar en sus 4 combinaciones:
int Sumar1(int, int)
int Sumar2(void)
void  Sumar3(int, int)
void Sumar4(void)
============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int sumar1(int, int);
int sumar2();
void sumar3(int, int);
void sumar4();

int main(void)
{
	int numeroUno;
	int numeroDos;
	int resultadoUno;
	int resultadoDos;

	setbuf(stdout, NULL);

	printf("Ingrese el primer numero: \n");
	scanf("%d", &numeroUno);

	printf("Ingrese el segundo numero: \n");
	scanf("%d", &numeroDos);

	resultadoUno = sumar1(numeroUno, numeroDos);
	resultadoDos = sumar2();
	sumar4();
	sumar3(numeroUno, numeroDos);

    printf("El tercer resultado es: %d \n", resultadoUno);
    printf("El cuarto resultado es: %d \n", resultadoDos);

	return 0;
}

int sumar1(int numeroUno, int numeroDos)
{
	int resultado;

	resultado = numeroUno + numeroDos;

    return resultado;
}

int sumar2()
{
	int numeroUno;
	int numeroDos;
	int resultado;

	printf("Ingrese el tercer numero: \n");
	scanf("%d", &numeroUno);

	printf("Ingrese el cuarto numero: \n");
	scanf("%d", &numeroDos);

	resultado = numeroUno + numeroDos;

	return resultado;
}

void sumar3(int numeroUno, int numeroDos)
{
	int resultado;

	resultado = numeroUno + numeroDos;

	printf("El segundo resultado es: %d \n", resultado);

}

void sumar4()
{
	int numeroUno;
	int numeroDos;
	int resultado;

	printf("Ingrese el quinto numero: \n");
	scanf("%d", &numeroUno);

	printf("Ingrese el sexto numero: \n");
	scanf("%d", &numeroDos);

	resultado = numeroUno + numeroDos;

	printf("El primer resultado es: %d \n", resultado);

}
