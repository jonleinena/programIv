#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    float real;
    float imaginario;
} Complex;

void imprimir(Complex *c)
{
    printf("Parte real %f parte imaginaria %f \n", c->real, c->imaginario);
}

void sumar(Complex *c1, Complex *c2)
{
    c1->real = c1->real + c2->real;
    c1->imaginario = c1->imaginario + c2->imaginario;
}

void restar(Complex *c1, Complex *c2)
{
    c1->real = c1->real - c2->real;
    c1->imaginario = c1->imaginario - c2->imaginario;
}

int main(void)
{
    Complex c1 = {2.33, 7.01};

    Complex *c2;

    c2 = (Complex *)malloc(sizeof(Complex));

    c2->real = 3.46;
    c2->imaginario = 4.37;

    imprimir(&c1);

    imprimir(c2);

    sumar(&c1, c2);
    printf("suma c1+c2 real: %f  imaginario: %f \n", c1.real, c1.imaginario);

    restar(&c1, c2);
    printf("resta c1-c2 real: %f  imaginario: %f \n", c1.real, c1.imaginario);

    free(c2);
    c2 = NULL;

    return 0;
}