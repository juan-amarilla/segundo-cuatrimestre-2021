//amarilla juan sebastian 1C

#include "validaciones.h"

int validacion(int minimo, int maximo, char *tipo)
{
   int temperatura;

   printf("ingrese temperatura en %s: \n", tipo);
   scanf("%d", &temperatura);

   while(temperatura<minimo || temperatura>maximo)
   {
       printf("error: ingrese una temperatura entre %d y %d\n", minimo, maximo);
       scanf("%d", &temperatura);
   }

   return temperatura;
}
