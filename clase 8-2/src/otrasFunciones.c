//amarilla juan sebastian 1C

#include "otrasFunciones.h"

void mensajeEstado(int estado, char mensaje[], char error[])
{
	if(estado == 1)
	{
	  printf("%s", mensaje);
	}

	else
	{
		printf("%s", error);
	}
}

void menu()
{
   printf("1-Alta producto\n");
   printf("2-Baja producto\n");
   printf("3-Modificar producto\n");
   printf("4-Listado de productos. \n");
   printf("5-Listado de productos por precio.\n");
   printf("6-Listado de productos por descripcion. \n");
   printf("7-Salir.\n");

}

int validarNumeroEntero(int* numeroEntero, char numero[])
{
	int i;
	int validacion;
	int entero;

	i = 0;
	validacion = 1;

	while (numero[i] != '\0')
	{
		if(numero[i]<'0' || numero[i]>'9')
		{
			validacion=0;
			break;
		}

		i++;

	}

	if(validacion==1)
	{
		entero=atoi(numero);
		*numeroEntero=entero;

	}


	return validacion;
}

int validarNumeroFlotante(float* numeroFlotante, char numero[])
{
	int validacion;
	int i;
	int flag;
	float flotante;

	validacion = 1;
	i = 0;
	flag = 0;

	while(numero[i] != '\0')
	{
		   if (numero[i] == '.' && flag == 0)
		   {
		    	  flag = 1;
		          i++;
		          continue;

		   }

		   if(numero[i] < '0' || numero[i] > '9')
		   {
		    	  validacion=0;
		          break;
		   }

		   i++;
	}

	if(validacion==1)
	{
			flotante=atof(numero);
			*numeroFlotante=flotante;

	}

	return validacion;

}

int validarLetras(char letras[], char caracter[])
{
	int validacion;
	int i;

	validacion = 1;
	i = 0;

	while(caracter[i]!='\0')
	{
	     if((caracter[i]<'a' || caracter[i]>'z') && (caracter[i]<'A' || caracter[i]>'Z') && (caracter[i]!=' '))
	     {
	    	   validacion=0;
	           break;
	     }

	     i++;
	}

	if(validacion==1)
	{
	   strcpy(letras, caracter);

	}

	return validacion;
}
