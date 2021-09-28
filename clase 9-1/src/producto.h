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

/// @fn void mostrarProducto(eProducto, char[], char[])
/// @brief su funcion es mostrar un producto
///
/// @param eProducto unProducto
/// @param char nacionalidad[]
/// @param char tipo[]
void mostrarProducto(eProducto unProducto, char nacionalidad[], char tipo[]);

/// @fn void mostrarVariosProductos(eProducto[], int, char[], char[])
/// @brief su funcion es listar todos los productos
///
/// @param eProducto unProducto[]
/// @param int tam
/// @param char nacionalidad[]
/// @param char tipo[]
void mostrarVariosProductos(eProducto unProducto[], int tam, char nacionalidad[], char tipo[]);

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

/// @fn int mostrarProductosCaros(eProducto[], int, float, char[], char[])
/// @brief su funcion es mostrar un listado de productos de los mas caros
///
/// @param eProducto unProducto[]
/// @param int tam
/// @param float precioMayor
/// @param char nacionalidad[]
/// @param char tipo[]
/// @return retorna 1 si esta bien o 0 si esta mal
int mostrarProductosCaros(eProducto unProducto[], int tam, float precioMayor, char nacionalidad[], char tipo[]);

/// @fn int mostrarProductoPorPrecio(eProducto[], int, char[], char[], float)
/// @brief su funcion es mostrar un producto basandose en el precio mayor
///
/// @param eProducto unProducto[]
/// @param int tam
/// @param char nacionalidad[]
/// @param char tipo[]
/// @param float precioMayor
/// @return retorna 1 si esta bien o 0 si esta mal
int mostrarUnProductoPorPrecio(eProducto unProducto[], int tam, char nacionalidad[], char tipo[], float precioMayor);

/// @fn void calcularPromedioDeTipo(eProducto[], int, float, int, int, char[])
/// @brief calcular promedio de un tipo
///
/// @param eProducto unProducto[]
/// @param int tam
/// @param float promedio
/// @param int tipo
/// @param int contador
/// @param char cadena[]
void calcularPromedioDeTipo(eProducto unProducto[], int tam, float promedio, int tipo, int contador, char cadena[]);

/// @fn void mostrarPromedio(float, int, int, char[])
/// @brief mostrara un promedio de un tipo
///
/// @param float promedio
/// @param int tipo
/// @param int contador
/// @param char cadena[]
void mostrarPromedio(float promedio, int tipo, int contador, char cadena[]);

/// @fn float buscarPrecioMenorDeUnTipo(eProducto[], int, int)
/// @brief buscara el precio menor de un tipo
///
/// @param eProducto unProducto[]
/// @param int tam
/// @param int tipo
/// @return retorna el precio menor
float buscarPrecioMenorDeUnTipo(eProducto unProducto[], int tam, int tipo);

/// @fn int mostrarProductosBaratosDeUnTipo(eProducto[], int, float, char[], char[], int)
/// @brief mostrara un listado de productos baratos de un tipo
///
/// @param eProducto unProducto[]
/// @param int tam
/// @param float precioMenor
/// @param char nacionalidad[]
/// @param char tipoCadena[]
/// @param int tipo
/// @return retorna 1 si esta bien o 0 si esta mal
int mostrarProductosBaratosDeUnTipo(eProducto unProducto[], int tam, float precioMenor, char nacionalidad[], char tipoCadena[], int tipo);

/// @fn int mostrarUnProductoPorPrecioDeUnTipo(eProducto[], int, char[], char[], float, int)
/// @brie mostrara un producto de un tipo basandose en un precio
///
/// @param eProducto unProducto[]
/// @param int tam
/// @param char nacionalidad[]
/// @param char tipoCadena[]
/// @param float precioMenor
/// @param int tipo
/// @return retorna 1 si esta bien o 0 si esta mal
int mostrarUnProductoPorPrecioDeUnTipo(eProducto unProducto[], int tam, char nacionalidad[], char tipoCadena[], float precioMenor, int tipo);

/// @fn void mostrarVariosProductosDeUnaNacionalidad(eProducto[], int, char[], char[], int)
/// @brief mostrara productos de una nacionalidad
///
/// @param eProducto unProducto[]
/// @param int tam
/// @param char nacionalidadCadena[]
/// @param char tipo
/// @param int nacionalidad
void mostrarVariosProductosDeUnaNacionalidad(eProducto unProducto[], int tam, char nacionalidadCadena[], char tipo[], int nacionalidad);

/// @fn void mostrarVariosProductosDeUnTipoConLaCondicionDePrecio(eProducto[], int, char[], char[], int, float)
/// @brief listado de productos de un tipo con un precio determinado
///
/// @param eProducto unProducto[]
/// @param int tam
/// @param char nacionalidad[]
/// @param char tipoCadena[]
/// @param int tipo
/// @param float numero
void mostrarVariosProductosDeUnTipoConLaCondicionDePrecio(eProducto unProducto[], int tam, char nacionalidad[], char tipoCadena[], int tipo, float numero);

/// @fn int mostrarProductosCarosDeUnTipo(eProducto[], int, float, char[], char[], int)
/// @brief listado de productos caros de un tipo
///
/// @param eProducto unProducto[]
/// @param int tam
/// @param float precioMayor
/// @param char nacionalidad[]
/// @param char tipoCadena[]
/// @param int tipo
/// @return retorna 1 si esta bien o 0 si esta mal
int mostrarProductosCarosDeUnTipo(eProducto unProducto[], int tam, float precioMayor, char nacionalidad[], char tipoCadena[], int tipo);

/// @fn float buscarPrecioMayorDeUnTipo(eProducto[], int, int)
/// @brief buscara el precio mayor de un tipo
///
/// @param eProducto unProducto[]
/// @param int tam
/// @param int tipo
/// @return retornara el precio buscado
float buscarPrecioMayorDeUnTipo(eProducto unProducto[], int tam, int tipo);

#endif /* PRODUCTO_H_ */
