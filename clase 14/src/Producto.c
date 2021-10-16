//amarilla juan sebastian 1C

#include "Producto.h"

int modificarProducto(eProducto unProducto[], int tam, char cadena[])
{
	int retorno;
	int seguro;

	pedirEnteroValidado(cadena, "Estas seguro de modificar el producto? Ingrese el numero 1-Si o 2-No \n", &seguro);

	if(seguro == 1)
	{
		retorno = modificarUnDato(unProducto, tam, cadena);

	}

	else
	{
		printf("La modificacion no se logro \n");
	}

	return retorno;

}

int modificarUnDato(eProducto unProducto[], int tam, char cadena[])
{
	int i;
	int retorno;
	int idProducto;
	int opcion;

	retorno = 0;

	pedirEnteroValidado(cadena, "Ingrese ID de producto para la modificacion: \n", &idProducto);

	for(i=0;i<tam;i++)
	{
		if(unProducto[i].idProducto == idProducto && buscarEstado(unProducto[i].estado) != VACIO)
		{
			pedirEnteroValidado(cadena, "-1 Modificar precio -2 Modificar tipo \n", &opcion);

			if(opcion == 1)
			{
					pedirFlotanteValidado(cadena, "Ingrese precio: \n", &unProducto[i].precio);
					retorno = 1;
					break;
			}

			else
			{
				if(opcion == 2)
				{
					pedirEnteroValidado(cadena, "Ingrese tipo en forma numerica: 1000-IPHONE 1001-IPAD 1002-MAC 1003-ACCESORIOS. \n", &unProducto[i].tipo);
					retorno = 1;
					break;
				}
			}
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

int altaProducto(eProducto unProducto[], int tam, char cadena[])
{
	int i;
	int retorno;

	retorno = 0;

	for(i=0;i<tam;i++)
	{
		if(buscarEstado(unProducto[i].estado) != OCUPADO)
		{
			unProducto[i] = pedirProducto(unProducto[i], cadena);
			retorno = 1;
			break;
		}
	}

	return retorno;
}

eProducto pedirProducto(eProducto unProducto, char cadena[])
{
	pedirEnteroValidado(cadena, "Ingrese ID de producto: \n", &unProducto.idProducto);
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

float buscarPrecioMayorDeUnTipo(eProducto unProducto[], int tam, int tipo)
{
	int i;
	int flag;
	float precioMayor;

	flag = 0;

	for(i=0;i<tam;i++)
	{

	   if(buscarEstado(unProducto[i].estado) == OCUPADO)
	   {
	        if((flag == 0 && unProducto[i].tipo == tipo) || (precioMayor < unProducto[i].precio && unProducto[i].tipo == tipo))
	        {
	        	precioMayor = unProducto[i].precio;
	        	flag = 1;
	        }
	   }
	}

	return precioMayor;
}
