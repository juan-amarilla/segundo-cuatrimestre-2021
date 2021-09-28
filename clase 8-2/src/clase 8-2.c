/*
============================================================================
amarilla juan sebastian 1C

Ejercicio 8-2:
Una empresa importadora que comercializa productos Apple,
decide registrar de sus productos los siguientes datos:
.idProducto (numerico)
.descripcion (alfanumérico)
.nacionalidad (numérico, por el momento utilizaremos
un define: EEUU - CHINA - OTRO)
.tipo (numérico, por el momento utilizaremos un define: IPHONE -MAC - IPAD - ACCESORIOS)
.precio (numérico decimal)

Realizar un programa que permita interactuar con un menú
de usuarios con las siguientes opciones:

1.	ALTA Producto: Se ingresan los datos de UN solo
producto. Siempre y cuando haya espacio disponible en el
array.
2.	BAJA Producto: A partir del ingreso del ID.
Si existe el producto desaparece de la lista, dejando
espacio disponible para un nuevo producto.
3.	MODIFICACIÓN Producto: A partir del ingreso del ID.
Si existe se podrá modificar el precio o el tipo.
4.	LISTADO Productos.
5.	LISTADO ordenado por precio.
6.	LISTADO ordenado por descripción.


============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ingresarDatos.h"
#include "otrasFunciones.h"
#include "producto.h"
#define TAM 5
#define CARACTER 100

int main(void)
{
	eProducto listaProducto[TAM];
	int estado;
	int opcion;
	char cadena[CARACTER];
	char cadenaDos[CARACTER];

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
		 mostrarVariosProductos(listaProducto, TAM, cadena, cadenaDos);
		 break;

		 case 5:
	     ordenarPorPrecio(listaProducto, TAM);
		 break;

		 case 6:
		 ordenarPorDescripcion(listaProducto, TAM);
		 break;

		 case 7:
		 estado = 1;
		 mensajeEstado(estado, "Gracias por usar mi programa. \n", "Error. \n");
		 break;

		 default:
		 estado = 0;
		 mensajeEstado(estado, "Gracias por usar mi programa. \n", "Error: Ingrese una opcion valida. \n");
	     break;

		}

	} while (opcion != 7);

	return 0;
}
