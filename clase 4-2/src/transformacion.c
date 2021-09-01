//amarilla juan sebastian 1C
#include "transformacion.h"

int transformacion(int temperaturaTransformada, int min, int max)
{
	int resultado1;
	int resultado2;

    if (min == 0 && max == 100)
    {
       resultado1 = (temperaturaTransformada * 9/5) + 32;

       return resultado1;
    }

    else
    {
    	resultado2 = (temperaturaTransformada - 32) * 5/9;

    	return resultado2;
    }

}
