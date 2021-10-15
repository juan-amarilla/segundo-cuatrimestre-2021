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

int buscarEstadoDeNacionalidad(int estado)
{
	int retorno;

	retorno = 0;

	if(estado == OCUPADO)
	{
		retorno = 1;
	}

	return retorno;
}

int altaNacionalidad(eNacionalidad unaNacionalidad[], int tamNac, char cadena[])
{
	int i;
	int retorno;

	retorno = 0;

	for(i=0;i<tamNac;i++)
	{
		if(buscarEstadoDeNacionalidad(unaNacionalidad[i].estado) != OCUPADO)
		{
			unaNacionalidad[i] = pedirNacionalidad(unaNacionalidad[i], cadena);
			retorno = 1;
			break;
		}
	}

	return retorno;
}

eNacionalidad pedirNacionalidad(eNacionalidad unaNacionalidad, char cadena[])
{
	pedirEnteroValidado(cadena, "Ingrese ID de nacionalidad: \n", &unaNacionalidad.idNacionalidad);
	pedirCadenaValidado(cadena, "Ingrese Descripcion: \n", unaNacionalidad.descripcionNacionalidad);
	unaNacionalidad.estado = OCUPADO;

	return unaNacionalidad;
}

int bajaNacionalidad(eNacionalidad unaNacionalidad[], int tamNac, eProducto unProducto[], int tam, char cadena[])
{
	int i;
	int idNacionalidad;
	int retorno;
	int seguro;

	retorno = 0;
	idNacionalidad = -1;

	pedirEnteroValidado(cadena, "Estas seguro de dar de baja? Ingrese el numero 1-SI o 2-NO \n", &seguro);

	if(seguro == 1)
	{
		pedirEnteroValidado(cadena, "Ingrese ID de nacionalidad para la baja: \n", &idNacionalidad);

		for(i=0;i<tamNac;i++)
		{
			if(unaNacionalidad[i].idNacionalidad == idNacionalidad && buscarEstadoDeNacionalidad(unaNacionalidad[i].estado) != VACIO)
			{
				 unaNacionalidad[i].estado = VACIO;
				 retorno = 1;
				 break;
			}
		}

		bajaNacionalidadDeCascada(unProducto, tam, idNacionalidad);

	}

	else
	{
		printf("No se dio de baja la nacionalidad \n");

	}

	return retorno;

}

void bajaNacionalidadDeCascada(eProducto unProducto[], int tam, int id)
{
	int i;

	for(i=0;i<tam;i++)
	{
		if(id == unProducto[i].nacionalidad && buscarEstadoDeNacionalidad(unProducto[i].estado) != VACIO)
		{
			unProducto[i].estado = VACIO;
		}

	}

}

int modificarNacionalidad(eNacionalidad unaNacionalidad[], int tamNac, char cadena[])
{
	int retorno;
	int seguro;

	pedirEnteroValidado(cadena, "Estas seguro de modificar la nacionalidad? Ingrese el numero 1-Si o 2-No \n", &seguro);

	if(seguro == 1)
	{
		retorno = modificarUnDatoDeNacionalidad(unaNacionalidad, tamNac, cadena);

	}

	else
	{
		printf("La modificacion no se logro \n");
	}

	return retorno;

}

int modificarUnDatoDeNacionalidad(eNacionalidad unaNacionalidad[], int tamNac, char cadena[])
{
	int i;
	int retorno;
	int idNacionalidad;

	retorno = 0;

	pedirEnteroValidado(cadena, "Ingrese ID de nacionalidad para la modificacion: \n", &idNacionalidad);

	for(i=0;i<tamNac;i++)
	{
		if(unaNacionalidad[i].idNacionalidad == idNacionalidad && buscarEstadoDeNacionalidad(unaNacionalidad[i].estado) != VACIO)
		{

              pedirCadenaValidado(cadena, "Ingrese Descripcion: \n", unaNacionalidad[i].descripcionNacionalidad);
			  retorno = 1;
			  break;
        }
	}

	return retorno;

}
