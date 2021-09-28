/*
============================================================================
amarilla juan sebastian 1C

Ejercicio 9-1:
-Una empresa importadora que comercializa productos Apple,
decide registrar de sus productos los siguientes datos:

-idProducto (numerico)
-descripcion (alfanum�rico)
-nacionalidad (num�rico, por el momento utilizaremos un
define: EEUU - CHINA - OTRO)
-tipo (num�rico, por el momento utilizaremos un define:
IPHONE -MAC - IPAD - ACCESORIOS)
-precio (num�rico decimal)

Realizar un programa que permita interactuar con un men�
de usuarios con las siguientes opciones:
1-ALTA Producto: Se ingresan los datos de UN solo producto.
Siempre y cuando haya espacio disponible en el array.
2-BAJA Producto: A partir del ingreso del ID.
Si existe el producto desaparece de la lista, dejando espacio disponible para un nuevo producto.
3-MODIFICACI�N Producto:
A partir del ingreso del ID. Si existe se podr�
modificar el precio o el tipo.
4-LISTADO Productos.
5-LISTADO ordenado por precio.
6-LISTADO ordenado por descripci�n.

Agregar los siguientes informes:
7-El/los  productos m�s caros.
8-Los productos que cuestan 700
9-Precio promedio por tipo de producto.
10-De los Iphone el m�s barato
11-Los productos "MADE IN CHINA"
12-Las MAC que cuestan m�s de 700 USD
13-El/Los Accesorios m�s caros


============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ingresarDatos.h"
#include "otrasFunciones.h"
#include "producto.h"
#define TAM 5
#define CARACTERES 100
#define CANTIDAD_CADENA 2

int main(void)
{
	eProducto listaProducto[TAM];
	int estado;
	int opcion;
	char cadena[CANTIDAD_CADENA][CARACTERES];
	float precioMayor;
	float precioMenor;
	float promedio[4] = {};
	int contador[4] = {};

	precioMayor=0;
	precioMenor=0;

	setbuf(stdout, NULL);

	inicializarProductos(listaProducto, TAM);

	do
	{
		menu();
		pedirEnteroValidado(cadena[0], "-Ingrese una opcion valida: \n", &opcion);

		switch(opcion)
		{

		 case 1:
		 estado = altaProducto(listaProducto, TAM, cadena[0]);
		 mensajeEstado(estado, "Producto ingresado con exito. \n", "Producto ingresado sin exito. \n");
		 break;

		 case 2:
		 estado = bajaProducto(listaProducto, TAM, cadena[0]);
		 mensajeEstado(estado, "Baja con exito. \n", "Baja sin exito. \n");
		 break;

		 case 3:
		 estado = modificarProducto(listaProducto, TAM, cadena[0]);
		 mensajeEstado(estado, "Modificacion con exito. \n", "Modificacion sin exito. \n");
		 break;

		 case 4:
		 mostrarVariosProductos(listaProducto, TAM, cadena[0], cadena[1]);
		 break;

		 case 5:
	     ordenarPorPrecio(listaProducto, TAM);
		 break;

		 case 6:
		 ordenarPorDescripcion(listaProducto, TAM);
		 break;

		 case 7:
		 estado = mostrarProductosCaros(listaProducto, TAM, precioMayor, cadena[0], cadena[1]);
		 mensajeEstado(estado, "listado con exito. \n", "listado sin exito. \n");
		 break;

		 case 8:
		 estado = mostrarUnProductoPorPrecio(listaProducto, TAM, cadena[0], cadena[1], 700);
		 mensajeEstado(estado, "listado con exito. \n", "listado sin exito. \n");
		 break;

		 case 9:
		 calcularPromedioDeTipo(listaProducto, TAM, promedio[0], IPHONE, contador[0], cadena[0]);
		 calcularPromedioDeTipo(listaProducto, TAM, promedio[1], MAC, contador[1], cadena[0]);
		 calcularPromedioDeTipo(listaProducto, TAM, promedio[2], IPAD, contador[2], cadena[0]);
		 calcularPromedioDeTipo(listaProducto, TAM, promedio[3], ACCESORIOS, contador[3], cadena[0]);
		 break;

		 case 10:
		 estado = mostrarProductosBaratosDeUnTipo(listaProducto, TAM, precioMenor, cadena[0], cadena[1], IPHONE);
		 mensajeEstado(estado, "listado con exito. \n", "listado sin exito. \n");
		 break;

		 case 11:
		 mostrarVariosProductosDeUnaNacionalidad(listaProducto, TAM, cadena[0], cadena[1], CHINA);
		 break;

		 case 12:
		 mostrarVariosProductosDeUnTipoConLaCondicionDePrecio(listaProducto, TAM, cadena[0], cadena[1], MAC, 700);
		 break;

		 case 13:
		 estado = mostrarProductosCarosDeUnTipo(listaProducto, TAM, precioMayor, cadena[0], cadena[1], ACCESORIOS);
		 mensajeEstado(estado, "listado con exito. \n", "listado sin exito. \n");
		 break;

		 case 14:
		 estado = 1;
		 mensajeEstado(estado, "Gracias por usar mi programa. \n", "Error. \n");
		 break;

		 default:
		 estado = 0;
		 mensajeEstado(estado, "Gracias por usar mi programa. \n", "Error: Ingrese una opcion valida. \n");
	     break;

		}

	} while (opcion != 14);

	return 0;
}
