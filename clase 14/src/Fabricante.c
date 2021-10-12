// amarilla juan sebastian

#include "Fabricante.h"

int verificarFabricante(eFabricanteDePantalla unFabricante[], int tam, int id)
{
	int retorno;
	int i;

	retorno = -1;

	for(i=0;i<tam;i++)
	{
		if(unFabricante[i].idFabricante == id)
		{
			retorno = i;
			break;
		}

	}

    return retorno;

}
