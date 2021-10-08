// amarilla juan sebastian 1C

#include "Nexo.h"

void mostrarProducto(eProducto unProducto, eTipoProducto unTipo, eNacionalidad unaNacionalidad)
{

    printf("%5d %12s %17s %26s %20.2f\n\n",  unProducto.idProducto,
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
    printf(" ¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯\n");

	for(i=0;i<tam;i++)
	{
		j = verificarTipo(unTipo, tamTip, unProducto[i].tipo);
		k = verificarNacionalidad(unaNacionalidad, tamNac, unProducto[i].nacionalidad);

		if(buscarEstado(unProducto[i].estado) == OCUPADO)
        {
		   if(j != -1 && k != -1)
		   {
			   mostrarProducto(unProducto[i], unTipo[j], unaNacionalidad[k]);
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

    return retorno;
}

int calcularPrecioPromedioDeTipo(eProducto unProducto[], int tam, eTipoProducto unTipo[], int tamTip)
{
     int retorno;
     int i;
     int j;
     int contador[TAM_TIPO] = {};
     float acumulador[TAM_TIPO] = {};
     float promedio[TAM_TIPO] = {};

     retorno = 0;

     for(i=0;i<tam;i++)
     {
        if(buscarEstado(unProducto[i].estado) == OCUPADO)
	    {
			j = verificarTipo(unTipo, tamTip, unProducto[i].tipo);

			if(j != -1)
			{
                  contador[j]++;
                  acumulador[j] += unProducto[i].precio;

			}
	    }

     }

     for(i=0;i<tamTip;i++)
     {
          if(contador[i] != 0)
          {
              promedio[i] = acumulador[i] / contador[i];
          }
     }

     for(i=0;i<tamTip;i++)
     {
    	  if(contador[i] != 0)
    	  {
    		  printf("El promedio de %s es: %.2f \n", unTipo[i].descripcionTipo, promedio[i]);

    		  if(retorno == 0)
    		  {
    		     retorno = 1;
    		  }
    	  }
     }

     return retorno;

}

int mostrarTipoMasBarato(eProducto unProducto[], int tam, eTipoProducto unTipo[], int tamTip, eNacionalidad unaNacionalidad[], int tamNac, int tipo, float precioMenor)
{
	int retorno;

	retorno = 0;

	precioMenor = buscarPrecioMenorDeUnTipo(unProducto, tam, tipo);

	retorno = mostrarUnProductoPorPrecio(unProducto, tam, unTipo, tamTip, precioMenor, unaNacionalidad, tamNac);

	return retorno;

}

int mostrarProductosDeNaciolidadEnCuenta(eProducto unProducto[], int tam, eTipoProducto unTipo[], int tamTip, eNacionalidad unaNacionalidad[], int tamNac, int nacionalidad)
{
	int i;
	int j;
	int k;
	int retorno;

	retorno = 0;

	printf(" ________________________________________________________________________________________\n");
	printf("|ID         |DESCRIPCION     |NACIONALIDAD        |TIPO           |  PRECIO             |\n");
	printf(" ¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯\n");

	for(i=0;i<tam;i++)
	{
		if(buscarEstado(unProducto[i].estado) == OCUPADO)
	    {
			 j = verificarTipo(unTipo, tamTip, unProducto[i].tipo);
			 k = verificarNacionalidad(unaNacionalidad, tamNac, unProducto[i].nacionalidad);

			 if(j != -1 && k != -1 && unProducto[i].nacionalidad == nacionalidad)
			 {
				  mostrarProducto(unProducto[i], unTipo[j], unaNacionalidad[k]);
				  retorno = 1;
			 }


		}
    }

	return retorno;
}

int mostrarProductoDeTipoMayorDePrecio(eProducto unProducto[], int tam, eTipoProducto unTipo[], int tamTip, eNacionalidad unaNacionalidad[], int tamNac, float precioMayor, int tipo)
{
	int i;
	int j;
	int k;
	int retorno;

    retorno = 0;

    printf(" ________________________________________________________________________________________\n");
    printf("|ID         |DESCRIPCION     |NACIONALIDAD        |TIPO           |  PRECIO             |\n");
    printf(" ¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯\n");

	for(i=0;i<tam;i++)
	{
		if(buscarEstado(unProducto[i].estado) == OCUPADO)
		{
				 j = verificarTipo(unTipo, tamTip, unProducto[i].tipo);
				 k = verificarNacionalidad(unaNacionalidad, tamNac, unProducto[i].nacionalidad);

				 if(j == tipo && unProducto[i].precio > precioMayor)
				 {
					  mostrarProducto(unProducto[i], unTipo[j], unaNacionalidad[k]);
					  retorno = 1;
				 }


	    }
	}

	return retorno;

}

int mostrarTipoMasCaro(eProducto unProducto[], int tam, eTipoProducto unTipo[], int tamTip, eNacionalidad unaNacionalidad[], int tamNac, float precioMayor, int tipo)
{
	int retorno;

	retorno = 0;

	precioMayor = buscarPrecioMayorDeUnTipo(unProducto, tam, tipo);

	retorno = mostrarUnProductoPorPrecio(unProducto, tam, unTipo, tamTip, precioMayor, unaNacionalidad, tamNac);

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
	int i;
	int j;
	int k;
	int maximo;
	eAuxiliar auxiliar[tamTip];

	retorno = 0;

	for(i=0;i<tamTip;i++)
	{
		auxiliar[i].contador = 0;
		auxiliar[i].id = unTipo[i].idTipo;

	}

	for(i = 0; i < tamTip; i++)
	{
	      for(j = 0; j < tam; j++)
	      {
	    	  if(unProducto[j].estado == OCUPADO)
	    	  {
	    		  k = verificarNacionalidad(unaNacionalidad, tamNac, unProducto[j].nacionalidad);

	    		  if(unTipo[i].idTipo == unProducto[j].tipo && k != -1)
	    		  {
	    		  	   auxiliar[i].contador++;
	    		  }

	    	  }
	      }
   }

   for(i=0;i<tamTip;i++)
   {
	   if(i == 0 || maximo < auxiliar[i].contador)
	   {
		   maximo = auxiliar[i].contador;
	   }

   }

   for(i=0;i<tamTip;i++)
   {
	   if(maximo == auxiliar[i].contador)
	   {
		   for(j=0;j<tam;j++)
		   {
			   if(auxiliar[i].id == unTipo[i].idTipo)
			   {
				   printf("El tipo %s tiene como maximo de cantidad importado: %d \n", unTipo[i].descripcionTipo, maximo);
				   retorno = 1;
				   break;

			   }

		   }

	   }

   }

	return retorno;
}
