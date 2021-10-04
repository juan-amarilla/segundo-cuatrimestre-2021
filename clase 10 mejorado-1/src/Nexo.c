// amarilla juan sebastian 1C

#include "Nexo.h"

void mostrarProducto(eProducto unProducto, eTipoProducto unTipo, char nacionalidad[])
{

	verificacionNacionalidad(unProducto.nacionalidad, nacionalidad);

    printf("%5d %12s %17s %26s %20.2f\n\n",  unProducto.idProducto,
    		                                                                     unProducto.descripcion,
											                                     nacionalidad,
													                             unTipo.descripcionTipo,
									                                             unProducto.precio );

}

void mostrarVariosProductos(eProducto unProducto[], int tam, eTipoProducto unTipo[], int tamTip, char nacionalidad[])
{
	int i;
	int j;

	printf(" ________________________________________________________________________________________\n");
    printf("|ID         |DESCRIPCION     |NACIONALIDAD        |TIPO           |  PRECIO             |\n");
    printf(" ¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯\n");

	for(i=0;i<tam;i++)
	{
		if(buscarEstado(unProducto[i].estado) == OCUPADO)
        {
		   j = verificarTipo(unTipo, tamTip, unProducto[i].tipo);

		   if(j != -1)
		   {
			   mostrarProducto(unProducto[i], unTipo[j], nacionalidad);
		   }

		}
	}

}

int mostrarProductosCaros(eProducto unProducto[], int tam, eTipoProducto unTipo[], int tamTip, float precioMayor, char nacionalidad[])
{
	int retorno;

	precioMayor = buscarPrecioMayor(unProducto, tam);

	retorno = mostrarUnProductoPorPrecio(unProducto, tam, unTipo, tamTip, precioMayor, nacionalidad);

	return retorno;
}

int mostrarUnProductoPorPrecio(eProducto unProducto[], int tam, eTipoProducto unTipo[], int tamTip, float precio, char nacionalidad[])
{
	int retorno;
	int i;
	int j;

	retorno = 0;

	printf(" ________________________________________________________________________________________\n");
	printf("|ID         |DESCRIPCION     |NACIONALIDAD        |TIPO           |  PRECIO             |\n");
	printf(" ¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯\n");

	for(i=0;i<tam;i++)
	{
		if(buscarEstado(unProducto[i].estado) == OCUPADO)
		{
			j = verificarTipo(unTipo, tamTip, unProducto[i].tipo);

			if(j != -1)
			{
				if(precio == unProducto[i].precio)
				{
					mostrarProducto(unProducto[i], unTipo[j], nacionalidad);
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

int mostrarTipoMasBarato(eProducto unProducto[], int tam, eTipoProducto unTipo[], int tamTip, float precioMenor, char nacionalidad[], int tipo)
{
	int retorno;

	retorno = 0;

	precioMenor = buscarPrecioMenorDeUnTipo(unProducto, tam, tipo);

	retorno = mostrarUnProductoPorPrecio(unProducto, tam, unTipo, tamTip, precioMenor, nacionalidad);

	return retorno;

}

int mostrarProductosDeNaciolidadEnCuenta(eProducto unProducto[], int tam, eTipoProducto unTipo[], int tamTip, char nacionalidadCadena[], int nacionalidad)
{
	int i;
	int j;
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

			 if(j != -1 && unProducto[i].nacionalidad == nacionalidad)
			 {
				  mostrarProducto(unProducto[i], unTipo[j], nacionalidadCadena);
				  retorno = 1;
			 }


		}
    }

	return retorno;
}

int mostrarProductoDeTipoMayorDePrecio(eProducto unProducto[], int tam, eTipoProducto unTipo[], int tamTip, float precioMayor, char nacionalidad[], int tipo)
{
	int i;
	int j;
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

				 if(j == tipo && unProducto[i].precio > precioMayor)
				 {
					  mostrarProducto(unProducto[i], unTipo[j], nacionalidad);
					  retorno = 1;
				 }


	    }
	}

	return retorno;

}

int mostrarTipoMasCaro(eProducto unProducto[], int tam, eTipoProducto unTipo[], int tamTip, float precioMayor, char nacionalidad[], int tipo)
{
	int retorno;

	retorno = 0;

	precioMayor = buscarPrecioMayorDeUnTipo(unProducto, tam, tipo);

	retorno = mostrarUnProductoPorPrecio(unProducto, tam, unTipo, tamTip, precioMayor, nacionalidad);

	return retorno;

}

int mostrarProductosPorTipo(eTipoProducto unTipo[], int tamTip, eProducto unProducto[], int tam, char nacionalidad[])
{
	int i;
	int j;
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
			if(unProducto[j].estado == OCUPADO && unProducto[j].tipo == unTipo[i].idTipo)
			{
				 mostrarProducto(unProducto[j], unTipo[i], nacionalidad);
				 retorno = 1;

			}

		}

	}

	return retorno;

}
