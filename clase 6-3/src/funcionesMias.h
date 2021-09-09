//amarilla juan sebastian 1C

#ifndef FUNCIONESMIAS_H_
#define FUNCIONESMIAS_H_
#include <string.h>
#include <stdio.h>
#include <ctype.h>

/// @fn void ingresarDatos(char[], char[])
/// @brief ingresas un nombre o apellido
///
/// @param char mensaje[]
/// @param char dato[]
void ingresarDatos(char mensaje[], char dato[]);

/// @fn void mostrarDatos(char[], char[], char[])
/// @brief muestra el apellido y el nombre
///
/// @param char apellidoNombre[]
/// @param char nombre[]
/// @param char apellido[]
void mostrarDatos(char apellidoNombre[], char nombre[], char apellido[]);

/// @fn void mayusculasAutomaticos(char[])
/// @brief su funcion es transformar una letra en mayuscula luego de un espacio en blanco
///
/// @param char apellidoNombre[]
void mayusculasAutomaticos(char apellidoNombre[]);

#endif /* FUNCIONESMIAS_H_ */
