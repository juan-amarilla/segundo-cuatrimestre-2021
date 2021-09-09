//amarilla juan sebastian 1C

#include "funcionesNumericas.h"

void ingresarNumerosAleatoria(int numeros[])
{
	char seguir;
	int posicion;

	do
	{
		printf("Ingrese la posicion: \n");
		scanf("%d", &posicion);

		printf("Ingrese el numero: \n");
		scanf("%d", &numeros[posicion - 1]);

		while(numeros[posicion - 1] == 0)
		{
			printf("Error, Ingrese el numero distinto a cero: \n");
			scanf("%d", &numeros[posicion - 1]);

		}

		printf("Quiere seguir: \n");
		fflush(stdin);
		scanf("%c", &seguir);

	} while (seguir == 's');

}

void inicializarIndice(int numeros[], int tam)
{
	int i;

	for(i=0;i<tam;i++)
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

int sumaAntecesorDesdeNegativo(int numeros[], int tam)
{
	int i;
	int flag;
	int menor;
	int valorRestado;

	flag = 0;

	for(i=0;i<tam;i++)
	{
		if((flag == 0 && numeros[i] < 0) || (menor > numeros[i]))
		{
			menor = numeros[i];
			flag = 1;
		}

	}

    for(i=menor;i<0;i++)
    {
    	valorRestado = i + 1;
    	menor = menor + valorRestado;

    }

	return menor;
}
