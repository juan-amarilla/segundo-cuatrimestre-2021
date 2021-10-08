/*
============================================================================
amarilla juan sebastian 1C

Ejercicio 11-1:
Una empresa importadora que comercializa productos Apple, decide
registrar de sus productos los siguientes datos:
-idProducto (numerico)
-descripcion (alfanumérico)
-nacionalidad (numérico, por el momento utilizaremos un define: EEUU - CHINA - OTRO)
-tipo (numérico)
-precio (numérico decimal)

Agregar la estructura etipoProducto, que definirá los siguientes campos:
-idTipo (numérico)
-descripcionTipo(alfanumérico)

Para esta estructura en principio trabajaremos con datos hardcodeados:
idTipo	descripcionTipo
1000	Iphone
1001	Ipad
1002	Mac
1003	Accesorios

Agregar la estructura eNacionalidad, que definirá los siguientes campos:
-idNacionalidad (numérico)
-descripcionNacionalidad(alfanumérico)

Para esta estructura en principio trabajaremos con datos hardcodeados:
idNacionalidad	descripcionNacionalidad
1	             EEUU
2	             CHINA
3	             OTRO



Realizar un programa que permita interactuar con un menú de usuarios con las siguientes opciones:
1-ALTA Producto: Se ingresan los datos de UN solo producto.
Siempre y cuando haya espacio disponible en el array.
Al momento de dar de alta el producto, el usuario podrá elegir el tipo de producto,
de una lista que se le desplegará en pantalla.
2-BAJA Producto: A partir del ingreso del ID. Si existe el producto desaparece de la lista,
dejando espacio disponible para un nuevo producto.
3-MODIFICACIÓN Producto: A partir del ingreso del ID. Si existe se podrá modificar
el precio o el tipo. Si modifica el tipo de producto, se utilizara el mismo criterio que para dar de alta.
4-LISTADO Productos.
5-LISTADO ordenado por precio.
6-LISTADO ordenado por descripción.
7-El/los  productos más caros.
8-Precio promedio por tipo de producto. Se deberá mostrar la descripción del tipo y a continuación el precio promedio.
9-El/los  productos más caros.
10-Los productos que cuestan 700
11-Precio promedio por tipo de producto.
12-De los Iphone el más barato
13-Los productos "MADE IN CHINA"
14-Las MAC que cuestan más de 700 USD
15-El/Los Accesorios más caros

Se agregan los siguientes listados:
16-El listado de todos los productos con la descripción del tipo.
17-Por cada tipo la lista de productos.

Se agregan los siguientes listados:
18-El/los tipos de productos con mas productos importados.
===========================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Nexo.h"
#define TAM 4
#define TAM_TIPO 4
#define TAM_NACIONALIDAD 3
#define CARACTERES 100

int main(void)
{
	eProducto listaProducto[TAM];/*= {{100,"arg",1, 1003,140,OCUPADO},
			                        {200,"br",2, 1002,705,OCUPADO},
			                        {300,"ark",3, 1003,700,OCUPADO},
			                        {400,"yy",1, 1002,400,OCUPADO}};*/

	eTipoProducto listaTipo[TAM_TIPO]={ {1000, "Iphone"},
			                            {1001, "Ipad"},
			                            {1002, "Mac"},
			                            {1003, "Accesorios"} };

    eNacionalidad listaNacionalidad[TAM_NACIONALIDAD]={{1,"EEU"},
                                                       {2,"CHINA"},
													   {3,"OTRO"}};
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
		 mostrarVariosProductos(listaProducto, TAM, listaTipo, TAM_TIPO, listaNacionalidad, TAM_NACIONALIDAD);
		 break;

		 case 5:
	     ordenarPorPrecio(listaProducto, TAM);
	     mostrarVariosProductos(listaProducto, TAM, listaTipo, TAM_TIPO, listaNacionalidad, TAM_NACIONALIDAD);
		 break;

		 case 6:
		 ordenarPorDescripcion(listaProducto, TAM);
		 mostrarVariosProductos(listaProducto, TAM, listaTipo, TAM_TIPO, listaNacionalidad, TAM_NACIONALIDAD);
		 break;

		 case 7:
		 estado = mostrarProductosCaros(listaProducto, TAM, listaTipo, TAM_TIPO, precioMayor, listaNacionalidad, TAM_NACIONALIDAD);
		 mensajeEstado(estado, "listado con exito. \n", "listado sin exito. \n");
		 break;

		 case 8:
		 estado = calcularPrecioPromedioDeTipo(listaProducto, TAM, listaTipo, TAM_TIPO);
		 mensajeEstado(estado, "Operacion con exito. \n", "Operacion sin exito. \n");
		 break;

		 case 9:
		 estado = mostrarProductosCaros(listaProducto, TAM, listaTipo, TAM_TIPO, precioMayor, listaNacionalidad, TAM_NACIONALIDAD);
		 mensajeEstado(estado, "listado con exito. \n", "listado sin exito. \n");
		 break;

		 case 10:
		 estado = mostrarUnProductoPorPrecio(listaProducto, TAM, listaTipo, TAM_TIPO, 700, listaNacionalidad, TAM_NACIONALIDAD);
		 mensajeEstado(estado, "listado con exito. \n", "listado sin exito. \n");
		 break;

		 case 11:
		 estado = calcularPrecioPromedioDeTipo(listaProducto, TAM, listaTipo, TAM_TIPO);
		 mensajeEstado(estado, "Operacion con exito. \n", "Operacion sin exito. \n");
		 break;

		 case 12:
		 estado = mostrarTipoMasBarato(listaProducto, TAM, listaTipo, TAM_TIPO, listaNacionalidad, TAM_NACIONALIDAD, precioMenor, 1000);
		 mensajeEstado(estado, "listado con exito. \n", "listado sin exito. \n");
		 break;

		 case 13:
		 estado = mostrarProductosDeNaciolidadEnCuenta(listaProducto, TAM, listaTipo, TAM_TIPO, listaNacionalidad, TAM_NACIONALIDAD, 3);
		 mensajeEstado(estado, "listado con exito. \n", "listado sin exito. \n");
		 break;

		 case 14:
		 estado = mostrarProductoDeTipoMayorDePrecio(listaProducto, TAM, listaTipo, TAM_TIPO, listaNacionalidad, TAM_NACIONALIDAD, 700, 1002);
		 mensajeEstado(estado, "listado con exito. \n", "listado sin exito. \n");
		 break;

		 case 15:
		 estado = mostrarTipoMasCaro(listaProducto, TAM, listaTipo, TAM_TIPO, listaNacionalidad, TAM_NACIONALIDAD, precioMayor, 1003);
		 mensajeEstado(estado, "listado con exito. \n", "listado sin exito. \n");
		 break;

		 case 16:
		 mostrarVariosProductos(listaProducto, TAM, listaTipo, TAM_TIPO, listaNacionalidad, TAM_NACIONALIDAD);
		 break;

		 case 17:
	     estado = mostrarProductosPorTipo(listaTipo, TAM_TIPO, listaProducto, TAM, listaNacionalidad, TAM_NACIONALIDAD);
	     mensajeEstado(estado, "listado con exito. \n", "listado sin exito. \n");
		 break;

		 case 18:
		 estado = tiposMasCantidad(listaTipo, TAM_TIPO, listaProducto, TAM, listaNacionalidad, TAM_NACIONALIDAD);
		 mensajeEstado(estado, "listado con exito. \n", "listado sin exito. \n");
	     break;

		 case 19:
		 estado = 1;
		 mensajeEstado(estado, "Gracias por usar mi programa. \n", "Error. \n");
		 break;

		 default:
		 estado = 0;
		 mensajeEstado(estado, "Gracias por usar mi programa. \n", "Error: Ingrese una opcion valida. \n");
	     break;

		}

	} while (opcion != 19);

	return 0;
}
