/*
============================================================================
amarilla juan sebastian 1C

Ejercicio 4-2:
Realizar un programa que permita la carga de temperaturas en celsius
y fahrenheit , validando que las temperaturas ingresadas estén
entre el punto de congelación y ebullición del agua para cada tipo
de escala.
Las validaciones se hacen en una biblioteca.
Las funciones de transformación de fahrenheit a celsius
y de celsius a fahrenheit se hacen en otra biblioteca.

============================================================================
*/

#include <stdio.h>
#include <stdlib.h>
#include "validaciones.h"
#include "transformacion.h"

int main(void)
{
	int celsius;
	int fahrenheit;
	int transformadoCelsius;
	int transformadoFahrenheit;

	setbuf(stdout, NULL);

	celsius=validacion(0, 100, "celcius");
	fahrenheit=validacion(32, 212,"fahrenheit");

	transformadoCelsius=transformacion(celsius, 0, 100);
	transformadoFahrenheit=transformacion(fahrenheit, 32, 212);

	printf("la temperatura en celsius es: %d\n", celsius);
	printf("la temperatura en fahrenheit es: %d\n", fahrenheit);
	printf("la temperatura en celsius a fahrenheit es: %d\n", transformadoCelsius);
	printf("la temperatura en fahrenheit a celsius es: %d", transformadoFahrenheit);

	return 0;
}
