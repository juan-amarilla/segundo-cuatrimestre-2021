//amarilla juan sebastian 1C

#ifndef FUNCIONESDENUMEROS_H_
#define FUNCIONESDENUMEROS_H_
#include <stdio.h>

/// @fn void ingresarNumeros(int[], int, int, int)
/// @brief su funcion es ingresar numeros
///
/// @param int numeros[]
/// @param int T
/// @param int minimo
/// @param int maximo
void ingresarNumeros(int numeros[], int T, int minimo, int maximo);

/// @fn int cantidadDePositivos(int[], int, int)
/// @brief su funcion es contar cuantos positivos hay
///
/// @param int numeros
/// @param int T
/// @param int contador
/// @return retorna la cantidad de positivos
int cantidadDePositivos(int numeros[], int T, int contador);

/// @fn int cantidadDeNegativos(int[], int, int)
/// @brief su funcion es contar cuantos negativos hay
///
/// @param int numeros
/// @param int T
/// @param int contador
/// @return retorna la cantidad de negativos
int cantidadDeNegativos(int numeros[], int T, int contador);

/// @fn int sumatoriaDePares(int[], int)
/// @brief su funcion es acumular todos los numeros pares
///
/// @param int numeros
/// @param int T
/// @return retorna el acumulador completo
int sumatoriaDePares(int numeros[], int T);

/// @fn int mayorImpar(int[], int)
/// @brief busca el mayor de los impares
///
/// @param int numeros
/// @param int T
/// @return retorna el mayor de los impares
int mayorImpar(int numeros[], int T);

/// @fn void mostrarNumerosIngresados(int[], int)
/// @brief su funcion es listar todos los numeros ingresados
///
/// @param int numeros
/// @param int T
void mostrarNumerosIngresados(int numeros[], int T);

/// @fn void mostrarNumerosIngresadosPares(int[], int)
/// @brief su funcion es listar todos los numeros ingresados pares
///
/// @param int numeros
/// @param int T
void mostrarNumerosIngresadosPares(int numeros[], int T);

/// @fn void mostrarNumerosIngresadosDeIndiceImpar(int[], int)
/// @brief su funcion es listar todos los numeros ingresados de indice impar
///
/// @param int numeros
/// @param int T
void mostrarNumerosIngresadosDeIndiceImpar(int numeros[], int T);

/// @fn int validacionesSignos(int[], int)
/// @brief valida si un numero es positivo o negativo
///
/// @param int numero
/// @return retorna 1 si es positivo o 0 si es negativo
int validacionesSignos(int numero);

/// @fn int verificacionesPar(int[], int)
/// @brief verifica si es par o no
///
/// @param int numero
/// @return retorna 1 si es par o 0 si es impar
int verificacionesPar(int numero);


#endif /* FUNCIONESDENUMEROS_H_ */
