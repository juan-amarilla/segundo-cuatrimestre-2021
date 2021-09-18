//amarilla juan sebastian 1C

#include "funcionesMias.h"

void ingresarNumeros(int numeros[], int T)
{
	int i;

	for (i = 0; i < T; i++) {
		printf("Ingrese el numero: \n");
		scanf("%d", &numeros[i]);

	}

}

void inicializarIndice(int numeros[], int T)
{
	int i;

	for(i=0;i<T;i++)
	{
       numeros[i] = 0;

	}

}

void ordenamiento(int numeros[], int T)
{
	int i;
	int j;
	int auxiliar;

	for (i = 0; i < T - 1; i++)
	{

		for (j = i + 1; j < T; j++)
		{
            if (numeros[i] > 0)
			{
                if (numeros[i] > numeros[j])
				{
					auxiliar = numeros[i];
					numeros[i] = numeros[j];
					numeros[j] = auxiliar;
			    }
	        }

			if (numeros[i] < 0)
			{
                if (numeros[i] < numeros[j])
				{
					auxiliar = numeros[i];
					numeros[i] = numeros[j];
					numeros[j] = auxiliar;
				}
			}

		}
	}

}

void listarCrecientePositivo(int numeros[], int T)
{
	int i;

	printf("Listado de numeros positivos: \n");

    for (i=0;i<T;i++)
	{

		if(numeros[i]>0)
	    {
		  printf("El numero positivo es %d\n", numeros[i]);

	    }

	}

}

void listarDecrecienteNegativo(int numeros[], int T)
{
	int i;

	printf("Listado de numeros negativos: \n");

	for (i=0;i<T;i++)
    {
		if(numeros[i]<0)
		{
		   printf("El numero negativo es %d\n", numeros[i]);

		}

	}

}
