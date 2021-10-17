// amarilla juan sebastian 1C

#ifndef NEXOSEGUNDO_H_
#define NEXOSEGUNDO_H_

#include "Nexo.h"

/// @fn int mostrarProductoConSuFabricante(eProducto, eTipoProducto, eNacionalidad, eFabricanteDePantalla)
/// @brief su funcion es mostrar un producto con su fabricante
///
/// @param eProducto unProducto
/// @param eTipoProducto unTipo
/// @param eNacionalidad unaNacionalidad
/// @param eFabricanteDePantalla unFabricante
/// @return retorna 1 si salio bien o 0 si salio mal
int mostrarProductoConSuFabricante(eProducto unProducto, eTipoProducto unTipo, eNacionalidad unaNacionalidad, eFabricanteDePantalla unFabricante);

/// @fn int mostrarVariosProductosConSuFabricante(eProducto[], int, eTipoProducto[], int, eNacionalidad[], int, eFabricanteDePantalla[], int)
/// @brief su funcion es listar todos los productos con su fabricante
///
/// @param eProducto unProducto[]
/// @param int tam
/// @param eTipoProducto unTipo[]
/// @param int tamTip
/// @param eNacionalidad unaNacionalidad[]
/// @param int tamNac
/// @param eFabricanteDePantalla unFabricante[]
/// @param int tamFabr
/// @return retorna 1 si salio bien o 0 si salio mal
int mostrarVariosProductosConSuFabricante(eProducto unProducto[], int tam, eTipoProducto unTipo[], int tamTip, eNacionalidad unaNacionalidad[], int tamNac, eFabricanteDePantalla unFabricante[], int tamFabr);

/// @fn int nacionalidadQueFabricaUnTipo(eNacionalidad[], int, eTipoProducto[], int, eProducto[], int, char[])
/// @brief su funcion es ver que nacionalidad fabrica un solo tipo
///
/// @param eNacionalidad unaNacionalidad[]
/// @param int tamNac
/// @param eTipoProducto unTipo[]
/// @param int tamTip
/// @param eProducto unProducto[]
/// @param int tam
/// @param char tipoCadena[]
/// @return retorna 1 si salio bien o 0 si salio mal
int nacionalidadQueFabricaUnTipo(eNacionalidad unaNacionalidad[], int tamNac, eTipoProducto unTipo[], int tamTip, eProducto unProducto[], int tam, char tipoCadena[]);

/// @fn void nacionalidadQueFabricaUnTipoParte2(int, eTipoProducto[], int, eProducto[], int, char[], eAuxiliar[])
/// @brief su funcion es ver que nacionalidad fabrica un solo tipo
///
/// @param int tamNac
/// @param eTipoProducto unTipo[]
/// @param int tamTip
/// @param eProducto unProducto[]
/// @param int tam
/// @param char tipoCadena[]
/// @param eAuxiliar auxiliar[]
void nacionalidadQueFabricaUnTipoParte2(int tamNac, eTipoProducto unTipo[], int tamTip, eProducto unProducto[], int tam, char tipoCadena[], eAuxiliar auxiliar[]);

/// @fn void nacionalidadQueFabricaUnTipoParte3(eTipoProducto[], int, eProducto[], int, char[], eAuxiliar[], int)
/// @brief su funcion es ver que nacionalidad fabrica un solo tipo
///
/// @param eTipoProducto unTipo[]
/// @param int tamTip
/// @param eProducto unProducto[]
/// @param int tam
/// @param char tipoCadena[]
/// @param eAuxiliar auxiliar[]
/// @param int i
void nacionalidadQueFabricaUnTipoParte3(eTipoProducto unTipo[], int tamTip, eProducto unProducto[], int tam, char tipoCadena[], eAuxiliar auxiliar[], int i);

/// @fn void nacionalidadQueFabricaUnTipoParte4(eTipoProducto[], int, eProducto[], char[], eAuxiliar[], int, int)
/// @brief su funcion es ver que nacionalidad fabrica un solo tipo
///
/// @param eTipoProducto unTipo[]
/// @param int tamTip
/// @param eProducto unProducto[]
/// @param char tipoCadena[]
/// @param eAuxiliar auxiliar[]
/// @param int i
/// @param int j
void nacionalidadQueFabricaUnTipoParte4(eTipoProducto unTipo[], int tamTip, eProducto unProducto[], char tipoCadena[], eAuxiliar auxiliar[], int i, int j);

/// @fn int productosOrdenadosPorNacionalidad(eProducto[], int, eNacionalidad[], int)
/// @brief su funcion es ordenar alfabeticamente los productos por nacionalidad
///
/// @param eProducto unProducto[]
/// @param int tam
/// @param eNacionalidad unaNacionalidad[]
/// @param int tamNac
/// @return retorna 1 si salio bien o 0 si salio mal
int productosOrdenadosPorNacionalidad(eProducto unProducto[], int tam, eNacionalidad unaNacionalidad[], int tamNac);

/// @fn int productosOrdenadosPorNacionalidadParte2(eProducto[], int, eNacionalidad[], int, eProducto)
/// @brief su funcion es ordenar alfabeticamente los productos por nacionalidad
///
/// @param eProducto unProducto[]
/// @param int tam
/// @param eNacionalidad unaNacionalidad[]
/// @param int tamNac
/// @param eProducto auxiliar
/// @return retorna 1 si salio bien o 0 si salio mal
int productosOrdenadosPorNacionalidadParte2(eProducto unProducto[], int tam, eNacionalidad unaNacionalidad[], int tamNac, eProducto auxiliar);

/// @fn int nacionalidadQueTieneMayoresTipos(eNacionalidad[], int, eProducto[], int)
/// @brief su funcion es calcular la nacionalidad que tiene mas tipos de productos fabricados
///
/// @param eNacionalidad unaNacionalidad[]
/// @param int tamNac
/// @param eProducto unProducto[]
/// @param int tam
/// @return retorna 1 si salio bien o 0 si salio mal
int nacionalidadQueTieneMayoresTipos(eNacionalidad unaNacionalidad[], int tamNac, eProducto unProducto[], int tam);

/// @fn void nacionalidadQueTieneMayoresTiposParte2(int, eProducto[], int, eAuxiliar[])
/// @brief su funcion es calcular la nacionalidad que tiene mas tipos de productos fabricados
///
/// @param int tamNac
/// @param eProducto unProducto[]
/// @param int tam
/// @param eAuxiliar auxiliar[]
void nacionalidadQueTieneMayoresTiposParte2(int tamNac, eProducto unProducto[], int tam, eAuxiliar auxiliar[]);

/// @fn int nacionalidadQueTieneMayoresTiposSacarMaximo(int, eAuxiliar[])
/// @brief su funcion es sacar el maximo
///
/// @param int tamNac
/// @param eAuxiliar auxiliar[]
/// @return retorna el maximo
int nacionalidadQueTieneMayoresTiposSacarMaximo(int tamNac, eAuxiliar auxiliar[]);

/// @fn int nacionalidadQueTieneMayoresTiposMostrarlo(eNacionalidad[], int, int, eAuxiliar[])
/// @brief su funcion es mostrar la nacionalidad que tiene mas tipos de productos fabricados
///
/// @param eNacionalidad unaNacionalidad[]
/// @param int tamNac
/// @param int maximo
/// @param eAuxiliar auxiliar[]
/// @return retorna 1 si salio bien o 0 si salio mal
int nacionalidadQueTieneMayoresTiposMostrarlo(eNacionalidad unaNacionalidad[], int tamNac, int maximo, eAuxiliar auxiliar[]);

/// @fn int precioPromedioPorNacionalidad(eNacionalidad[], int, eProducto[], int)
/// @brief su funcion es calcular el precio promedio de cada nacionalidad y mostrarlo
///
/// @param eNacionalidad unaNacionalidad[]
/// @param int tamNac
/// @param eProducto unProducto[]
/// @param int tam
/// @return retorna 1 si salio bien o 0 si salio mal
int precioPromedioPorNacionalidad(eNacionalidad unaNacionalidad[], int tamNac, eProducto unProducto[], int tam);

/// @fn void acumContadorPorNacionalidad(eNacionalidad[], int, eProducto[], int, eAuxiliar[])
/// @brief acumulara precio y contara por nacionalidad
///
/// @param eNacionalidad unaNacionalidad[]
/// @param int tamNac
/// @param eProducto unProducto[]
/// @param int tam
/// @param eAuxiliar auxiliar[]
void acumContadorPorNacionalidad(eNacionalidad unaNacionalidad[], int tamNac, eProducto unProducto[], int tam, eAuxiliar auxiliar[]);

/// @fn void calcularPrecioPromedioPorNacionalidad(eAuxiliar[], int)
/// @brief su funcion es calcular el promedio de cada nacionalidad
///
/// @param eAuxiliar auxiliar[]
/// @param int tamNac
void calcularPrecioPromedioPorNacionalidad(eAuxiliar auxiliar[], int tamNac);

/// @fn int mostrarPromedioDeNacionalidad(eAuxiliar[], eNacionalidad[], int)
/// @brief su funcion es mostrar el promedio de cada nacionalidad
///
/// @param eAuxiliar auxiliar[]
/// @param eNacionalidad unaNacionalidad[]
/// @param int tamNac
/// @return retorna 1 si salio bien o 0 si salio mal
int mostrarPromedioDeNacionalidad(eAuxiliar auxiliar[], eNacionalidad unaNacionalidad[], int tamNac);

/// @fn int modificarProducto(eProducto[], int, eTipoProducto[], int, char[])
/// @brief su funcion es modificar producto
///
/// @param eProducto unProducto[]
/// @param int tam
/// @param eTipoProducto listaTipo[]
/// @param int tamTip
/// @param char cadena[]
/// @return retorna 1 si salio bien o 0 si salio mal
int modificarProducto(eProducto unProducto[], int tam, eTipoProducto listaTipo[], int tamTip, char cadena[]);

/// @fn int modificarUnDato(eProducto[], int, eTipoProducto[], int, char[])
/// @brief su funcion es modificar un dato
///
/// @param eProducto unProducto[]
/// @param int tam
/// @param eTipoProducto listaTipo[]
/// @param int tamTip
/// @param char cadena[]
/// @return retorna 1 si salio bien o 0 si salio mal
int modificarUnDato(eProducto unProducto[], int tam, eTipoProducto listaTipo[], int tamTip, char cadena[]);

#endif /* NEXOSEGUNDO_H_ */
