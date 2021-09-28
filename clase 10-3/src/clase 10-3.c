/*
============================================================================
amarilla juan sebastian 1C

Ejercicio 10-3:
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
		 break;

		 case 15:
		 break;

		 case 16:
		 break;

		 case 17:
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
