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

//setbuf(stdout, NULL);

int main(void) {

	float numeroUno;
    float numeroDos;
	float numeroTres;

    printf("Ingrese el primer numero: \n ");
	fflush(stdout);
	scanf("%f", &numeroUno);

	printf("Ingrese el segundo numero: \n ");
	fflush(stdout);
	scanf("%f", &numeroDos);

	printf("Ingrese el tercer numero: \n ");
	fflush(stdout);
	scanf("%f", &numeroTres);

	if(numeroUno > numeroDos && numeroUno < numeroTres)
	{
		printf("El numero del medio es %.2f\n", numeroUno);

	}

	else
	{
		if(numeroUno < numeroDos && numeroUno > numeroTres)
		{
			printf("El numero del medio es %.2f\n", numeroUno);
		}

	}

	//// espacio

	if(numeroDos > numeroUno && numeroDos < numeroTres)
	{
		printf("El numero del medio es %.2f\n", numeroDos);

	}

	else
	{
		if(numeroDos < numeroUno && numeroDos > numeroTres)
		{
			printf("El numero del medio es %.2f\n", numeroDos);
		}

	}

	//// espacio

	if(numeroTres > numeroUno && numeroTres < numeroDos)
	{
		printf("El numero del medio es %.2f\n", numeroTres);

	}

	else
	{
		if(numeroTres < numeroUno && numeroTres > numeroDos)
		{
			printf("El numero del medio es %.2f\n", numeroTres);
		}

	}

	if(numeroUno == numeroDos || numeroUno == numeroTres)
	{
		printf("No hay numero del medio");

	}


    return 0;
}
