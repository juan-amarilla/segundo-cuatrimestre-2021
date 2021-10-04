//amarilla juan sebastian 1C

#ifndef PRODUCTO_H_
#define PRODUCTO_H_
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "IngresarDatos.h"
#include "TipoProducto.h"
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

/// @fn void mostrarProducto(eProducto, char[], char[])
/// @brief su funcion es mostrar un producto
///
/// @param eProducto unProducto
/// @param char nacionalidad[]
/// @param char tipo[]
void mostrarProducto(eProducto unProducto, eTipoProducto unTipo, char nacionalidad[]);

/// @fn void mostrarVariosProductos(eProducto[], int, char[], char[])
/// @brief su funcion es listar todos los productos
///
/// @param eProducto unProducto[]
/// @param int tam
/// @param char nacionalidad[]
/// @param char tipo[]
void mostrarVariosProductos(eProducto unProducto[], int tam, eTipoProducto unTipo[], int tamTip, char nacionalidad[]);

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

/// @fn int mostrarProductosCaros(eProducto[], int, eTipoProducto[], int, float, char[])
/// @brief listara los productos caros
///
/// @param eProducto unProducto[]
/// @param int tam
/// @param eTipoProducto unTipo[]
/// @param int tamTip
/// @param float precioMayor
/// @param char nacionalidad
/// @return retorna 1 si esta bien o 0 si esta mal
int mostrarProductosCaros(eProducto unProducto[], int tam, eTipoProducto unTipo[], int tamTip, float precioMayor, char nacionalidad[]);

/// @fn int mostrarUnProductoPorPrecio(eProducto[], int, eTipoProducto[], int, float, char[])
/// @brie mostrara un producto basandose en el precio
///
/// @param eProducto unProducto[]
/// @param int tam
/// @param eTipoProducto unTipo[]
/// @param int tamTip
/// @param float precio
/// @param char nacionalidad[]
/// @return retorna 1 si esta bien o 0 si esta mal
int mostrarUnProductoPorPrecio(eProducto unProducto[], int tam, eTipoProducto unTipo[], int tamTip, float precio, char nacionalidad[]);

/// @fn int calcularPrecioPromedioDeTipo(eProducto[], int, eTipoProducto[], int)
/// @brief calculara el promedio del precio por tipo de producto
///
/// @param eProducto unProducto[]
/// @param int tam
/// @param eTipoProducto unTipo[]
/// @param int tamTip
/// @return retorna 1 si salio bien o 0 si salio mal
int calcularPrecioPromedioDeTipo(eProducto unProducto[], int tam, eTipoProducto unTipo[], int tamTip);

/// @fn int mostrarTipoMasBarato(eProducto[], int, eTipoProducto[], int, float, char[], int)
/// @brief mostrara el tipo mas barato
///
/// @param eProducto unProducto[]
/// @param int tam
/// @param eTipoProducto unTipo[]
/// @param int tamTip
/// @param float precioMenor
/// @param char nacionalidad[]
/// @param int tipo
/// @return retorna 1 si esta bien o 0 si esta mal
int mostrarTipoMasBarato(eProducto unProducto[], int tam, eTipoProducto unTipo[], int tamTip, float precioMenor, char nacionalidad[], int tipo);

/// @fn float buscarPrecioMenorDeUnTipo(eProducto[], int, int)
/// @brief busca el precio menor de un tipo
///
/// @param eProducto unProducto[]
/// @param int tam
/// @param int tipo
/// @return retorna el precio menor de ese tipo
float buscarPrecioMenorDeUnTipo(eProducto unProducto[], int tam, int tipo);

/// @fn int mostrarProductosDeNaciolidadEnCuenta(eProducto[], int, eTipoProducto[], int, char[], int)
/// @brief listara productos basandose en una nacionalidad
///
/// @param eProducto unProducto[]
/// @param int tam
/// @param eTipoProducto unTipo[]
/// @param int tamTip
/// @param char nacionalidadCadena[]
/// @param int nacionalidad
/// @return retorna 1 si esta bien o 0 si esta mal
int mostrarProductosDeNaciolidadEnCuenta(eProducto unProducto[], int tam, eTipoProducto unTipo[], int tamTip, char nacionalidadCadena[], int nacionalidad);

/// @fn int mostrarProductoDeTipoMayorDePrecio(eProducto[], int, eTipoProducto[], int, float, char[], int)
/// @brief mostrara el tipo con mayor precio de producto
///
/// @param eProducto unProducto[]
/// @param int tam
/// @param eTipoProducto unTipo[]
/// @param int tamTip
/// @param float precioMayor
/// @param char nacionalidad[]
/// @param int tipo
/// @return retorna 1 si esta bien o 0 si esta mal
int mostrarProductoDeTipoMayorDePrecio(eProducto unProducto[], int tam, eTipoProducto unTipo[], int tamTip, float precioMayor, char nacionalidad[], int tipo);

/// @fn int mostrarTipoMasCaro(eProducto[], int, eTipoProducto[], int, float, char[], int)
/// @brief mostrara el tipo mas caro
///
/// @param eProducto unProducto[]
/// @param int tam
/// @param eTipoProducto unTipo[]
/// @param int tamTip
/// @param float precioMayor
/// @param char nacionalidad[]
/// @param int tipo
/// @return retorna 1 si esta bien o 0 si esta mal
int mostrarTipoMasCaro(eProducto unProducto[], int tam, eTipoProducto unTipo[], int tamTip, float precioMayor, char nacionalidad[], int tipo);

/// @fn float buscarPrecioMayorDeUnTipo(eProducto[], int, int)
/// @brief buscara el precio mayor de un tipo
///
/// @param eProducto unProducto[]
/// @param int tam
/// @param int tipo
/// @return retorna el precio mayor
float buscarPrecioMayorDeUnTipo(eProducto unProducto[], int tam, int tipo);

/// @fn int mostrarProductosPorTipo(eTipoProducto[], int, eProducto[], int, char[])
/// @brief listara por tipo todos los productos
///
/// @param eTipoProducto unTipo[]
/// @param int tamTip
/// @param eProducto unProducto[]
/// @param int tam
/// @param char nacionalidad[]
/// @return retorna 1 si esta bien o 0 si esta mal
int mostrarProductosPorTipo(eTipoProducto unTipo[], int tamTip, eProducto unProducto[], int tam, char nacionalidad[]);

#endif /* PRODUCTO_H_ */
