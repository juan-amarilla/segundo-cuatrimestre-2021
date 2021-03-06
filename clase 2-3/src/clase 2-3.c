/*
 ============================================================================
amarilla juan sebastian 1C

Ejercicio 2-3:
Debemos alquilar el servicio de transporte para llegar a Mar del Plata
con un grupo de personas,
de cada persona debemos obtener los siguientes datos:

n?mero de cliente,
estado civil ('s' para soltero", 'c' para casado o 'v' viudo),
edad( solo mayores de edad, m?s de 17),
temperatura corporal (validar por favor)
y sexo ('f' para femenino, 'm' para masculino, 'o' para no binario).
NOTA: El precio por pasajero es de $600.
Se debe informar (solo si corresponde):
a) La cantidad de personas con estado "viudo" de m?s de 60 a?os.
b) el n?mero de cliente y edad de la mujer soltera m?s joven.
c) cu?nto sale el viaje total sin descuento.
d) si hay m?s del 50% de los pasajeros que tiene m?s de 60 a?os ,
el precio final tiene un descuento del 25%,
que solo mostramos si corresponde.

 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#define PRECIO 600
#define T 3

int main(void) {

	int i;
    int numeroCliente;
    char estadoCivil;
    int edad;
    int temperatura;
    char genero;
    int contadorViudoMayor;

    int numeroClienteMujer;
    int edadMujer;
    int flag;

    float precioTotal;

    float precioTotalConDescuento;
    float descuento;
    int contadorMayor;
    int contadorMenor;

    contadorViudoMayor = 0;
    flag=0;

    contadorMayor = 0;
    contadorMenor = 0;

    setbuf(stdout, NULL);

    for (i=0;i<T;i++)
    {
    	printf("Ingrese el numero de cliente: \n");
    	fflush(stdin);
    	scanf("%d", &numeroCliente);

    	while(numeroCliente < 1)
    	{
    	    printf("Error, ingrese de nuevo el numero de cliente: \n");
    	    fflush(stdin);
    	    scanf("%d", &numeroCliente);
    	}

    	printf("Ingrese el estado civil: \n");
    	printf(" 's' es soltero \n");
    	printf(" 'c' es casado \n");
    	printf(" 'v' es viudo \n");
    	fflush(stdin);
    	scanf("%c", &estadoCivil);

    	while(estadoCivil != 's' && estadoCivil != 'c' && estadoCivil != 'v')
    	{
    	    	printf("Error, Ingrese el estado civil de nuevo: \n");
    	    	printf(" 's' es soltero \n");
    	    	printf(" 'c' es casado \n");
    	    	printf(" 'v' es viudo \n");
    	    	fflush(stdin);
    	    	scanf("%c", &estadoCivil);
    	}

    	printf("Ingrese la edad: \n");
    	fflush(stdin);
    	scanf("%d", &edad);

    	while(edad < 18)
    	{
    	    printf("Error, ingrese de nuevo la edad: \n");
    	    fflush(stdin);
    	    scanf("%d", &edad);
    	}

    	printf("Ingrese la temperatura: \n");
    	fflush(stdin);
    	scanf("%d", &temperatura);

    	while(temperatura < 37 || temperatura > 37)
    	{
    	    printf("Error, ingrese de nuevo la temperatura: \n");
    	    fflush(stdin);
    	    scanf("%d", &temperatura);
    	}

    	printf("Ingrese el genero: \n");
    	printf(" 'f' es femenino \n");
    	printf(" 'm' es masculino \n");
    	printf(" 'o' es no binario \n");
    	fflush(stdin);
    	scanf("%c", &genero);

    	while(genero != 'f' && genero != 'm' && genero != 'o')
    	{
    	    printf("Error, Ingrese el genero de nuevo: \n");
    	    printf(" 'f' es femenino \n");
    	    printf(" 'm' es masculino \n");
    	    printf(" 'o' es no binario \n");
    	    fflush(stdin);
    	    scanf("%c", &genero);
    	}

    	if(estadoCivil == 'v' && edad > 60)
    	{
            contadorViudoMayor++;
    	}

    	if(genero == 'f' && estadoCivil == 's' && flag == 0)
    	{
    		numeroClienteMujer = numeroCliente;
			edadMujer = edad;
			flag = 1;
    	}

    	else
    	{
    		if(genero == 'f' && estadoCivil == 's' && flag == 1 && edad < edadMujer)
    		{
    			numeroClienteMujer = numeroCliente;
                edadMujer = edad;
    		}
    	}

    	if(edad > 60)
    	{
    		contadorMayor++;

    	}

    	else
    	{
    		contadorMenor++;
    	}


    }

    precioTotal = i * PRECIO;

    if(contadorViudoMayor > 0)
    {
    	 printf("La cantidad de viudos de mas de 60 de a?os son %d\n", contadorViudoMayor);

    }

    if(flag == 1)
    {
    	printf("La edad es %d y el numero de cliente es %d de la mujer soltera mas joven\n", edadMujer, numeroClienteMujer);

    }


    printf("El precio sin descuento es %.2f\n", precioTotal);

    if(contadorMayor > contadorMenor)
    {
    	descuento = 25 * precioTotal / 100;
    	precioTotalConDescuento = precioTotal - descuento;
    	printf("el precio total con descuento es %.2f", precioTotalConDescuento);

    }

	return 0;
}
