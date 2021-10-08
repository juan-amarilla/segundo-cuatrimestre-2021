// amarilla juan sebastian 1C

#ifndef NEXO_H_
#define NEXO_H_

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Producto.h"
#include "TipoProducto.h"
#include "Nacionalidad.h"
#define OCUPADO 1
#define VACIO 0

typedef struct
{
	int id;
	int contador;
	float acumulador;

}eAuxiliar;

/// @fn void mostrarProducto(eProducto, eTipoProducto, eNacionalidad)
/// @brief mostrara un producto
///
/// @param eProducto unProducto
/// @param eTipoProducto unTipo
/// @param eNacionalidad unaNacionalidad
void mostrarProducto(eProducto unProducto, eTipoProducto unTipo, eNacionalidad unaNacionalidad);

/// @fn void mostrarVariosProductos(eProducto[], int, eTipoProducto[], int, eNacionalidad[], int)
/// @brief listara todos los productos
///
/// @param eProducto unProducto[]
/// @param int tam
/// @param eTipoProducto unTipo[]
/// @param int tamTip
/// @param eNacionalidad unaNacionalidad[]
/// @param int tamNac
void mostrarVariosProductos(eProducto unProducto[], int tam, eTipoProducto unTipo[], int tamTip, eNacionalidad unaNacionalidad[], int tamNac);

/// @fn int mostrarProductosCaros(eProducto[], int, eTipoProducto[], int, float, eNacionalidad[], int)
/// @brief listara los productos mas caros
///
/// @param eProducto unProducto[]
/// @param int tam
/// @param eTipoProducto unTipo[]
/// @param int tamTip
/// @param float precioMayor
/// @param eNacionalidad unaNacionalidad
/// @param int tamNac
/// @return retorna 1 si esta bien o 0 si salio mal
int mostrarProductosCaros(eProducto unProducto[], int tam, eTipoProducto unTipo[], int tamTip, float precioMayor, eNacionalidad unaNacionalidad[], int tamNac);

/// @fn int mostrarUnProductoPorPrecio(eProducto[], int, eTipoProducto[], int, float, eNacionalidad[], int)
/// @brief mostrara un producto basandose en el precio
///
/// @param eProducto unProducto[]
/// @param int tam
/// @param eTipoProducto unTipo[]
/// @param int tamTip
/// @param float precio
/// @param eNacionalidad unaNacionalidad[]
/// @param int tamNac
/// @return retorna 1 si salio bien o 0 si salio mal
int mostrarUnProductoPorPrecio(eProducto unProducto[], int tam, eTipoProducto unTipo[], int tamTip, float precio, eNacionalidad unaNacionalidad[], int tamNac);

/// @fn int calcularPrecioPromedioDeTipo(eProducto[], int, eTipoProducto[], int)
/// @brief calculara el promedio de cada tipo
///
/// @param eProducto unProducto[]
/// @param int tam
/// @param eTipoProducto unTipo[]
/// @param int tamTip
/// @return retornara 1 si salio bien o 0 si salio mal
int calcularPrecioPromedioDeTipo(eProducto unProducto[], int tam, eTipoProducto unTipo[], int tamTip);

/// @fn int mostrarTipoMasBarato(eProducto[], int, eTipoProducto[], int, eNacionalidad[], int, int, float)
/// @brief listara el mas barato de un tipo de los productos
///
/// @param eProducto unProducto[]
/// @param int tam
/// @param eTipoProducto unTipo[]
/// @param int tamTip
/// @param eNacionalidad unaNacionalidad[]
/// @param int tamNac
/// @param int tipo
/// @param float precioMenor
/// @return retornara 1 si salio bien o 0 si salio mal
int mostrarTipoMasBarato(eProducto unProducto[], int tam, eTipoProducto unTipo[], int tamTip, eNacionalidad unaNacionalidad[], int tamNac, int tipo, float precioMenor);

/// @fn int mostrarProductosDeNaciolidadEnCuenta(eProducto[], int, eTipoProducto[], int, eNacionalidad[], int, int)
/// @brief listara los productos de una nacionalidad
///
/// @param eProducto unProducto[]
/// @param int tam
/// @param eTipoProducto unTipo[]
/// @param int tamTip
/// @param eNacionalidad unaNacionalidad[]
/// @param int tamNac
/// @param int nacionalidad
/// @return retornara 1 si salio bien o 0 si salio mal
int mostrarProductosDeNaciolidadEnCuenta(eProducto unProducto[], int tam, eTipoProducto unTipo[], int tamTip, eNacionalidad unaNacionalidad[], int tamNac, int nacionalidad);

/// @fn int mostrarProductoDeTipoMayorDePrecio(eProducto[], int, eTipoProducto[], int, eNacionalidad[], int, float, int)
/// @brief listara los productos de un tipo mayor a un precio determinado
///
/// @param eProducto unProducto[]
/// @param int tam
/// @param eTipoProducto unTipo[]
/// @param int tamTip
/// @param eNacionalidad unaNacionalidad[]
/// @param int tamNac
/// @param float precioMayor
/// @param int tipo
/// @return retornara 1 si salio bien o 0 si salio mal
int mostrarProductoDeTipoMayorDePrecio(eProducto unProducto[], int tam, eTipoProducto unTipo[], int tamTip, eNacionalidad unaNacionalidad[], int tamNac, float precioMayor, int tipo);

/// @fn int mostrarTipoMasCaro(eProducto[], int, eTipoProducto[], int, eNacionalidad[], int, float, int)
/// @brief listara los tipos mas caros
///
/// @param eProducto unProducto[]
/// @param int tam
/// @param eTipoProducto unTipo[]
/// @param int tamTip
/// @param eNacionalidad unaNacionalidad[]
/// @param int tamNac
/// @param float precioMayor
/// @param int tipo
/// @return retornara 1 si salio bien o 0 si salio mal
int mostrarTipoMasCaro(eProducto unProducto[], int tam, eTipoProducto unTipo[], int tamTip, eNacionalidad unaNacionalidad[], int tamNac, float precioMayor, int tipo);

/// @fn int mostrarProductosPorTipo(eTipoProducto[], int, eProducto[], int, eNacionalidad[], int)
/// @brief por cada tipo mostrara los productos que tengan ese tipo
///
/// @param eTipoProducto unTipo[]
/// @param int tamTip
/// @param eProducto unProducto[]
/// @param int tam
/// @param eNacionalidad unaNacionalidad[]
/// @param int tamNac
/// @return retornara 1 si salio bien o 0 si salio mal
int mostrarProductosPorTipo(eTipoProducto unTipo[], int tamTip, eProducto unProducto[], int tam, eNacionalidad unaNacionalidad[], int tamNac);

/// @fn int tiposMasCantidad(eTipoProducto[], int, eProducto[], int, eNacionalidad[], int)
/// @brief su funcion es calcular la mas cantidad de tipos importados
///
/// @param eTipoProducto unTipo[]
/// @param int tamTip
/// @param eProducto unProducto[]
/// @param int tam
/// @param eNacionalidad unaNacionalidad[]
/// @param int tamNac
/// @return retorna 1 si salio bien o 0 si salio mal
int tiposMasCantidad(eTipoProducto unTipo[], int tamTip, eProducto unProducto[], int tam, eNacionalidad unaNacionalidad[], int tamNac);

int nacionalidadQueTieneMasTipoDefinido();

#endif /* NEXO_H_ */
