//amarilla juan sebastian 1C

#ifndef PRODUCTO_H_
#define PRODUCTO_H_
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "IngresarDatos.h"
#define TAM_CARACTER 50
#define TAM 4
#define TAM_TIPO 4
#define TAM_NACIONALIDAD 3
#define OCUPADO 1
#define VACIO 0

typedef struct
{
	int idProducto;
	char descripcion[TAM_CARACTER];
	int nacionalidad;
	int tipo;
	float precio;
	int estado;

}eProducto;

/// @fn int verificarProductoDeTipo(eProducto[], int, int)
/// @brief su funcion es verificar que producto es
///
/// @param eProducto unProducto[]
/// @param int tam
/// @param int id
/// @return retorna la posicion si esta bien o -1 si esta mal
int verificarProductoDeTipo(eProducto unProducto[], int tam, int id);

/// @fn int verificarProductoDeNacionalidad(eProducto[], int, int)
/// @brief su funcion es verificar que producto es
///
/// @param eProducto unProducto[]
/// @param int tam
/// @param int id
/// @return retorna la posicion si esta bien o -1 si esta mal
int verificarProductoDeNacionalidad(eProducto unProducto[], int tam, int id);

/// @fn eProducto pedirProducto(eProducto, char[], int)
/// @brief su funcion es que el usuario pueda ingresar los datos
///
/// @param eProducto unProducto
/// @param char cadena[]
/// @param int id
/// @return retorna los datos ingresados
eProducto pedirProducto(eProducto unProducto, char cadena[], int id);

/// @fn int altaProducto(eProducto[], int, char[], int)
/// @brief su funcion es dar de alta un producto
///
/// @param eProducto unProducto[]
/// @param int tam
/// @param char cadena[]
/// @param int id
/// @return retorna 1 si salio bien o 0 si salio mal
int altaProducto(eProducto unProducto[], int tam, char cadena[], int id);

/// @fn void inicializarProductos(eProducto[], int)
/// @brief su funcion es inicializar los estados de los productos en 0
///
/// @param eProducto unProducto[]
/// @param int tam
void inicializarProductos(eProducto unProducto[], int tam);

/// @fn int bajaProducto(eProducto[], int, char[])
/// @brief su funcion es dar de baja un producto
///
/// @param eProducto unProducto[]
/// @param int tam
/// @param char cadena[]
/// @return retorna 1 si salio bien o 0 si salio mal
int bajaProducto(eProducto unProducto[], int tam, char cadena[]);

/// @fn void menuIdProducto(eProducto[], int)
/// @brief su funcion es mostrar un menu de id de productos
///
/// @param eProducto listaProducto[]
/// @param int tam
void menuIdProducto(eProducto listaProducto[], int tam);

/// @fn void ordenarPorPrecio(eProducto[], int)
/// @brief su funcion es ordenar por precio los productos
///
/// @param eProducto unProducto[]
/// @param int tam
void ordenarPorPrecio(eProducto unProducto[], int tam);

/// @fn void ordenarPorDescripcion(eProducto[], int)
/// @brief su funcion es ordenar por descripcion los productos
///
/// @param eProducto unProducto[]
/// @param int tam
void ordenarPorDescripcion(eProducto unProducto[], int tam);

/// @fn int buscarEstado(int)
/// @brief su funcion es verificar si esta ocupado o vacio un estado de un producto
///
/// @param int estado
/// @return retorna 1 si esta ocupado o 0 si esta vacio
int buscarEstado(int estado);


/// @fn float buscarPrecioMayor(eProducto[], int)
/// @brief su funcion es buscar el precio mayor
///
/// @param eProducto unProducto[]
/// @param int tam
/// @return retorna el precio mayor
float buscarPrecioMayor(eProducto unProducto[], int tam);

#endif /* PRODUCTO_H_ */
