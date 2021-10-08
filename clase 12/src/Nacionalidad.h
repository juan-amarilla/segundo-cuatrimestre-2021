// amarilla juan sebastian 1C

#ifndef NACIONALIDAD_H_
#define NACIONALIDAD_H_
#define TAM_CARACTER 50

typedef struct
{
    int idNacionalidad;
    char descripcionNacionalidad[TAM_CARACTER];

}eNacionalidad;

/// @fn int verificarNacionalidad(eNacionalidad[], int, int)
/// @brief su funcion es verificar que nacionalidad es
///
/// @param eNacionalidad unaNacionalidad[]
/// @param int tam
/// @param int id
/// @return retorna la posicion si salio bien o -1 si salio mal
int verificarNacionalidad(eNacionalidad unaNacionalidad[], int tam, int id);

#endif /* NACIONALIDAD_H_ */
