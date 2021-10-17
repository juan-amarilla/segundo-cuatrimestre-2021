//amarilla juan sebastian 1C


#ifndef TIPOPRODUCTO_H_
#define TIPOPRODUCTO_H_
#define TAM_CARACTER 50
#define OCUPADO 1
#define VACIO 0
#include "IngresarDatos.h"
#include "Producto.h"

typedef struct
{
	int idTipo;
	char descripcionTipo[TAM_CARACTER];
	int idFabricante;
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

/// @fn void menuTipo(eTipoProducto[], int)
/// @brief su funcion es imprimir un menu de tipo
///
/// @param eTipoProducto listaTipo[]
/// @param int tamTip
void menuTipo(eTipoProducto listaTipo[], int tamTip);

/// @fn int validarTipoId(eTipoProducto[], int, int)
/// @brief su funcion es validar el tipo id
///
/// @param eTipoProducto listaTipo[]
/// @param int tamTip
/// @param int elegir
/// @return retorna la id tipo
int validarTipoId(eTipoProducto listaTipo[], int tamTip, int elegir);

/// @fn int altaTipo(eTipoProducto[], int, char[], int)
/// @brief su funcion es dar de alta un tipo
///
/// @param eTipoProducto unTipo[]
/// @param int tamTip
/// @param char cadena[]
/// @param int id
/// @return retorna 1 si salio bien o 0 si salio mal
int altaTipo(eTipoProducto unTipo[], int tamTip, char cadena[], int id);

/// @fn eTipoProducto pedirTipo(eTipoProducto, char[], int)
/// @brief su funcion es que el usuario pueda ingresar los datos de tipo
///
/// @param eTipoProducto unTipo
/// @param char cadena[]
/// @param int id
/// @return retorna los datos ingresados
eTipoProducto pedirTipo(eTipoProducto unTipo, char cadena[], int id);

/// @fn int bajaTipo(eTipoProducto[], int, eProducto[], int, char[])
/// @brief su funcion es dar de baja un tipo y los productos que dependan de esta
///
/// @param eTipoProducto unTipo[]
/// @param int tamTip
/// @param eProducto unProducto[]
/// @param int tam
/// @param char cadena[]
/// @return retorna 1 si salio bien o 0 si salio mal
int bajaTipo(eTipoProducto unTipo[], int tamTip, eProducto unProducto[], int tam, char cadena[]);

/// @fn void bajaTipoDeCascada(eProducto[], int, int)
/// @brief su funcion es dar de baja los productos que dependan de ese tipo
///
/// @param eProducto unProducto[]
/// @param int tam
/// @param int id
void bajaTipoDeCascada(eProducto unProducto[], int tam, int id);

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
