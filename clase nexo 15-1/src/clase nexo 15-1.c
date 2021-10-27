/*
============================================================================
amarilla juan sebastian 1C

1-Realizar una función que reciba un puntero a char y
dos char.
La función
deberá reemplazar en la cadena cada ocurrencia del primer
carácter recibido,
por el segundo.
Retornando la cantidad de reemplazos o -1 en caso de error.

Versión 2. Utilizar aritmetica de punteros

============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int intercambio(char* caracter, char cadenaACambiarUno, char cadenaACambiarDos);

int main(void)
{
	/*char* caracter={"juan"};
	char cadenaACambiarUno='n';
	char cadenaACambiarDos='y';
	int contador;
	setbuf(stdout, NULL);

	contador = intercambio(caracter, cadenaACambiarUno, cadenaACambiarDos);

	if(contador == -1)
	{
		printf("contador: %d\n", contador);
	}

	else
	{
		printf("nombre %s - contador: %d\n", caracter, contador);
	}*/


	return 0;
}

int intercambio(char* caracter, char cadenaACambiarUno, char cadenaACambiarDos)
{
	int retorno;
	int i;
	int largo;

	retorno = -1;

	largo = strlen(caracter);

	if(caracter != NULL)
	{
		retorno = 0;

		for(i=0;i<largo;i++)
		{
			if(*(caracter+i) == cadenaACambiarUno)
			{
					*(caracter+i) = cadenaACambiarDos;
					retorno++;

			}

		}

	}

	return retorno;

}
