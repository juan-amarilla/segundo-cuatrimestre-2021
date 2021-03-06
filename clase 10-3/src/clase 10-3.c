/*
============================================================================
amarilla juan sebastian 1C

Ejercicio 10-3:
Una empresa importadora que comercializa productos Apple, decide
registrar de sus productos los siguientes datos:
-idProducto (numerico)
-descripcion (alfanum?rico)
-nacionalidad (num?rico, por el momento utilizaremos un define: EEUU - CHINA - OTRO)
-tipo (num?rico)
-precio (num?rico decimal)

Agregar la estructura etipoProducto, que definir? los siguientes campos:
-idTipo (num?rico)
-descripcionTipo(alfanum?rico)

Para esta estructura en principio trabajaremos con datos hardcodeados:
idTipo	descripcionTipo
1000	Iphone
1001	Ipad
1002	Mac
1003	Accesorios


Realizar un programa que permita interactuar con un men? de usuarios con las siguientes opciones:
1-ALTA Producto: Se ingresan los datos de UN solo producto.
Siempre y cuando haya espacio disponible en el array.
Al momento de dar de alta el producto, el usuario podr? elegir el tipo de producto,
de una lista que se le desplegar? en pantalla.
2-BAJA Producto: A partir del ingreso del ID. Si existe el producto desaparece de la lista,
dejando espacio disponible para un nuevo producto.
3-MODIFICACI?N Producto: A partir del ingreso del ID. Si existe se podr? modificar
el precio o el tipo. Si modifica el tipo de producto, se utilizara el mismo criterio que para dar de alta.
4-LISTADO Productos.
5-LISTADO ordenado por precio.
6-LISTADO ordenado por descripci?n.
7-El/los  productos m?s caros.
8-Precio promedio por tipo de producto. Se deber? mostrar la descripci?n del tipo y a continuaci?n el precio promedio.
9-El/los  productos m?s caros.
10-Los productos que cuestan 700
11-Precio promedio por tipo de producto.
12-De los Iphone el m?s barato
13-Los productos "MADE IN CHINA"
14-Las MAC que cuestan m?s de 700 USD
15-El/Los Accesorios m?s caros

Se agregan los siguientes listados:
16-El listado de todos los productos con la descripci?n del tipo.
17-Por cada tipo la lista de productos.

============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "IngresarDatos.h"
#include "OtrasFunciones.h"
#include "Producto.h"
#define TAM 4
#define TAM_TIPO 4
#define CARACTERES 100

int main(void)
{
	eProducto listaProducto[TAM];
	eTipoProducto listaTipo[TAM_TIPO]={ {1000, "Iphone"},
			                            {1001, "Ipad"},
			                            {1002, "Mac"},
			                            {1003, "Accesorios"} };
	int estado;
	int opcion;
	char cadena[CARACTERES];
	float precioMayor;
	float precioMenor;

	precioMayor=0;
	precioMenor=0;

	setbuf(stdout, NULL);

	inicializarProductos(listaProducto, TAM);

	do
	{
		menu();
		pedirEnteroValidado(cadena, "-Ingrese una opcion valida: \n", &opcion);

		switch(opcion)
		{

		 case 1:
		 estado = altaProducto(listaProducto, TAM, cadena);
		 mensajeEstado(estado, "Producto ingresado con exito. \n", "Producto ingresado sin exito. \n");
		 break;

		 case 2:
		 estado = bajaProducto(listaProducto, TAM, cadena);
		 mensajeEstado(estado, "Baja con exito. \n", "Baja sin exito. \n");
		 break;

		 case 3:
		 estado = modificarProducto(listaProducto, TAM, cadena);
		 mensajeEstado(estado, "Modificacion con exito. \n", "Modificacion sin exito. \n");
		 break;

		 case 4:
		 mostrarVariosProductos(listaProducto, TAM, listaTipo, TAM_TIPO, cadena);
		 break;

		 case 5:
	     ordenarPorPrecio(listaProducto, TAM);
	     mostrarVariosProductos(listaProducto, TAM, listaTipo, TAM_TIPO, cadena);
		 break;

		 case 6:
		 ordenarPorDescripcion(listaProducto, TAM);
		 mostrarVariosProductos(listaProducto, TAM, listaTipo, TAM_TIPO, cadena);
		 break;

		 case 7:
		 estado = mostrarProductosCaros(listaProducto, TAM, listaTipo, TAM_TIPO, precioMayor, cadena);
		 mensajeEstado(estado, "listado con exito. \n", "listado sin exito. \n");
		 break;

		 case 8:
		 estado = calcularPrecioPromedioDeTipo(listaProducto, TAM, listaTipo, TAM_TIPO);
		 mensajeEstado(estado, "Operacion con exito. \n", "Operacion sin exito. \n");
		 break;

		 case 9:
		 estado = mostrarProductosCaros(listaProducto, TAM, listaTipo, TAM_TIPO, precioMayor, cadena);
		 mensajeEstado(estado, "listado con exito. \n", "listado sin exito. \n");
		 break;

		 case 10:
		 estado = mostrarUnProductoPorPrecio(listaProducto, TAM, listaTipo, TAM_TIPO, 700, cadena);
		 mensajeEstado(estado, "listado con exito. \n", "listado sin exito. \n");
		 break;

		 case 11:
		 estado = calcularPrecioPromedioDeTipo(listaProducto, TAM, listaTipo, TAM_TIPO);
		 mensajeEstado(estado, "listado con exito. \n", "listado sin exito. \n");
		 break;

		 case 12:
		 estado = mostrarTipoMasBarato(listaProducto, TAM, listaTipo, TAM_TIPO, precioMenor, cadena, 1000);
		 mensajeEstado(estado, "listado con exito. \n", "listado sin exito. \n");
		 break;

		 case 13:
		 estado = mostrarProductosDeNaciolidadEnCuenta(listaProducto, TAM, listaTipo, TAM_TIPO, cadena, CHINA);
		 mensajeEstado(estado, "listado con exito. \n", "listado sin exito. \n");
		 break;

		 case 14:
		 estado = mostrarProductoDeTipoMayorDePrecio(listaProducto, TAM, listaTipo, TAM_TIPO, 700, cadena, 2);
		 mensajeEstado(estado, "listado con exito. \n", "listado sin exito. \n");
		 break;

		 case 15:
		 estado = mostrarTipoMasCaro(listaProducto, TAM, listaTipo, TAM_TIPO, precioMayor, cadena, 1003);
		 mensajeEstado(estado, "listado con exito. \n", "listado sin exito. \n");
		 break;

		 case 16:
		 mostrarVariosProductos(listaProducto, TAM, listaTipo, TAM_TIPO, cadena);
		 break;

		 case 17:
	     estado = mostrarProductosPorTipo(listaTipo, TAM_TIPO, listaProducto, TAM, cadena);
	     mensajeEstado(estado, "listado con exito. \n", "listado sin exito. \n");
		 break;

		 case 18:
		 estado = 1;
		 mensajeEstado(estado, "Gracias por usar mi programa. \n", "Error. \n");
		 break;

		 default:
		 estado = 0;
		 mensajeEstado(estado, "Gracias por usar mi programa. \n", "Error: Ingrese una opcion valida. \n");
	     break;

		}

	} while (opcion != 18);

	return 0;
}
