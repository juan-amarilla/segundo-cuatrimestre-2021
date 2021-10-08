//amarilla juan sebastian 1C


#ifndef TIPOPRODUCTO_H_
#define TIPOPRODUCTO_H_
#define TAM_CARACTER 50

typedef struct
{
	int idTipo;
	char descripcionTipo[TAM_CARACTER];

}eTipoProducto;

/// @fn int verificarTipo(eTipoProducto[], int, int)
/// @brief verifica que tipo de producto es
///
/// @param eTipoProducto unTipo[]
/// @param int tam
/// @param int id
/// @return retorna la posicion si esta bien o -1 si no se encontro
int verificarTipo(eTipoProducto unTipo[], int tam, int id);

#endif /* TIPOPRODUCTO_H_ */
