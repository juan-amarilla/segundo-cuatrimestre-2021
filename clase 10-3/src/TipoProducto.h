//amarilla juan sebastian 1C


#ifndef TIPOPRODUCTO_H_
#define TIPOPRODUCTO_H_
#define TAM_CARACTER 50

typedef struct
{
	int idTipo;
	char descripcionTipo[TAM_CARACTER];

}eTipoProducto;

int verificarTipo(eTipoProducto unTipo[], int tam, int id);

#endif /* TIPOPRODUCTO_H_ */
