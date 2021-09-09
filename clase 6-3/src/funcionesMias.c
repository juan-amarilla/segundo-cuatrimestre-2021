//amarilla juan sebastian 1C

#include "funcionesMias.h"

void ingresarDatos(char mensaje[], char dato[])
{
	printf("%s", mensaje);
	gets(dato);

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
	printf("%s\n", apellidoNombre);

}

void mayusculasAutomaticos(char apellidoNombre[])
{
	int i;
	int validacion;

	for(i=0;i<30;i++)
	{
		validacion = isspace(apellidoNombre[i]);

		if(validacion != 0)
		{
			apellidoNombre[i+1]= toupper(apellidoNombre[i+1]);

		}
	}
}
