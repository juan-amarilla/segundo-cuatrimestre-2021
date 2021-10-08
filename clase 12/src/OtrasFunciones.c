//amarilla juan sebastian 1C

#include "OtrasFunciones.h"

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
   printf("7-El/los  productos m�s caros. \n");
   printf("8-Precio promedio por tipo de producto. \n");
   printf("9-El/los  productos m�s caros. \n");
   printf("10-Los productos que cuestan 700. \n");
   printf("11-Precio promedio por tipo de producto. \n");
   printf("12-De los Iphone el m�s barato. \n");
   printf("13-Los productos MADE IN CHINA.\n");
   printf("14-Las MAC que cuestan m�s de 700 USD.\n");
   printf("15-El/Los Accesorios m�s caros.\n");
   printf("16-El listado de todos los productos con la descripci�n del tipo.\n");
   printf("17-Por cada tipo la lista de productos.\n");
   printf("18-El/los tipos de productos con mas productos importados.\n");
   printf("19-La nacionalidad que solo fabrica Iphone.");
   printf("20-Los productos ordenados por nacionalidad alfab�ticamente.");
   printf("21-La nacionalidad con m�s tipos de productos fabricados.");
   printf("22-El precio promedio de productos por nacionalidad");
   printf("23-Alta,baja y modificaci�n de TIPO");
   printf("24-Alta,baja y modificaci�n de NACIONALIDAD");
   printf("25-Salir.\n");

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
		if(isdigit(numero[i]) != 1)
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

		   if(isdigit(numero[i]) != 1)
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
	     if(isalpha(caracter[i]) == 0 && isdigit(caracter[i]) != 1)
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

int validarAlfaNumerico(char letras[], char caracter[])
{
	int validacion;
	int i;

	validacion = 1;
	i = 0;

	while(caracter[i]!='\0')
	{
		  if((isdigit(caracter[i]) != 1) && (isalpha(caracter[i]) == 0) && (isspace(caracter[i]) != 0))
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
