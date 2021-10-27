/******************************************************************************
amarilla juan sebastian 1C

Ejercicio 17-1:
Realizar una función que retorne un puntero a eProducto.
Dentro de esta función deberá crear un producto hardcodeado,
un puntero y se apuntará ese puntero al producto.
Mostrar el producto cargado 5 veces desde el main.
Observar el comportamiento del programa.

*******************************************************************************/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

typedef struct
{
    int id;
    char nombre[10];
    float precio;

}eProducto;

eProducto* crearProducto();

int main()
{
    eProducto* lista;

    setbuf(stdout, NULL);

    lista = crearProducto();
    printf("id %d - nombre %s - precio %.2f\n", lista->id, lista->nombre, lista->precio);
    printf("id %d - nombre %s - precio %.2f\n", lista->id, lista->nombre, lista->precio);
    printf("id %d - nombre %s - precio %.2f\n", lista->id, lista->nombre, lista->precio);
    printf("id %d - nombre %s - precio %.2f\n", lista->id, lista->nombre, lista->precio);
    printf("id %d - nombre %s - precio %.2f\n", lista->id, lista->nombre, lista->precio);


    return 0;
}

eProducto* crearProducto()
{
    eProducto* pLista;
    pLista = (eProducto*) malloc(sizeof(eProducto));
    pLista->id = 10;
    strcpy(pLista->nombre, "burger");
    pLista->precio = 50;

    return pLista;


}
