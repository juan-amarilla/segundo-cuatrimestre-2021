// amarilla juan sebastian 1C

#ifndef NEXO_H_
#define NEXO_H_

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Producto.h"
#include "TipoProducto.h"
#define OCUPADO 1
#define VACIO 0

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

#endif /* NEXO_H_ */
