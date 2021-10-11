//amarilla juan sebastian 1C


#ifndef TIPOPRODUCTO_H_
#define TIPOPRODUCTO_H_
#define TAM_CARACTER 50
#define OCUPADO 1
#define VACIO 0
#include "IngresarDatos.h"

typedef struct
{
	int idTipo;
	char descripcionTipo[TAM_CARACTER];
	int estado;

}eTipoProducto;

/// @fn int verificarTipo(eTipoProducto[], int, int)
/// @brief verifica que tipo de producto es
///
/// @param eTipoProducto unTipo[]
/// @param int tam
/// @param int id
/// @return retorna la posicion si esta bien o -1 si no se encontro
int verificarTipo(eTipoProducto unTipo[], int tam, int id);

/// @fn int buscarEstadoDeTipo(int)
/// @brief su funcion es verificar el estado de tipo
///
/// @param int estado
/// @return retorna 1 si salio bien o 0 si salio mal
int buscarEstadoDeTipo(int estado);

/// @fn int altaTipo(eTipoProducto[], int, char[])
/// @brief su funcion es dar de alta un tipo
///
/// @param eTipoProducto unTipo[]
/// @param int tamTip
/// @param char cadena[]
/// @return retorna 1 si salio bien o 0 si salio mal
int altaTipo(eTipoProducto unTipo[], int tamTip, char cadena[]);

/// @fn eTipoProducto pedirTipo(eTipoProducto, char[])
/// @brief su funcion es que el usuario pueda ingresar los datos necesarios del tipo
///
/// @param eTipoProducto unTipo[]
/// @param char cadena[]
/// @return retorna los datos ingresados
eTipoProducto pedirTipo(eTipoProducto unTipo, char cadena[]);

/// @fn int bajaTipo(eTipoProducto[], int, char[])
/// @brief su funcion es dar de baja un tipo
///
/// @param eTipoProducto unTipo[]
/// @param int tamTip
/// @param char cadena[]
/// @return retorna 1 si salio bien o 0 si salio mal
int bajaTipo(eTipoProducto unTipo[], int tamTip, char cadena[]);

/// @fn int modificarTipo(eTipoProducto[], int, char[])
/// @brief su funcion es poder modificar el tipo
///
/// @param eTipoProducto unTipo[]
/// @param int tamTip
/// @param char cadena[]
/// @return retorna 1 si salio bien o 0 si salio mal
int modificarTipo(eTipoProducto unTipo[], int tamTip, char cadena[]);

/// @fn int modificarUnDatoDeTipo(eTipoProducto[], int, char[])
/// @brief su funcion es modificar un dato de tipo
///
/// @param eTipoProducto unTipo[]
/// @param int tamTip
/// @param char cadena[]
/// @return retorna 1 si salio bien o 0 si salio mal
int modificarUnDatoDeTipo(eTipoProducto unTipo[], int tamTip, char cadena[]);

#endif /* TIPOPRODUCTO_H_ */
