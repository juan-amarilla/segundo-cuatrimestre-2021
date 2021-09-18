//amarilla juan sebastian 1C

#include "funciones.h"

void cargarDatos(eJugador jugador[], int tam)
{
	int i;

	for(i=0;i<tam;i++)
	{
	      printf("Ingrese nombre \n");
	      scanf("%s", jugador[i].nombre);

	      printf("Ingrese cantidad de goles metidos \n");
	      fflush(stdin);
	      scanf("%d", &jugador[i].goles);

	      printf("Ingrese cantidad de partidos jugados \n");
	      scanf("%d", &jugador[i].partidosJugados);

	}
}

void calcularPromedio(eJugador jugador[], int tam)
{
	int i;
	int total;

	total = 0;

	for(i=0;i<tam;i++)
    {
		total = total + jugador[i].goles;
    }

	jugador[0].promedioGoles = total / i;

	printf("-el promedio de goles es: %d", jugador[0].promedioGoles);

}

void mostrarDatos(eJugador jugador[], int tam)
{
	int i;

	printf("-Nombre  goles  partidos jugados \n");

	for(i=0;i<tam;i++)
	{
        printf("%s %10d %10d \n", jugador[i].nombre,
				                  jugador[i].goles,
				                  jugador[i].partidosJugados);

	}
}
