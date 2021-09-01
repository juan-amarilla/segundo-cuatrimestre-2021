/*
============================================================================
amarilla juan sebastian 1C

Ejercicio 3-1:
Crear una funci�n que muestre por pantalla el n�mero flotante
que recibe como par�metro.

============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

void mostrarFlotante(float);

int main(void)
{
	float numero;

	setbuf(stdout, NULL);

	printf("Ingrese un numero: \n");
	scanf("%f", &numero);
	mostrarFlotante(numero);

	return 0;
}

void mostrarFlotante(float numeroFlotante)
{
	printf("El numero flotante es: %.2f", numeroFlotante);

}
