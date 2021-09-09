//amarilla juan sebastian 1C

#ifndef FUNCIONESNUMERICAS_H_
#define FUNCIONESNUMERICAS_H_
#include <stdio.h>

/// @fn void inicializarIndice(int[], int)
/// @brief inicializa todos los elementos
///
/// @param int numeros
/// @param int tam
void inicializarIndice(int numeros[], int tam);

/// @fn void ingresarNumerosAleatoria(int[])
/// @brief ingresas un numero desde cualquier indice
///
/// @param int numeros
void ingresarNumerosAleatoria(int numeros[]);

/// @fn int promedioPositivo(int[], int)
/// @brief sacas el promedio de los positivos
///
/// @param int numeros
/// @param int tam
/// @return retorna el promedio
int promedioPositivo(int numeros[], int tam);

/// @fn int sumaAntecesorDesdeNegativo(int[], int)
/// @brief desde el menor numero entre los negativos, se hace una suma hasta llegar a 0
///
/// @param int numeros
/// @param int tam
/// @return retorna el total de la suma
int sumaAntecesorDesdeNegativo(int numeros[], int tam);


#endif /* FUNCIONESNUMERICAS_H_ */
