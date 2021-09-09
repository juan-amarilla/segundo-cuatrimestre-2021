//amarilla juan sebastian 1C

#include "funcionesMias.h"

void ingresarNumeros(int numeros[], int T) {
	int i;

	for (i = 0; i < T; i++) {
		printf("Ingrese el numero: \n");
		scanf("%d", &numeros[i]);

	}

}

void ordenamiento(int numeros[], int T) {
	int i;
	int j;
	int auxiliar;

	for (i = 0; i < 10 - 1; i++)
	{

		for (j = i + 1; j < 10; j++)
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

    for (i=0;i<10;i++)
	{
		if(numeros[i]>0)
	    {
			   printf("el numero positivo es %d\n", numeros[i]);

	    }

	}

}

void listarDecrecienteNegativo(int numeros[], int T)
{
	int i;

	for (i=0;i<10;i++)
    {
		if(numeros[i]<0)
		{
				   printf("el numero negativo es %d\n", numeros[i]);

		}

	}

}
