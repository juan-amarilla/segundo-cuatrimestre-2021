//amarilla juan sebastian 1C

#ifndef INGRESARDATOS_H_
#define INGRESARDATOS_H_
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "otrasFunciones.h"

/// @fn int pedirEntero(int, char[])
/// @brief su funcion es ingresar un entero
///
/// @param int entero
/// @param char mensaje[]
/// @return retorna el numero ingresado
int pedirEntero(int entero, char mensaje[]);

/// @fn float pedirFlotante(float, char[])
/// @brief su funcion es ingresar un flotante
///
/// @param float flotante
/// @param char mensaje[]
/// @return retorna el numero ingresado
float pedirFlotante(float flotante, char mensaje[]);

/// @fn void pedirCadena(char[], char[])
/// @brief su funcion es ingresar una cadena de caracteres
///
/// @param char cadena[]
/// @param char mensaje[]
void pedirCadena(char cadena[], char mensaje[]);

/// @fn void pedirEnteroValidado(char[], char[], int*)
/// @brief su funcion es ingresar un entero validado
///
/// @param char cadena[]
/// @param char mensaje[]
/// @param int* numero
void pedirEnteroValidado(char cadena[], char mensaje[], int* numero);

/// @fn void pedirFlotanteValidado(char[], char[], float*)
/// @brief su funcion es ingresar un flotante validado
///
/// @param char cadena[]
/// @param char mensaje[]
/// @param float* numero
void pedirFlotanteValidado(char cadena[], char mensaje[], float* numero);

/// @fn void pedirCadenaValidado(char[], char[], char[])
/// @brief su funcion es ingresar una cadena de letras validado
///
/// @param char cadena[]
/// @param char mensaje[]
/// @param char cadenaValidado[]
void pedirCadenaValidado(char cadena[], char mensaje[], char cadenaValidado[]);

#endif /* INGRESARDATOS_H_ */
