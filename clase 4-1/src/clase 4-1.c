/*
============================================================================
amarilla juan sebastian 1C

Ejercicio 4-1:
Realizar un programa EN EL MAIN que permita calcular
y mostrar el factorial de un número.
Por ejemplo:
5! = 5*4*3*2*1 = 120

============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int i;
	int factorial;
	int numero;

	factorial = 1;

	setbuf(stdout, NULL);

	printf("Ingrese el numero para calcular el factorial: \n");
	scanf("%d", &numero);

	for (i=numero;i>1;i--)
	{
		factorial = factorial * i;
	}

	printf("el factorial del numero  %d es:  %d", numero, factorial);

	return 0;
}
