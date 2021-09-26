//amarilla juan sebastian 1C

#include "ingresarDatos.h"

int pedirEntero(int entero, char mensaje[])
{
    printf("%s", mensaje);
    scanf("%d", &entero);

	return entero;
}

float pedirFlotante(float flotante, char mensaje[])
{
	printf("%s", mensaje);
	scanf("%f", &flotante);

	return flotante;
}

void pedirCadena(char cadena[], char mensaje[])
{
    printf("%s", mensaje);
    fflush(stdin);
    gets(cadena);
}

void pedirEnteroValidado(char cadena[], char mensaje[], int* numero)
{
	int estado;

	printf("%s", mensaje);
	fflush(stdin);
	gets(cadena);

	estado = validarNumeroEntero(numero, cadena);

	while(estado == 0)
	{
		printf("Error: %s", mensaje);
		fflush(stdin);
		gets(cadena);
		estado = validarNumeroEntero(numero, cadena);
	}
}

void pedirFlotanteValidado(char cadena[], char mensaje[], float* numero)
{
	int estado;

	printf("%s", mensaje);
	fflush(stdin);
	gets(cadena);

	estado = validarNumeroFlotante(numero, cadena);

	while(estado == 0)
	{
		printf("Error: %s", mensaje);
		fflush(stdin);
		gets(cadena);
		estado = validarNumeroFlotante(numero, cadena);
	}
}

void pedirCadenaValidado(char cadena[], char mensaje[], char cadenaValidado[])
{
	int estado;

    printf("%s", mensaje);
    fflush(stdin);
    gets(cadena);

    estado = validarAlfaNumerico(cadenaValidado, cadena);

    while(estado == 0)
    {
    	printf("Error: %s", mensaje);
    	fflush(stdin);
    	gets(cadena);
    	estado = validarAlfaNumerico(cadenaValidado, cadena);
    }
}
