#include <stdio.h>
#include "funciones.h"

int main(void)
{
    Complex c1, c2;

    c1.real = 2.33;
    c2.real = 4.66;

    c1.imaginary = 5.4;
    c2.imaginary = 7.88;

    imprimir(c1);

    printf("La suma de ambos es:\nReal: %f\nImaginario: %f\n", sumar(c1, c2).real, sumar(c1, c2).imaginary);

    printf("El módulo de C2 es: %f\n", modulo(c2));

    printf("El tamaño en memoria de  C2 es: %x bytes\n", sizeof(c2));
}