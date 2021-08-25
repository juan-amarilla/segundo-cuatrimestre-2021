/*
 ============================================================================
 Name        : clase.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>

int main()
{
    /*
    Tipos de datos
    int (%d o %i) : -9; 8; 459 .... 4 Bytes 0000000000000000010
    float (%f) : 3.25; -9.47; 8; 4/5 .... 4 Bytes
    char (%c) : 'a'; '1'; '@' .... 1 Byte -128 - 127  o 0 - 255
    double (%lf): .... 8 Bytes
    void : ¿?
    */

    /*
    Secuencias de escape
    \n Salto de linea
    \t Tabulacion
    \a Alarma (beep)
    */

    int unNumero;
    float unNumeroFlotante;
    int x;

    unNumero = 8;
    unNumeroFlotante = 6.97;
    x = 7;

    printf("El numero entero primero es: %d\n", unNumero);
    printf("El numero flotante es: %.2f\n", unNumeroFlotante);
    printf("El numero entero segundo es: %d", x);

    return 0;
}
