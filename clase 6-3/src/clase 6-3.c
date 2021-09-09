/*
============================================================================
amarilla juan sebastian 1C

Ejercicio 6-3:
Pedirle al usuario su nombre y apellido
(en variables separadas, una para el nombre y otra para el apellido).
Ninguna de las dos variables se puede modificar.
Debemos lograr guardar en una tercer variable el apellido
y el nombre con el siguiente formato:
Por ejemplo:
Si el nombre es juan ignacio
y el apellido es gOmEz, la salida deber�a ser:
Gomez, Juan Ignacio

============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "funcionesMias.h"
#define T_NOMBRE 30
#define T_APELLIDO 30
#define T_COMPLETO 30


int main(void)
{
	char nombre[T_NOMBRE];
	char apellido[T_APELLIDO];
	char apellidoNombre[T_COMPLETO];

	setbuf(stdout, NULL);

	ingresarDatos("Ingrese nombre: \n", nombre);
	ingresarDatos("Ingrese apellido: \n", apellido);
	mostrarDatos(apellidoNombre, nombre, apellido);

	return 0;
}
