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

int main()
{
    int numeroUno;
    int numeroDos;
    int resultado;

    printf("Ingrese el primer numero entero:\n ");
    fflush(stdout);
    scanf("%d", &numeroUno);

    printf("Ingrese el segundo numero entero:\n ");
    fflush(stdout);
    scanf("%d", &numeroDos);

    resultado = numeroUno + numeroDos;

    printf("El numero resultante es: %d", resultado);

    return 0;
}

