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

int buscarEstadoDeTipo(int estado)
{
	int retorno;

	retorno = 0;

	if(estado == OCUPADO)
	{
		retorno = 1;
	}

	return retorno;
}

int altaTipo(eTipoProducto unTipo[], int tamTip, char cadena[])
{
	int i;
	int retorno;

	retorno = 0;

	for(i=0;i<tamTip;i++)
	{
		if(buscarEstadoDeTipo(unTipo[i].estado) != OCUPADO)
		{
			unTipo[i] = pedirTipo(unTipo[i], cadena);
			retorno = 1;
			break;
		}
	}

	return retorno;
}

eTipoProducto pedirTipo(eTipoProducto unTipo, char cadena[])
{
	pedirEnteroValidado(cadena, "Ingrese ID de tipo: \n", &unTipo.idTipo);
	pedirCadenaValidado(cadena, "Ingrese Descripcion: \n", unTipo.descripcionTipo);
	unTipo.estado = OCUPADO;

	return unTipo;
}

int bajaTipo(eTipoProducto unTipo[], int tamTip, eProducto unProducto[], int tam, char cadena[])
{
	int i;
	int idTipo;
	int retorno;
	int seguro;

	retorno = 0;
	idTipo = -1;

	pedirEnteroValidado(cadena, "Estas seguro de dar de baja? Ingrese el numero 1-SI o 2-NO \n", &seguro);

	if(seguro == 1)
	{
		pedirEnteroValidado(cadena, "Ingrese ID de tipo para la baja: \n", &idTipo);

		for(i=0;i<tamTip;i++)
		{
			if(unTipo[i].idTipo == idTipo && buscarEstadoDeTipo(unTipo[i].estado) != VACIO)
			{
				 unTipo[i].estado = VACIO;
				 retorno = 1;
				 break;
			}
		}

		for(i=0;i<tam;i++)
		{
			if(idTipo == unProducto[i].tipo && buscarEstadoDeTipo(unProducto[i].estado) != VACIO)
			{
				unProducto[i].estado = VACIO;
			}

		}

	}

	else
	{
		printf("No se dio de baja el tipo \n");

	}

	return retorno;

}

int modificarTipo(eTipoProducto unTipo[], int tamTip, char cadena[])
{
	int retorno;
	int seguro;

	pedirEnteroValidado(cadena, "Estas seguro de modificar el Tipo? Ingrese el numero 1-Si o 2-No \n", &seguro);

	if(seguro == 1)
	{
		retorno = modificarUnDatoDeTipo(unTipo, tamTip, cadena);

	}

	else
	{
		printf("La modificacion no se logro \n");
	}

	return retorno;

}

int modificarUnDatoDeTipo(eTipoProducto unTipo[], int tamTip, char cadena[])
{
	int i;
	int retorno;
	int idTipo;

	retorno = 0;

	pedirEnteroValidado(cadena, "Ingrese ID de Tipo para la modificacion: \n", &idTipo);

	for(i=0;i<tamTip;i++)
	{
		if(unTipo[i].idTipo == idTipo && buscarEstadoDeTipo(unTipo[i].estado) != VACIO)
		{

              pedirCadenaValidado(cadena, "Ingrese Descripcion: \n", unTipo[i].descripcionTipo);
			  retorno = 1;
			  break;
        }
	}

	return retorno;

}
