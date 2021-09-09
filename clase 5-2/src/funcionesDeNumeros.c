//amarilla juan sebastian 1C

#include "funcionesDeNumeros.h"

void ingresarNumeros(int numeros[], int T, int minimo, int maximo)
{
	int i;

	for (i = 0; i < T; i++)
	{
		printf("Ingrese el numero: \n");
		scanf("%d", &numeros[i]);

		while(numeros[i] < minimo || numeros[i] > maximo)
		{
				printf("Error, ingrese el numero: \n");
				scanf("%d", &numeros[i]);
		}

	}

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

	if(numero % 2 == 0)
	{
		retorno = 1;
	}

	else
	{
	    retorno = 0;

	}

	return retorno;
}
