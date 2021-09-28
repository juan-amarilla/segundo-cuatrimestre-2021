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
			if(buscarEstado(unProducto[i].estado) == 1 && buscarEstado(unProducto[i].estado) == 1)
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
			 if(buscarEstado(unProducto[i].estado) == 1 && buscarEstado(unProducto[i].estado) == 1)
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

int mostrarProductosCaros(eProducto unProducto[], int tam, float precioMayor, char nacionalidad[], char tipo[])
{
	int retorno;

	precioMayor = buscarPrecioMayor(unProducto, tam);

	retorno = mostrarUnProductoPorPrecio(unProducto, tam, nacionalidad, tipo, precioMayor);

	return retorno;
}

int mostrarUnProductoPorPrecio(eProducto unProducto[], int tam, char nacionalidad[], char tipo[], float precioMayor)
{
	int retorno;
	int i;

	retorno = 0;

	for(i=0;i<tam;i++)
	{
		if(buscarEstado(unProducto[i].estado) == OCUPADO)
		{
			if(precioMayor == unProducto[i].precio)
			{
				mostrarProducto(unProducto[i], nacionalidad, tipo);
				retorno = 1;

			}

		}

	}

    return retorno;
}

void calcularPromedioDeTipo(eProducto unProducto[], int tam, float promedio, int tipo, int contador, char cadena[])
{
	int i;
	float acumulador;

	contador = 0;
	acumulador = 0;

	for(i=0;i<tam;i++)
	{
		if(unProducto[i].tipo == tipo && buscarEstado(unProducto[i].estado) == OCUPADO)
		{
			acumulador += unProducto[i].precio;
			contador++;
		}

	}

	if(contador > 0)
	{
		promedio = acumulador / contador;

	}

	mostrarPromedio(promedio, tipo, contador, cadena);


}

void mostrarPromedio(float promedio, int tipo, int contador, char cadena[])
{
	verificacionTipo(tipo, cadena);

	if(contador > 0)
	{
		printf("el promedio de %s es %.2f \n", cadena, promedio);
	}

	else
	{
		printf("No se logro calcular el promedio de %s \n", cadena);
	}

}

int mostrarProductosBaratosDeUnTipo(eProducto unProducto[], int tam, float precioMenor, char nacionalidad[], char tipoCadena[], int tipo)
{
	int retorno;

	precioMenor = buscarPrecioMenorDeUnTipo(unProducto, tam, tipo);

	retorno = mostrarUnProductoPorPrecioDeUnTipo(unProducto, tam, nacionalidad, tipoCadena, precioMenor, tipo);

	return retorno;

}
float buscarPrecioMenorDeUnTipo(eProducto unProducto[], int tam, int tipo)
{
	int i;
	int flag;
	float precioMenor;

	flag = 0;

	for(i=0;i<tam;i++)
	{

	   if(buscarEstado(unProducto[i].estado) == OCUPADO)
	   {
	        if((flag == 0 && unProducto[i].tipo == tipo) || (precioMenor > unProducto[i].precio && unProducto[i].tipo == tipo))
	        {
	        	   precioMenor = unProducto[i].precio;
	        	   flag = 1;
	        }
	   }
	}

	return precioMenor;
}

int mostrarUnProductoPorPrecioDeUnTipo(eProducto unProducto[], int tam, char nacionalidad[], char tipoCadena[], float precioMenor, int tipo)
{
	int retorno;
	int i;

	retorno = 0;

	for(i=0;i<tam;i++)
	{
		if(buscarEstado(unProducto[i].estado) == OCUPADO)
		{
			if(precioMenor == unProducto[i].precio && unProducto[i].tipo == tipo)
			{
					mostrarProducto(unProducto[i], nacionalidad, tipoCadena);
					retorno = 1;

			}

		}

	}

    return retorno;

}

void mostrarVariosProductosDeUnaNacionalidad(eProducto unProducto[], int tam, char nacionalidadCadena[], char tipo[], int nacionalidad)
{
	int i;

	printf("ID    | DESCRIPCION    | NACIONALIDAD    | TIPO    | PRECIO: \n");

	for(i=0;i<tam;i++)
	{
		if(buscarEstado(unProducto[i].estado) == OCUPADO)
		{
			if(nacionalidad == unProducto[i].nacionalidad)
			{
				mostrarProducto(unProducto[i], nacionalidadCadena, tipo);
			}
		}
	}

}

void mostrarVariosProductosDeUnTipoConLaCondicionDePrecio(eProducto unProducto[], int tam, char nacionalidad[], char tipoCadena[], int tipo, float numero)
{
	int i;

	printf("ID    | DESCRIPCION    | NACIONALIDAD    | TIPO    | PRECIO: \n");

	for(i=0;i<tam;i++)
	{
		if(buscarEstado(unProducto[i].estado) == OCUPADO)
		{
			if(tipo == unProducto[i].tipo && unProducto[i].precio > numero)
			{
				mostrarProducto(unProducto[i], nacionalidad, tipoCadena);
			}
		}
	}

}

int mostrarProductosCarosDeUnTipo(eProducto unProducto[], int tam, float precioMayor, char nacionalidad[], char tipoCadena[], int tipo)
{
	int retorno;

	precioMayor = buscarPrecioMayorDeUnTipo(unProducto, tam, tipo);

	retorno = mostrarUnProductoPorPrecioDeUnTipo(unProducto, tam, nacionalidad, tipoCadena, precioMayor, tipo);

	return retorno;
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
