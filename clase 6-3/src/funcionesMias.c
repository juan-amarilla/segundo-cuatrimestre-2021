//amarilla juan sebastian 1C

#include "funcionesMias.h"

int ingresarDatos(char mensaje[], char dato[])
{
	int retorno;

	retorno = 0;

	printf("%s", mensaje);
	gets(dato);

	if(isalpha(dato[0])!=0)
	{
		retorno = 1;
	}

	return retorno;
}

void mostrarDatos(char apellidoNombre[], char nombre[], char apellido[])
{
	strlwr(nombre);
	strlwr(apellido);
	nombre[0] = toupper(nombre[0]);
	apellido[0] = toupper(apellido[0]);
	mayusculasAutomaticos(nombre);
	mayusculasAutomaticos(apellido);
    strcpy(apellidoNombre, apellido);
	strcat(apellidoNombre, ", ");
	strcat(apellidoNombre, nombre);
	printf("-El nombre completo es: %s\n", apellidoNombre);

}

void mayusculasAutomaticos(char apellidoNombre[])
{
	int i;

	for(i=0;i<30;i++)
	{

        if(isspace(apellidoNombre[i]) != 0)
		{
			apellidoNombre[i+1]= toupper(apellidoNombre[i+1]);

		}
	}
}
