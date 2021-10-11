//amarilla juan sebastian 1C

#ifndef OTRASFUNCIONES_H_
#define OTRASFUNCIONES_H_
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/// @fn void mensajeEstado(int, char[], char[])
/// @brief su funcion es mostrar uno de los dos mensajes
///
/// @param int estado
/// @param char mensaje[]
/// @param char error[]
void mensajeEstado(int estado, char mensaje[], char error[]);

/// @fn void menu()
/// @brief su funcion es mostrar un menu de opciones
///
void menu();

/// @fn void menuDeTipo()
/// @brief su funcion es mostrar un menu de tipo
///
void menuDeTipo();

/// @fn void menuDeTipo()
/// @brief su funcion es mostrar un menu de nacionalidad
///
void menuDeNacionalidad();

/// @fn int validarNumeroEntero(int*, char[])
/// @brief su funcion es validar si el numero es entero
///
/// @param int* numeroEntero
/// @param char numero[]
/// @return retorna 1 si salio bien o 0 si salio mal
int validarNumeroEntero(int* numeroEntero, char numero[]);

/// @fn int validarNumeroFlotante(float*, char[])
/// @brief su funcion es validar si el numero es flotante
///
/// @param float* numeroFlotante
/// @param char numero[]
/// @return retorna 1 si salio bien o 0 si salio mal
int validarNumeroFlotante(float* numeroFlotante, char numero[]);

/// @fn int validarLetras(char[], char[])
/// @brief su funcion es validar si la cadena son solamente letras
///
/// @param char letras[]
/// @param char caracter[]
/// @return retorna 1 si salio bien o 0 si salio mal
int validarLetras(char letras[], char caracter[]);

/// @fn int validarAlfaNumerico(char[], char[])
/// @brief su funcion es validar si la cadena son solamente letras y numeros
///
/// @param char letras[]
/// @param char caracter[]
/// @return retorna 1 si salio bien o 0 si salio mal
int validarAlfaNumerico(char letras[], char caracter[]);

#endif /* OTRASFUNCIONES_H_ */
