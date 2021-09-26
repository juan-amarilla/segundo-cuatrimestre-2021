//amarilla juan sebastian 1C

#include "producto.h"

int modificarProducto(eProducto unProducto[], int tam, char cadena[])
{
	int i;
	int idProducto;
	int retorno;
	int opcion;
	int seguro;

	retorno = 0;
	idProducto = -1;

	pedirEnteroValidado(cadena, "Estas seguro de modificar el producto? Ingrese el numero 1-Si o 2-No \n", &seguro);

	if(seguro == 1)
	{
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
						pedirEnteroValidado(cadena, "Ingrese tipo: 1-IPHONE 2-MAC 3-IPAD 4-ACCESORIOS. \n", &unProducto[i].tipo);
						retorno = 1;
						break;
					}
				}
			}
		}

	}

	else
	{
		printf("La modificacion no se logro \n");
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

	pedirEnteroValidado(cadena, "Estas seguro de dar de baja? Ingrese el numero 1-Si o 2-No \n", &seguro);

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

void mostrarProducto(eProducto unProducto, char nacionalidad[], char tipo[])
{

	verificacionNacionalidad(unProducto.nacionalidad, nacionalidad);
	verificacionTipo(unProducto.tipo, tipo);

    printf("%5d | %15s | %s | %s | %5.2f \n",  unProducto.idProducto,
    		                                   unProducto.descripcion,
											   nacionalidad,
									           tipo,
									           unProducto.precio);

}

void mostrarVariosProductos(eProducto unProducto[], int tam, char nacionalidad[], char tipo[])
{
	int i;

	printf("ID    | DESCRIPCION    | NACIONALIDAD    | TIPO    | PRECIO: \n");

	for(i=0;i<tam;i++)
	{
		if(buscarEstado(unProducto[i].estado) == 1)
		{
		   mostrarProducto(unProducto[i], nacionalidad, tipo);
		}
	}

}

int altaProducto(eProducto unProducto[], int tam, char cadena[])
{
	int i;
	int retorno;

	retorno = 0;

	for(i=0;i<tam;i++)
	{
		if(buscarEstado(unProducto[i].estado) != 1)
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
	pedirEnteroValidado(cadena, "Ingrese tipo: 1-IPHONE 2-MAC 3-IPAD 4-ACCESORIOS \n", &unProducto.tipo);
	pedirFlotanteValidado(cadena, "Ingrese precio: \n", &unProducto.precio);
	pedirCadenaValidado(cadena, "Ingrese Descripcion: \n", unProducto.descripcion);
    unProducto.estado = 1;

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
            if(unProducto[i].precio < unProducto[j].precio)
            {
            	auxiliar = unProducto[i];
            	unProducto[i] = unProducto[j];
            	unProducto[j] = auxiliar;
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
	         if(strcmp(unProducto[i].descripcion, unProducto[j].descripcion) > 0)
	         {
	            auxiliar = unProducto[i];
	            unProducto[i] = unProducto[j];
	            unProducto[j] = auxiliar;
	         }
		}
	}
}

void verificacionNacionalidad(int opcion, char caracter[])
{
	switch(opcion)
	{
	    case EEU:
	    strcpy(caracter, "EEU");
		break;

	    case CHINA:
	    strcpy(caracter, "CHINA");
	    break;

	    case OTRO:
	    strcpy(caracter, "OTRO");
	    break;

	    default:
	    strcpy(caracter, "ERROR");
	    break;

	}

}

void verificacionTipo(int opcion, char caracter[])
{
	switch(opcion)
	{
		 case IPHONE:
		 strcpy(caracter, "IPHONE");
	     break;

		 case MAC:
		 strcpy(caracter, "MAC");
		 break;

		 case IPAD:
		 strcpy(caracter, "IPAD");
		 break;

		 case ACCESORIOS:
		 strcpy(caracter, "ACCESORIOS");
		 break;

		 default:
		 strcpy(caracter, "ERROR");
		 break;

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
