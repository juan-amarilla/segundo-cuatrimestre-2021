//amarilla juan sebastian 1C

#include "Producto.h"

int verificarProductoDeTipo(eProducto unProducto[], int tam, int id)
{
	int retorno;
	int i;

	retorno = -1;

	for(i=0;i<tam;i++)
	{
		if(unProducto[i].tipo == id)
		{
			retorno = i;
			break;
		}

	}

    return retorno;

}

int verificarProductoDeNacionalidad(eProducto unProducto[], int tam, int id)
{
	int retorno;
	int i;

	retorno = -1;

	for(i=0;i<tam;i++)
	{
		if(unProducto[i].nacionalidad == id)
		{
			retorno = i;
			break;
		}

	}

    return retorno;

}

void inicializarProductos(eProducto unProducto[], int tam)
{
	int i;

	for(i=0;i<tam;i++)
	{
		unProducto[i].estado = 0;
	}
}

int bajaProducto(eProducto unProducto[], int tam, char cadena[])
{
	int i;
	int idProducto;
	int retorno;
	int seguro;

	retorno = 0;
	idProducto = -1;

	pedirEnteroValidado(cadena, "Estas seguro de dar de baja? Ingrese el numero 1-SI o 2-NO \n", &seguro);

	if(seguro == 1)
	{
		menuIdProducto(unProducto, tam);
		pedirEnteroValidado(cadena, "Ingrese ID de producto para la baja: \n", &idProducto);

		for(i=0;i<tam;i++)
		{
			if(unProducto[i].idProducto == idProducto && buscarEstado(unProducto[i].estado) != VACIO)
			{
				 unProducto[i].estado = VACIO;
				 retorno = 1;
				 break;
			}
		}

	}

	else
	{
		printf("No se dio de baja el producto \n");

	}

	return retorno;

}

void menuIdProducto(eProducto listaProducto[], int tam)
{
	int i;

	for(i=0;i<tam;i++)
	{
		if(buscarEstado(listaProducto[i].estado) == OCUPADO)
		{
			printf("ID de producto-%d \n", listaProducto[i].idProducto);
		}

	}

}

int altaProducto(eProducto unProducto[], int tam, char cadena[], int id)
{
	int i;
	int retorno;

	retorno = 0;

	for(i=0;i<tam;i++)
	{
		if(buscarEstado(unProducto[i].estado) != OCUPADO)
		{
			unProducto[i] = pedirProducto(unProducto[i], cadena, id);
			retorno = 1;
			break;
		}
	}

	return retorno;
}

eProducto pedirProducto(eProducto unProducto, char cadena[], int id)
{
	unProducto.idProducto = id;
	pedirEnteroValidado(cadena, "Ingrese nacionalidad: 1-EEU 2-CHINA 3-OTRO \n", &unProducto.nacionalidad);
	pedirEnteroValidado(cadena, "Ingrese tipo en forma numerica: 1000-IPHONE 1001-MAC 1002-IPAD 1003-ACCESORIOS. \n", &unProducto.tipo);
	pedirFlotanteValidado(cadena, "Ingrese precio: \n", &unProducto.precio);
	pedirCadenaValidado(cadena, "Ingrese Descripcion: \n", unProducto.descripcion);
    unProducto.estado = OCUPADO;

	return unProducto;
}

void ordenarPorPrecio(eProducto unProducto[], int tam)
{
	int i;
	int j;
	eProducto auxiliar;

	for(i=0;i<tam-1;i++)
	{
		for(j=i+1;j<tam;j++)
		{
			if(buscarEstado(unProducto[i].estado) == 1 && buscarEstado(unProducto[j].estado) == 1)
			{
				 if(unProducto[i].precio < unProducto[j].precio)
				 {
				          auxiliar = unProducto[i];
				          unProducto[i] = unProducto[j];
				          unProducto[j] = auxiliar;
				 }

			}
		}
	}

}

void ordenarPorDescripcion(eProducto unProducto[], int tam)
{
	int i;
	int j;
	eProducto auxiliar;

	for(i=0;i<tam-1;i++)
	{
		for(j=i+1;j<tam;j++)
		{
			 if(buscarEstado(unProducto[i].estado) == 1 && buscarEstado(unProducto[j].estado) == 1)
			 {
				 if(strcmp(unProducto[i].descripcion, unProducto[j].descripcion) > 0)
				 {
				 	     auxiliar = unProducto[i];
				 	     unProducto[i] = unProducto[j];
				 	     unProducto[j] = auxiliar;
				 }

			 }
		}
	}
}

int buscarEstado(int estado)
{
	int retorno;

	retorno = 0;

	if(estado == OCUPADO)
	{
		retorno = 1;
	}

	return retorno;
}

float buscarPrecioMayor(eProducto unProducto[], int tam)
{
	int i;
	int flag;
	float precioMayor;

	flag = 0;

    for(i=0;i<tam;i++)
    {
    	if(buscarEstado(unProducto[i].estado) == OCUPADO)
    	{
           if(flag == 0 || precioMayor < unProducto[i].precio)
           {
        	   precioMayor = unProducto[i].precio;
        	   flag = 1;
           }
    	}
    }

    return precioMayor;

}
