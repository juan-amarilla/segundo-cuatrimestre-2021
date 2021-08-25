/*
 ============================================================================
amarilla juan sebastian 1C

Ejercicio 2-4:
Ingresar 5 caracteres e informar cuantas letras p (minúsculas)
se ingresaron.

 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#define T 5
#include <ctype.h>//me sirve para el tolower y toupper

//fflush(stdin); es para windows
//setbuf(stdout, NULL); sirve para ver los mensajes en consola de eclipse

int main(void) {

	char caracter;
	int contador;
	int i;

	contador = 0;

	setbuf(stdout, NULL);

    for(i=0;i<T;i++)
    {
    	printf("ingrese un caracter: \n");
        fflush(stdin);
    	scanf("%c", &caracter);
    	//tolower;
        //toupper;
    	caracter = tolower(caracter);
    	if(caracter == 'p')
    	{
    	    contador++;

    	}

    }

    printf("Hay %d letras p minusculas", contador);

	return 0;
}
