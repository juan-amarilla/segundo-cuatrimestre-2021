// amarilla juan sebastian 1C

#ifndef NACIONALIDAD_H_
#define NACIONALIDAD_H_
#define TAM_CARACTER 50
#define OCUPADO 1
#define VACIO 0
#include "IngresarDatos.h"
#include "Producto.h"

typedef struct
{
    int idNacionalidad;
    char descripcionNacionalidad[TAM_CARACTER];
    int estado;

}eNacionalidad;

/// @fn int verificarNacionalidad(eNacionalidad[], int, int)
/// @brief su funcion es verificar que nacionalidad es
///
/// @param eNacionalidad unaNacionalidad[]
/// @param int tam
/// @param int id
/// @return retorna la posicion si salio bien o -1 si salio mal
int verificarNacionalidad(eNacionalidad unaNacionalidad[], int tam, int id);

/// @fn int buscarEstadoDeNacionalidad(int)
/// @brief su funcion es verificar el estado de nacionalidad
///
/// @param int estado
/// @return retorna 1 si salio bien o 0 si salio mal
int buscarEstadoDeNacionalidad(int estado);

/// @fn int altaNacionalidad(eNacionalidad[], int, char[])
/// @brief su funcion es dar de alta la nacionalidad
///
/// @param eNacionalidad unaNacionalidad[]
/// @param int tamNac
/// @param char cadena[]
/// @return retorna 1 si salio bien o 0 si salio mal
int altaNacionalidad(eNacionalidad unaNacionalidad[], int tamNac, char cadena[]);

/// @fn eNacionalidad pedirNacionalidad(eNacionalidad, char[])
/// @brief su funcion es darle el usuario el poder ingresar datos de nacionalidad
///
/// @param eNacionalidad unaNacionalidad[]
/// @param char cadena[]
/// @return retorna los datos ingresados
eNacionalidad pedirNacionalidad(eNacionalidad unaNacionalidad, char cadena[]);

/// @fn int bajaNacionalidad(eNacionalidad[], int, eProducto[], int, char[])
/// @brief su funcion es dar de baja la nacionalidad y los productos que dependan de esta
///
/// @param eNacionalidad unaNacionalidad[]
/// @param int tamNac
/// @param eProducto unProducto[]
/// @param int tam
/// @param char cadena[]
/// @return retorna 1 si salio bien o 0 si salio mal
int bajaNacionalidad(eNacionalidad unaNacionalidad[], int tamNac, eProducto unProducto[], int tam, char cadena[]);

/// @fn int modificarNacionalidad(eNacionalidad[], int, char[])
/// @brief su funcion es modificar la nacionalidad
///
/// @param eNacionalidad unaNacionalidad[]
/// @param int tamNac
/// @param char cadena[]
/// @return retorna 1 si salio bien o 0 si salio mal
int modificarNacionalidad(eNacionalidad unaNacionalidad[], int tamNac, char cadena[]);

/// @fn int modificarUnDatoDeNacionalidad(eNacionalidad[], int, char[])
/// @brief su funcion es modificar un dato de nacionalidad
///
/// @param eNacionalidad unaNacionalidad[]
/// @param int tamNac
/// @param char cadena[]
/// @return retorna 1 si salio bien o 0 si salio mal
int modificarUnDatoDeNacionalidad(eNacionalidad unaNacionalidad[], int tamNac, char cadena[]);

#endif /* NACIONALIDAD_H_ */
