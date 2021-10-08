//amarilla juan sebastian 1C

#include "TipoProducto.h"

int verificarTipo(eTipoProducto unTipo[], int tam, int id)
{
	int retorno;
	int i;

	retorno = -1;

	for(i=0;i<tam;i++)
	{
		if(unTipo[i].idTipo == id)
		{
			retorno = i;
			break;
		}

	}

    return retorno;

}
