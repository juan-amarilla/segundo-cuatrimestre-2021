// amarilla juan sebastian

#ifndef FABRICANTE_H_
#define FABRICANTE_H_
#define TAM_CARACTER 50
#include "TipoProducto.h"

typedef struct
{
	int idFabricante;
    char descripcionFabricante[TAM_CARACTER];

}eFabricanteDePantalla;

/// @fn int verificarFabricante(eFabricanteDePantalla[], int, int)
/// @brief verifica con la id que fabricante es
///
/// @param eFabricanteDePantalla unFabricante[]
/// @param int tam
/// @param int id
/// @return retorna la posicion si esta bien o -1 si esta mal
int verificarFabricante(eFabricanteDePantalla unFabricante[], int tam, int id);

#endif /* FABRICANTE_H_ */
