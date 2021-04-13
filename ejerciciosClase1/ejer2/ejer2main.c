#include <stdio.h>
#include "operaciones.h"

int main(void)
{
    float a, b;
    a = 2.03;
    b = 4.07;

    printf("La suma resultante de %f y %f es: %f \n", a, b, sumar(a, b));

    printf("La resta resultante de %f y %f es: %f \n", a, b, restar(a, b));

    int c = 6;
    int d = 8;

    printf("La multiplicacion resultante de %i y %i es: %i\n", c, d, sumaSucesiva(c, d));

    printf("La potencia resultante de %i y %i es: %i \n", c, d, multiplicacionSucesiva(c, d));
}
