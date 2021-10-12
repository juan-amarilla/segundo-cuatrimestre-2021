// amarilla juan sebastian 1C

#include "NexoSegundo.h"

int mostrarProductoConSuFabricante(eProducto unProducto, eTipoProducto unTipo, eNacionalidad unaNacionalidad, eFabricanteDePantalla unFabricante)
{
	int retorno;

    printf("%5d %12s %17s %26s %20.2f %23s\n\n",  unProducto.idProducto,
    		                                      unProducto.descripcion,
											      unaNacionalidad.descripcionNacionalidad,
								                  unTipo.descripcionTipo,
									              unProducto.precio,
											      unFabricante.descripcionFabricante);

                                                  retorno = 1;

                                                  return retorno;
}

int mostrarVariosProductosConSuFabricante(eProducto unProducto[], int tam, eTipoProducto unTipo[], int tamTip, eNacionalidad unaNacionalidad[], int tamNac, eFabricanteDePantalla unFabricante[], int tamFabr)
{
	int i;
	int j;
	int k;
	int r;
	int retorno;

	retorno = 0;

	printf(" __________________________________________________________________________________________________________________\n");
    printf("|ID         |DESCRIPCION     |NACIONALIDAD        |TIPO           |  PRECIO             | FABRICANTE               |\n");
    printf(" ¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯\n");

	for(i=0;i<tam;i++)
	{
		j = verificarTipo(unTipo, tamTip, unProducto[i].tipo);
		k = verificarNacionalidad(unaNacionalidad, tamNac, unProducto[i].nacionalidad);
        r = verificarFabricante(unFabricante, tamFabr, unTipo[i].idFabricante);

		if(buscarEstado(unProducto[i].estado) == OCUPADO)
        {
		   if(j != -1 && k != -1 && r != -1)
		   {
			   retorno = mostrarProductoConSuFabricante(unProducto[i], unTipo[j], unaNacionalidad[k], unFabricante[r]);
		   }

		}
	}

	return retorno;

}

int nacionalidadQueFabricaUnTipo(eNacionalidad unaNacionalidad[], int tamNac, eTipoProducto unTipo[], int tamTip, eProducto unProducto[], int tam, char tipoCadena[])
{
	int i;
	int retorno;
	eAuxiliar auxiliar[tamNac];

	retorno = 0;

	inicializarAuxiliarConNacionalidad(auxiliar, tamNac, unaNacionalidad);

	nacionalidadQueFabricaUnTipoParte2(tamNac, unTipo, tamTip, unProducto, tam, tipoCadena, auxiliar);

	for(i=0;i<tamNac;i++)
	{
		if(auxiliar[i].contador != 0)
		{
			printf("La nacionalidad %s fabrica solo iphone \n", unaNacionalidad[i].descripcionNacionalidad);
			retorno = 1;

		}

	}


	return retorno;
}

void nacionalidadQueFabricaUnTipoParte2(int tamNac, eTipoProducto unTipo[], int tamTip, eProducto unProducto[], int tam, char tipoCadena[], eAuxiliar auxiliar[])
{
	int i;

	for(i=0;i<tamNac;i++)
	{
	   nacionalidadQueFabricaUnTipoParte3(unTipo, tamTip, unProducto, tam, tipoCadena, auxiliar, i);

	}

}

void nacionalidadQueFabricaUnTipoParte3(eTipoProducto unTipo[], int tamTip, eProducto unProducto[], int tam, char tipoCadena[], eAuxiliar auxiliar[], int i)
{
	int j;

	for(j=0;j<tam;j++)
	{
		nacionalidadQueFabricaUnTipoParte4(unTipo, tamTip, unProducto, tipoCadena, auxiliar, i, j);


	}


}

void nacionalidadQueFabricaUnTipoParte4(eTipoProducto unTipo[], int tamTip, eProducto unProducto[], char tipoCadena[], eAuxiliar auxiliar[], int i, int j)
{
	int k;

	if(unProducto[j].estado == OCUPADO)
	{
		if(auxiliar[i].id == unProducto[j].nacionalidad)
		{
			 for(k=0;k<tamTip;k++)
			 {
					if(strcmp(unTipo[k].descripcionTipo, tipoCadena) == 0)
					{
						if(unProducto[j].tipo == unTipo[k].idTipo)
						{
									auxiliar[i].contador++;

						}

						else
						{
									auxiliar[i].contador=0;
									break;

						}

					}

			  }


		 }

	  }


}

int productosOrdenadosPorNacionalidad(eProducto unProducto[], int tam, eNacionalidad unaNacionalidad[], int tamNac)
{
	int retorno;
	eProducto auxiliar;

	retorno = 0;

	retorno = productosOrdenadosPorNacionalidadParte2(unProducto, tam, unaNacionalidad, tamNac, auxiliar);

	return retorno;

}

int productosOrdenadosPorNacionalidadParte2(eProducto unProducto[], int tam, eNacionalidad unaNacionalidad[], int tamNac, eProducto auxiliar)
{
	int retorno;
	int i;
	int r;
	int j;
	int k;

	for(i=0;i<tamNac-1;i++)
	{
		for(r=i+1;r<tamNac;r++)
		{
			for(j=0;j<tam-1;j++)
			{
				for(k=j+1;k<tam;k++)
				{
					if(strcmp(unaNacionalidad[i].descripcionNacionalidad, unaNacionalidad[r].descripcionNacionalidad) > 0)
					{
						if(unProducto[j].nacionalidad == unaNacionalidad[i].idNacionalidad)
						{
								if(unProducto[k].nacionalidad == unaNacionalidad[r].idNacionalidad)
								{
											auxiliar = unProducto[j];
											unProducto[j] = unProducto[k];
											unProducto[k] = auxiliar;
											retorno = 1;
								}
						}

					}

				}

			}

		}

	}

	return retorno;

}

int nacionalidadQueTieneMayoresTipos(eNacionalidad unaNacionalidad[], int tamNac, eProducto unProducto[], int tam)
{
	int retorno;
	int maximo;
	eAuxiliar auxiliar[tamNac];

	inicializarAuxiliarConNacionalidad(auxiliar, tamNac, unaNacionalidad);

	nacionalidadQueTieneMayoresTiposParte2(tamNac, unProducto, tam, auxiliar);

	maximo = nacionalidadQueTieneMayoresTiposSacarMaximo(tamNac, auxiliar);

	retorno = nacionalidadQueTieneMayoresTiposMostrarlo(unaNacionalidad, tamNac, maximo, auxiliar);

	return retorno;

}

void nacionalidadQueTieneMayoresTiposParte2(int tamNac, eProducto unProducto[], int tam, eAuxiliar auxiliar[])
{
	int i;
	int j;

	for(i=0;i<tamNac;i++)
	{
		for(j=0;j<tam;j++)
		{
			if(unProducto[j].estado == OCUPADO)
			{
				if(unProducto[j].nacionalidad == auxiliar[i].id)
				{
						auxiliar[i].contador++;

				}

			}

		}

	}

}

int nacionalidadQueTieneMayoresTiposSacarMaximo(int tamNac, eAuxiliar auxiliar[])
{
	int maximo;
	int i;

	maximo = 0;

	for(i=0;i<tamNac;i++)
	{
		if(i == 0 || maximo < auxiliar[i].contador)
		{
			maximo = auxiliar[i].contador;
		}

	}

	return maximo;

}

int nacionalidadQueTieneMayoresTiposMostrarlo(eNacionalidad unaNacionalidad[], int tamNac, int maximo, eAuxiliar auxiliar[])
{
	int retorno;
	int i;

	retorno = 0;

	for(i=0;i<tamNac;i++)
	{
		if(maximo == auxiliar[i].contador && maximo != 0)
		{
	        printf("La nacionalidad %s tiene mas tipos de productos fabricados que la cantidad es: %d \n", unaNacionalidad[i].descripcionNacionalidad, maximo);
	        retorno = 1;
		}

	}

	return retorno;

}

int precioPromedioPorNacionalidad(eNacionalidad unaNacionalidad[], int tamNac, eProducto unProducto[], int tam)
{
	int retorno;
	int i;
	int j;
	eAuxiliar auxiliar[tamNac];

	retorno = 0;

	inicializarAuxiliarConNacionalidad(auxiliar, tamNac, unaNacionalidad);

	for(i=0;i<tamNac;i++)
	{
		for(j=0;j<tam;j++)
		{
			if(unProducto[j].estado == OCUPADO)
			{
				if(unProducto[j].nacionalidad == auxiliar[i].id)
				{
					auxiliar[i].acumulador =  auxiliar[i].acumulador + unProducto[j].precio;
					auxiliar[i].contador++;

				}

			}

		}

	}

	for(i=0;i<tamNac;i++)
	{
		if(auxiliar[i].contador > 0)
		{
			auxiliar[i].promedio = auxiliar[i].acumulador / auxiliar[i].contador;

		}

	}

	for(i=0;i<tamNac;i++)
	{
		if(auxiliar[i].contador > 0)
		{
			printf("El promedio de precio de %s es de %.2f \n\n", unaNacionalidad[i].descripcionNacionalidad,auxiliar[i].promedio);
			retorno = 1;

		}

	}

	return retorno;

}
