//amarilla juan sebastian 1C

#ifndef GENERICA_H_
#define GENERICA_H_
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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

/// @fn int buscarEstado(int)
/// @brief su funcion es verificar si esta ocupado o vacio un estado
///
/// @param int estado
/// @return retorna 1 si esta libre o 0 si esta vacio
int buscarEstado(int estado);

/// @fn void inicializarIndice(int[], int)
/// @brief su funcion es inicializar en 0 los numeros
///
/// @param int numeros[]
/// @param int tam
void inicializarIndice(int numeros[], int T); //podes inicializar estados de estructuras

/// @fn int promedioPositivo(int[], int)
/// @brief sacas el promedio de los positivos
///
/// @param int numeros
/// @param int tam
/// @return retorna el promedio
int promedioPositivo(int numeros[], int tam);

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

/// @fn float calcularSuma(float, float)
/// @brief permite hacer una suma entre 2 numeros flotantes
///
/// @param float numeroUno
/// @param float numeroDos
/// @return retorna el resultado de la suma de los 2 numeros
float calcularSuma(float numeroUno, float numeroDos);

/// @fn float calcularResta(float, float)
/// @brief permite hacer una resta entre 2 numeros flotantes
///
/// @param float numeroUno
/// @param float numeroDos
/// @return retorna el resultado de la resta de los 2 numeros
float calcularResta(float numeroUno, float numeroDos);

/// @fn float calcularDivision(float, float)
/// @brief permite hacer una division entre 2 numeros flotantes
///
/// @param float numeroUno
/// @param float numeroDos
/// @return retorna el resultado de la division de los 2 numeros
float calcularDivision(float numeroUno, float numeroDos);

/// @fn float calcularMultiplicacion(float, float)
/// @brief permite hacer una multiplicacion entre 2 numeros flotantes
///
/// @param float numeroUno
/// @param float numeroDos
/// @return retorna el resultado de la multiplicacion de los 2 numeros
float calcularMultiplicacion(float numeroUno, float numeroDos);

/// @fn float calcularFactorial(float)
/// @brief permite obtener el factorial de un numero
///
/// @param float numero
/// @return retorna el factorial del numero ingresado
float calcularFactorial(float numero);

#endif /* GENERICA_H_ */
