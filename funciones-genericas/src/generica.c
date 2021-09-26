//amarilla juan sebastian 1C

#include "generica.h"

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

    estado = validarLetras(cadenaValidado, cadena);

    while(estado == 0)
    {
    	printf("Error: %s", mensaje);
    	fflush(stdin);
    	gets(cadena);
    	estado = validarLetras(cadenaValidado, cadena);
    }
}

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

int buscarEstado(int estado)
{
	int retorno;

	retorno = 0;

	if(estado == 1)
	{
		retorno = 1;
	}

	return retorno;
}

void inicializarIndice(int numeros[], int T)
{
	int i;

	for(i=0;i<T;i++)
	{
       numeros[i] = 0;

	}

}

int promedioPositivo(int numeros[], int tam)
{
	int total;
	int promedio;
    int i;
    int contador;

    total = 0;
    contador = 0;
    promedio = 0;

    for(i=0;i<tam;i++)
    {
    	if(numeros[i] > 0)
    	{
    	   total +=  numeros[i];
    	   contador++;
    	}

    }

    if(contador > 0)
    {
       promedio = total / contador;
    }

	return promedio;

}

int cantidadDePositivos(int numeros[], int T, int contador)
{
	int i;
	int validacion;

	for (i = 0; i < T; i++)
	{
		validacion = validacionesSignos(numeros[i]);

		if(validacion == 1)
		{
			contador++;
		}

	}

	return contador;
}

int cantidadDeNegativos(int numeros[], int T, int contador)
{
	int i;
	int validacion;

	for (i = 0; i < T; i++)
	{
	    validacion = validacionesSignos(numeros[i]);

		if(validacion == 0)
		{
			contador++;
		}

	}

	return contador;

}

int sumatoriaDePares(int numeros[], int T)
{
	int i;
	int total;
	int verificacion;

	total = 0;

	for (i = 0; i < T; i++)
	{
		verificacion = verificacionesPar(numeros[i]);

		if(verificacion == 1)
		{
		  total += numeros[i];
		}
    }

	return total;

}

int mayorImpar(int numeros[], int T)
{
   int mayor;
   int i;
   int flag;
   int verificacion;

   flag = 0;

   for (i = 0; i < T; i++)
   {
	   verificacion = verificacionesPar(numeros[i]);

	   if((flag == 0 && verificacion == 0) || (mayor < numeros[i] && verificacion == 0))
	   {
		   mayor = numeros[i];
		   flag = 1;
	   }

   }

   return mayor;
}

void mostrarNumerosIngresados(int numeros[], int T)
{
	int i;

	printf("Listado de numeros ingresados: \n");

	for (i = 0; i < T; i++)
	{
		printf("El valor del indice %d es %d \n", i, numeros[i]);
	}
}

void mostrarNumerosIngresadosPares(int numeros[], int T)
{
	int i;

	printf("Listado de numeros pares: \n");

	for (i = 0; i < T; i++)
	{
		if(numeros[i] % 2 == 0)
		{
			printf("El valor del indice %d es %d \n", i, numeros[i]);
		}
	}
}

void mostrarNumerosIngresadosDeIndiceImpar(int numeros[], int T)
{
	int i;

	printf("Listado de numeros de posicion impar: \n");

	for (i = 0; i < T; i++)
	{
		if(i % 2 != 0)
		{
			printf("El valor del indice %d es %d \n", i, numeros[i]);
		}
	}
}

int validacionesSignos(int numero)
{
	int retorno;

	retorno = -1;

	if(numero > 0)
	{
		retorno = 1;

	}

	else
	{
		if(numero < 0)
		{
		  retorno = 0;
		}

	}

	return retorno;
}

int verificacionesPar(int numero)
{
	int retorno;

	retorno = 0;

	if(numero % 2 == 0)
	{
		retorno = 1;
	}

	return retorno;
}

float calcularSuma(float numeroUno, float numeroDos)
{
	float resultado;

	resultado = numeroUno + numeroDos;

	return resultado;
}

float calcularResta(float numeroUno, float numeroDos)
{
	float resultado;

	resultado = numeroUno - numeroDos;

	return resultado;
}

float calcularDivision(float numeroUno, float numeroDos)
{
	float resultado;

	resultado = numeroUno / numeroDos;

	return resultado;
}

float calcularMultiplicacion(float numeroUno, float numeroDos)
{
	float resultado;

	resultado = numeroUno * numeroDos;

	return resultado;
}

float calcularFactorial(float numero)
{
	int i;
	float factorial;

	factorial=1;

	for (i=numero;i>1;i--)
	{
       factorial = factorial * i;
    }

	return factorial;

}
