//amarilla juan sebastian 1C

#ifndef PRODUCTO_H_
#define PRODUCTO_H_
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TAM_CARACTER 50
#define TAM 4
#define TAM_TIPO 4
#define EEU 1
#define CHINA 2
#define OTRO 3
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

/// @fn float buscarPrecioMenorDeUnTipo(eProducto[], int, int)
/// @brief busca el precio menor de un tipo
///
/// @param eProducto unProducto[]
/// @param int tam
/// @param int tipo
/// @return retorna el precio menor de ese tipo
float buscarPrecioMenorDeUnTipo(eProducto unProducto[], int tam, int tipo);

/// @fn float buscarPrecioMayorDeUnTipo(eProducto[], int, int)
/// @brief buscara el precio mayor de un tipo
///
/// @param eProducto unProducto[]
/// @param int tam
/// @param int tipo
/// @return retorna el precio mayor
float buscarPrecioMayorDeUnTipo(eProducto unProducto[], int tam, int tipo);

#endif /* PRODUCTO_H_ */
