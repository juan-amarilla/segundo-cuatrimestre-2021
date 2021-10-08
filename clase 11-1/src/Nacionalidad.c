// amarilla juan sebastian 1C

#include "Nacionalidad.h"

int verificarNacionalidad(eNacionalidad unaNacionalidad[], int tam, int id)
{
	int retorno;
	int i;

	retorno = -1;

	for(i=0;i<tam;i++)
	{
		if(unaNacionalidad[i].idNacionalidad == id)
		{
			retorno = i;
			break;
		}

	}

	return retorno;

}
