/*
 ============================================================================
 Name        : clase.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

//fflush(stdout) sirve para manejar bien el buffer de salida

#include <stdio.h>

int main()
{
    int numeroUno;
    int numeroDos;
    int numeroTres;

    printf("Ingrese el primer numero entero:\n ");
    fflush(stdout);
    scanf("%d", &numeroUno);

    printf("Ingrese el segundo numero entero:\n ");
    fflush(stdout);
    scanf("%d", &numeroDos);

    printf("Ingrese el tercer numero entero:\n ");
    fflush(stdout);
    scanf("%d", &numeroTres);

    if(numeroUno > numeroDos && numeroUno > numeroTres)
    {
       printf("El mayor de los numeros es el primero");
    }

    else
    {
        if(numeroDos > numeroUno && numeroDos > numeroTres)
        {
            printf("El mayor de los numeros es el segundo");
        }

        if(numeroTres > numeroUno && numeroTres > numeroDos)
        {
            printf("El mayor de los numeros es el tercero");
        }

        if(numeroUno == numeroDos && numeroUno == numeroTres)
        {

            printf("Todos los numeros son iguales");
        }


    }

    return 0;
}
