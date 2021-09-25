//amarilla juan sebastian 1C

#ifndef PRODUCTO_H_
#define PRODUCTO_H_
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ingresarDatos.h"
#define TAM_CARACTER 50
#define TAM 5
#define EEU 1
#define CHINA 2
#define OTRO 3
#define IPHONE 1
#define MAC 2
#define IPAD 3
#define ACCESORIOS 4
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

/// @fn eProducto pedirProducto(eProducto, char[])
/// @brief su funcion es ingresar los datos del producto
///
/// @param eProducto unProducto
/// @param char cadena[]
/// @return retorna los datos ingresados
eProducto pedirProducto(eProducto unProducto, char cadena[]);

/// @fn int altaProducto(eProducto[], int, char[])
/// @brief su funcion es dar de alta un producto
///
/// @param eProducto unProducto[]
/// @param int tam
/// @param char cadena[]
/// @return retorna 1 si salio bien o 0 si salio mal
int altaProducto(eProducto unProducto[], int tam, char cadena[]);

/// @fn void mostrarProducto(eProducto)
/// @brief su funcion es mostrar un producto
///
/// @param eProducto unProducto
void mostrarProducto(eProducto unProducto);

/// @fn void mostrarVariosProductos(eProducto[], int)
/// @brief su funcion es mostrar un listado de productos
///
/// @param eProducto unProducto[]
/// @param int tam
void mostrarVariosProductos(eProducto unProducto[], int tam);

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

/// @fn int modificarProducto(eProducto[], int, char[])
/// @brief su funcion es modificar el precio o el tipo
///
/// @param eProducto unProducto[]
/// @param int tam
/// @param char cadena[]
/// @return retorna 1 si salio bien o 0 si salio mal
int modificarProducto(eProducto unProducto[], int tam, char cadena[]);

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

/// @fn void verificacionNacionalidad(int, char[])
/// @brief su funcion es verificar el entero y luego verificar que nacionalidad es
///
/// @param int opcion
/// @param char caracter[]
void verificacionNacionalidad(int opcion, char caracter[]);

/// @fn void verificacionTipo(int, char[])
/// @brief su funcion es verificar el entero y luego verificar que tipo es
///
/// @param int opcion
/// @param char caracter[]
void verificacionTipo(int opcion, char caracter[]);

#endif /* PRODUCTO_H_ */
