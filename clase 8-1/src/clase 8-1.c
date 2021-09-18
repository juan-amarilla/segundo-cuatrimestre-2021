/*
============================================================================
amarilla juan sebastian 1C

Ejercicio 8-1:
Crear la estructura Jugador (nombre, goles metidos,
partidos jugados, promedio de goles).
Crear una función que permita cargar los datos de un jugador
y otra que los muestre.
Una tercera función calculará el promedio de goles.

============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"
#define T 2

int main(void)
{

	eJugador jugador[T];

	setbuf(stdout, NULL);

	cargarDatos(jugador, T);
	mostrarDatos(jugador, T);
	calcularPromedio(jugador, T);

	return 0;
}
