#include "estructuras.h"
#include "funciones.h"
#include <stdio.h>
#include "math.h"

void imprimir(Complex c)
{
    printf("Parte real: %f, parte imaginaria: %f \n", c.real, c.imaginary);
}

Complex sumar(Complex c1, Complex c2)
{
    Complex result = {0.0, 0.0};
    result.real = c1.real + c2.real;
    result.imaginary = c1.imaginary + c2.imaginary;
    return result;
}

double modulo(Complex c)
{
    return sqrt((c.real * c.real) + (c.imaginary * c.imaginary));
}
