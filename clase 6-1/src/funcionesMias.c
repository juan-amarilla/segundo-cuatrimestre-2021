//amarilla juan sebastian 1C

#include "funcionesMias.h"

int ingresarEntero(char mensaje[], int numero)
{
	printf("%s", mensaje);
	scanf("%d", &numero);
	return numero;
}

void intercambioDeValores(int a, int b)
{
	int auxiliar;

	auxiliar=a;
	a=b;
	b=auxiliar;

	printf("El valor A vale %d\n", a);
	printf("El valor B vale %d", b);

}
