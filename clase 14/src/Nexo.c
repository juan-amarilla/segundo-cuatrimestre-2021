// amarilla juan sebastian 1C

#include "Nexo.h"

void inicializarAuxiliarConTipo(eAuxiliar unAuxiliar[], int tam, eTipoProducto unTipo[])
{
	int i;

	for(i=0;i<tam;i++)
	{
		unAuxiliar[i].contador = 0;
		unAuxiliar[i].acumulador = 0;
		unAuxiliar[i].promedio = 0;
		unAuxiliar[i].id = unTipo[i].idTipo;
	}

}

void inicializarAuxiliarConNacionalidad(eAuxiliar unAuxiliar[], int tam, eNacionalidad unaNacionalidad[])
{
	int i;

	for(i=0;i<tam;i++)
	{
		unAuxiliar[i].contador = 0;
		unAuxiliar[i].acumulador = 0;
		unAuxiliar[i].promedio = 0;
		unAuxiliar[i].id = unaNacionalidad[i].idNacionalidad;
	}

}

void inicializarAuxiliarConProducto(eAuxiliar unAuxiliar[], int tam, eProducto unProducto[])
{
	int i;

	for(i=0;i<tam;i++)
	{
		unAuxiliar[i].contador = 0;
		unAuxiliar[i].acumulador = 0;
		unAuxiliar[i].promedio = 0;
		unAuxiliar[i].id = unProducto[i].idProducto;
	}

}

void mostrarProducto(eProducto unProducto, eTipoProducto unTipo, eNacionalidad unaNacionalidad)
{


	printf("|           |                |                    |               |                     |\n");
    printf("%5d      %12s %17s %20s %20.2f\n\n",  unProducto.idProducto,
    		                                 unProducto.descripcion,
											 unaNacionalidad.descripcionNacionalidad,
								             unTipo.descripcionTipo,
									         unProducto.precio );

}

void mostrarVariosProductos(eProducto unProducto[], int tam, eTipoProducto unTipo[], int tamTip, eNacionalidad unaNacionalidad[], int tamNac)
{
	int i;
	int j;
	int k;

	printf(" ________________________________________________________________________________________\n");
    printf("|ID         |DESCRIPCION     |NACIONALIDAD        |TIPO           |  PRECIO             |\n");
    printf("¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯\n");

	for(i=0;i<tam;i++)
	{
		j = verificarTipo(unTipo, tamTip, unProducto[i].tipo);
		k = verificarNacionalidad(unaNacionalidad, tamNac, unProducto[i].nacionalidad);

		if(buscarEstado(unProducto[i].estado) == OCUPADO)
        {
		   if(buscarEstado(unTipo[j].estado) == OCUPADO)
		   {
			   if(buscarEstado(unaNacionalidad[k].estado) == OCUPADO)
			   {
				   if(j != -1 && k != -1)
				   {
				   	  mostrarProducto(unProducto[i], unTipo[j], unaNacionalidad[k]);
				   }

			   }

		   }

		}
	}

}

int mostrarProductosCaros(eProducto unProducto[], int tam, eTipoProducto unTipo[], int tamTip, float precioMayor, eNacionalidad unaNacionalidad[], int tamNac)
{
	int retorno;

	precioMayor = buscarPrecioMayor(unProducto, tam);

	retorno = mostrarUnProductoPorPrecio(unProducto, tam, unTipo, tamTip, precioMayor, unaNacionalidad, tamNac);

	return retorno;
}

int mostrarUnProductoPorPrecio(eProducto unProducto[], int tam, eTipoProducto unTipo[], int tamTip, float precio, eNacionalidad unaNacionalidad[], int tamNac)
{
	int retorno;
	int i;
	int j;
	int k;

	retorno = 0;

	printf(" ________________________________________________________________________________________\n");
	printf("|ID         |DESCRIPCION     |NACIONALIDAD        |TIPO           |  PRECIO             |\n");
	printf(" ¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯\n");

	for(i=0;i<tam;i++)
	{
		if(buscarEstado(unProducto[i].estado) == OCUPADO)
		{
			if(buscarEstado(unTipo[i].estado) == OCUPADO)
			{
				if(buscarEstado(unaNacionalidad[i].estado) == OCUPADO)
				{
					j = verificarTipo(unTipo, tamTip, unProducto[i].tipo);
					k = verificarNacionalidad(unaNacionalidad, tamNac, unProducto[i].nacionalidad);

					if(j != -1 && k != -1)
					{
						if(precio == unProducto[i].precio)
						{
							mostrarProducto(unProducto[i], unTipo[j], unaNacionalidad[k]);
							retorno = 1;

						}
					}

				}

			}

		}

	}

    return retorno;
}

int calcularPrecioPromedioDeTipo(eProducto unProducto[], int tam, eTipoProducto unTipo[], int tamTip)
{
     int retorno;
     int i;
     int j;
     eAuxiliar auxiliar[TAM_TIPO];

     inicializarAuxiliarConTipo(auxiliar, tamTip, unTipo);

     for(i=0;i<tam;i++)
     {
        if(buscarEstado(unProducto[i].estado) == OCUPADO)
	    {
			j = verificarTipo(unTipo, tamTip, unProducto[i].tipo);

			if(j != -1)
			{
				 auxiliar[j].contador++;
				 auxiliar[j].acumulador += unProducto[i].precio;

			}
	    }

     }

     retorno = calcularPromedio(unTipo, tamTip, auxiliar);

     return retorno;

}

int calcularPromedio(eTipoProducto unTipo[], int tamTip, eAuxiliar auxiliar[])
{
	int retorno;
	int i;

	for(i=0;i<tamTip;i++)
	{
	    if(auxiliar[i].contador != 0)
	    {
	    	auxiliar[i].promedio = auxiliar[i].acumulador / auxiliar[i].contador;
	    }
	}

	retorno = mostrarPromedioDeTipo(unTipo, tamTip, auxiliar);

	return retorno;

}

int mostrarPromedioDeTipo(eTipoProducto unTipo[], int tamTip, eAuxiliar auxiliar[])
{
	int i;
	int retorno;

	retorno = 0;

	for(i=0;i<tamTip;i++)
	{
		 if(auxiliar[i].contador != 0)
		 {
		     printf("El promedio de %s es: %.2f \n", unTipo[i].descripcionTipo, auxiliar[i].promedio);

		     if(retorno == 0)
		     {
		    	retorno = 1;
		     }
		 }
	}

	return retorno;

}

int mostrarTipoMasBarato(eProducto unProducto[], int tam, eTipoProducto unTipo[], int tamTip, eNacionalidad unaNacionalidad[], int tamNac, float precioMenor, char cadena[])
{
	int retorno;

	retorno = 0;

	precioMenor = buscarPrecioMenorDeUnTipo(unProducto, tam, unTipo, cadena);

	retorno = mostrarUnProductoPorPrecio(unProducto, tam, unTipo, tamTip, precioMenor, unaNacionalidad, tamNac);

	return retorno;

}

float buscarPrecioMenorDeUnTipo(eProducto unProducto[], int tam, eTipoProducto unTipo[], char cadena[])
{
	int i;
	int flag;
	float precioMenor;

	flag = 0;

	for(i=0;i<tam;i++)
	{
       if(buscarEstado(unProducto[i].estado) == OCUPADO && buscarEstado(unTipo[i].estado) == OCUPADO)
	   {
	        if((flag == 0 && strcmp(unTipo[i].descripcionTipo, cadena) == 0) || (precioMenor > unProducto[i].precio && strcmp(unTipo[i].descripcionTipo, cadena) == 0))
	        {
	        	   precioMenor = unProducto[i].precio;
	        	   flag = 1;
	        }
	   }
	}

	return precioMenor;
}

int mostrarProductosDeNaciolidadEnCuenta(eProducto unProducto[], int tam, eTipoProducto unTipo[], int tamTip, eNacionalidad unaNacionalidad[], int tamNac, char cadena[])
{
	int retorno;

	printf(" ________________________________________________________________________________________\n");
	printf("|ID         |DESCRIPCION     |NACIONALIDAD        |TIPO           |  PRECIO             |\n");
	printf(" ¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯\n");

	retorno = buscarVerificarNacionalidadEnCuenta(unProducto, tam, unTipo, tamTip, unaNacionalidad, tamNac, cadena);

	return retorno;
}

int buscarVerificarNacionalidadEnCuenta(eProducto unProducto[], int tam, eTipoProducto unTipo[], int tamTip, eNacionalidad unaNacionalidad[], int tamNac, char cadena[])
{
	int retorno;
	int i;
	int j;
	int k;

	retorno = 0;

	for(i=0;i<tamNac;i++)
	{
		if(strcmp(unaNacionalidad[i].descripcionNacionalidad, cadena) == 0 && buscarEstado(unaNacionalidad[i].estado) == OCUPADO)
		{
			for(j=0;j<tam;j++)
			{
				if(buscarEstado(unProducto[j].estado) == OCUPADO)
				{
					if(unProducto[j].nacionalidad == unaNacionalidad[i].idNacionalidad)
					{
						for(k=0;k<tamTip;k++)
						{
							if(buscarEstado(unTipo[k].estado) == OCUPADO)
							{
								if(unProducto[j].tipo == unTipo[k].idTipo)
								{
									mostrarProducto(unProducto[j], unTipo[k], unaNacionalidad[i]);
									retorno = 1;

								}

							}

						}

					}

				}

			}

		}

	}

	return retorno;

}

int mostrarProductoDeTipoMayorDePrecio(eProducto unProducto[], int tam, eTipoProducto unTipo[], int tamTip, eNacionalidad unaNacionalidad[], int tamNac, float precioMayor, char cadena[])
{
	int retorno;

    printf(" ________________________________________________________________________________________\n");
    printf("|ID         |DESCRIPCION     |NACIONALIDAD        |TIPO           |  PRECIO             |\n");
    printf(" ¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯\n");

    retorno = calcularTipoMayorDePrecio(unProducto, tam, unTipo, tamTip, unaNacionalidad, tamNac, precioMayor, cadena);

	return retorno;

}

int calcularTipoMayorDePrecio(eProducto unProducto[], int tam, eTipoProducto unTipo[], int tamTip, eNacionalidad unaNacionalidad[], int tamNac, float precioMayor, char cadena[])
{
	int retorno;
	int i;
	int j;
	int k;

	retorno = 0;

	for(i=0;i<tam;i++)
	{
	    j = verificarTipo(unTipo, tamTip, unProducto[i].tipo);
	    k = verificarNacionalidad(unaNacionalidad, tamNac, unProducto[i].nacionalidad);

	    if(strcmp(unTipo[j].descripcionTipo, cadena) == 0)
	    {
	    	if(j != -1 && k != -1)
	    	{
	    		if(buscarEstado(unTipo[j].estado) == OCUPADO)
	    		{
	    			if(buscarEstado(unaNacionalidad[k].estado) == OCUPADO)
	    			{
	    				if(unProducto[i].precio > precioMayor)
	    				{
	    						mostrarProducto(unProducto[i], unTipo[j], unaNacionalidad[k]);
	    						retorno = 1;

	    				}

	    			}

	    		}

	    	}

	    }

	}

	return retorno;

}

int mostrarTipoMasCaro(eProducto unProducto[], int tam, eTipoProducto unTipo[], int tamTip, eNacionalidad unaNacionalidad[], int tamNac, float precioMayor, char cadena[])
{
	int retorno;

	retorno = 0;

	precioMayor = buscarPrecioMayorDeUnTipo(unProducto, tam, unTipo, tamTip, cadena);

	retorno = mostrarUnProductoPorPrecioDeTipo(unProducto, tam, unTipo, tamTip, precioMayor, unaNacionalidad, tamNac, cadena);

	return retorno;

}

float buscarPrecioMayorDeUnTipo(eProducto unProducto[], int tam, eTipoProducto listaTipo[], int tamTip, char cadena[])
{
	int i;
	int j;
	int flag;
	float precioMayor;

	flag = 0;

	for(i=0;i<tam;i++)
	{
       j = verificarTipo(listaTipo, tamTip, unProducto[i].tipo);

	   if(buscarEstado(unProducto[i].estado) == OCUPADO && j != -1)
	   {
	        if((flag == 0 && strcmp(listaTipo[j].descripcionTipo, cadena) == 0) || (precioMayor < unProducto[i].precio && strcmp(listaTipo[j].descripcionTipo, cadena) == 0))
	        {
	        	precioMayor = unProducto[i].precio;
	        	flag = 1;
	        }
	   }
	}

	return precioMayor;
}

int mostrarUnProductoPorPrecioDeTipo(eProducto unProducto[], int tam, eTipoProducto unTipo[], int tamTip, float precio, eNacionalidad unaNacionalidad[], int tamNac, char cadena[])
{
	int retorno;
	int i;
	int j;
	int k;

	retorno = 0;

	printf(" ________________________________________________________________________________________\n");
	printf("|ID         |DESCRIPCION     |NACIONALIDAD        |TIPO           |  PRECIO             |\n");
	printf(" ¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯\n");

	for(i=0;i<tam;i++)
	{
		if(buscarEstado(unProducto[i].estado) == OCUPADO)
		{
			if(buscarEstado(unTipo[i].estado) == OCUPADO)
			{
				if(buscarEstado(unaNacionalidad[i].estado) == OCUPADO)
				{
					j = verificarTipo(unTipo, tamTip, unProducto[i].tipo);
					k = verificarNacionalidad(unaNacionalidad, tamNac, unProducto[i].nacionalidad);

					if(j != -1 && k != -1)
					{
						if(precio == unProducto[i].precio && strcmp(unTipo[j].descripcionTipo, cadena) == 0)
						{
							mostrarProducto(unProducto[i], unTipo[j], unaNacionalidad[k]);
							retorno = 1;

						}
					}

				}

			}

		}

	}

    return retorno;
}

int mostrarProductosPorTipo(eTipoProducto unTipo[], int tamTip, eProducto unProducto[], int tam, eNacionalidad unaNacionalidad[], int tamNac)
{
	int i;
	int j;
	int k;
	int retorno;

	retorno = 0;

	for(i=0;i<tamTip;i++)
	{
		printf("-LISTADO DE %s: \n \n", unTipo[i].descripcionTipo);
		printf(" ________________________________________________________________________________________\n");
		printf("|ID         |DESCRIPCION     |NACIONALIDAD        |TIPO           |  PRECIO             |\n");
		printf(" ¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯\n");

		for(j=0;j<tam;j++)
		{
			k = verificarNacionalidad(unaNacionalidad, tamNac, unProducto[j].nacionalidad);

			if(unProducto[j].estado == OCUPADO && unProducto[j].tipo == unTipo[i].idTipo && k != -1)
			{
				 mostrarProducto(unProducto[j], unTipo[i], unaNacionalidad[k]);
				 retorno = 1;

			}

		}

	}

	return retorno;

}

int tiposMasCantidad(eTipoProducto unTipo[], int tamTip, eProducto unProducto[], int tam, eNacionalidad unaNacionalidad[], int tamNac)
{
   int retorno;

   retorno = mostrarMasCantidadDeTipo(unTipo, tamTip, unProducto, tam, unaNacionalidad, tamNac);

   return retorno;
}

int mostrarMasCantidadDeTipo(eTipoProducto unTipo[], int tamTip, eProducto unProducto[], int tam, eNacionalidad unaNacionalidad[], int tamNac)
{
	int retorno;
	int i;
	int maximo;
	eAuxiliar auxiliar[tamTip];

	retorno = 0;
	maximo = 0;

	inicializarAuxiliarConTipo(auxiliar, tamTip, unTipo);

	recorrerTipoContandoMayor(unTipo, tamTip, unProducto, tam, unaNacionalidad, tamNac, auxiliar);

	maximo = sacarMaximo(unTipo, tamTip, auxiliar, maximo);

	for(i=0;i<tamTip;i++)
	{
		 if(maximo == auxiliar[i].contador)
		 {
			 retorno = mostrarElTipoMasImportado(unTipo, auxiliar, tam, maximo, i);
		 }

	}

	return retorno;

}

void recorrerTipoContandoMayor(eTipoProducto unTipo[], int tamTip, eProducto unProducto[], int tam, eNacionalidad unaNacionalidad[], int tamNac, eAuxiliar unAuxiliar[])
{
	int i;

	for(i = 0; i < tamTip; i++)
	{
		recorrerTipoContandoMayorParte2(unTipo, tamTip, unProducto, tam, unaNacionalidad, tamNac, unAuxiliar, i);

	}
}

void recorrerTipoContandoMayorParte2(eTipoProducto unTipo[], int tamTip, eProducto unProducto[], int tam, eNacionalidad unaNacionalidad[], int tamNac, eAuxiliar unAuxiliar[], int i)
{
	int j;
	int k;

	for(j = 0; j < tam; j++)
	{
		if(unProducto[j].estado == OCUPADO)
		{
			  k = verificarNacionalidad(unaNacionalidad, tamNac, unProducto[j].nacionalidad);

			   if(unTipo[i].idTipo == unProducto[j].tipo && k != -1)
			   {
				   unAuxiliar[i].contador++;
			   }

		}
	}

}

int sacarMaximo(eTipoProducto unTipo[], int tamTip, eAuxiliar auxiliar[], int maximo)
{
	int i;

	for(i=0;i<tamTip;i++)
	{
			if(i == 0 || maximo < auxiliar[i].contador)
			{
				maximo = auxiliar[i].contador;
			}

	}

	return maximo;

}

int mostrarElTipoMasImportado(eTipoProducto unTipo[], eAuxiliar auxiliar[], int tam, int maximo, int i)
{
	int retorno;
	int j;

	for(j=0;j<tam;j++)
	{
		if(auxiliar[i].id == unTipo[i].idTipo)
		{
				printf("El tipo %s tiene como maximo de cantidad importado: %d \n", unTipo[i].descripcionTipo, maximo);
				retorno = 1;
				break;

		}

	}

	return retorno;

}
