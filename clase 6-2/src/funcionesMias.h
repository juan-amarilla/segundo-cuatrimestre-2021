//amarilla juan sebastian 1C

#ifndef FUNCIONESMIAS_H_
#define FUNCIONESMIAS_H_
#include <stdio.h>

/// @fn void ingresarNumeros(int[], int)
/// @brief ingresas numeros enteros
///
/// @param int numeros[]
/// @param int T
void ingresarNumeros(int numeros[], int T);

/// @fn void inicializarIndice(int[], int)
/// @brief su funcion es inicializar en 0 los numeros
///
/// @param int numeros[]
/// @param int tam
void inicializarIndice(int numeros[], int T);

/// @fn void ordenamiento(int[], int)
/// @brief ordenas los numeros de manera creciente y decreciente
///
/// @param int numeros[]
/// @param int T
void ordenamiento(int numeros[], int T);

/// @fn void listarCrecientePositivo(int[], int)
/// @brief aparece una lista de los numeros positivos de forma creciente
///
/// @param int numeros[]
/// @param int T
void listarCrecientePositivo(int numeros[], int T);

/// @fn void listarDecrecienteNegativo(int[], int)
/// @brief aparece una lista de los numeros negativos de forma decreciente
///
/// @param int numeros[]
/// @param int T
void listarDecrecienteNegativo(int numeros[], int T);

#endif /* FUNCIONESMIAS_H_ */
