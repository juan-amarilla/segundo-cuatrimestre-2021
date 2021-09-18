//amarilla juan sebastian 1C

#ifndef FUNCIONES_H_
#define FUNCIONES_H_
#include <stdio.h>

typedef struct
{
	char nombre[20];
	int goles;
	int partidosJugados;
	int promedioGoles;

}eJugador;

/// @fn void cargarDatos(eJugadores[], int)
/// @brief su funcion es que el usuario ingresa distintos datos
///
/// @param eJugadores jugador[]
/// @param int tam
void cargarDatos(eJugador jugador[], int tam);

/// @fn void mostrarDatos(eJugadores[], int)
/// @brief su funcion es mostrar datos
///
/// @param eJugadores jugador[]
/// @param int tam
void mostrarDatos(eJugador jugador[], int tam);

/// @fn void calcularPromedio(eJugadores[], int)
/// @brief su funcion es calcular promedio y mostrarlo
///
/// @param eJugadores jugador[]
/// @param int tam
void calcularPromedio(eJugador jugador[], int tam);

#endif /* FUNCIONES_H_ */
