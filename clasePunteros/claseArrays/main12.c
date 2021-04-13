#include <stdio.h>
#include <stdlib.h>

//REPASOPUNTEROS

typedef struct
{
    int numerador;
    int denominador;
} Fraccion;

int main(void)
{

    int numero = 3;
    Fraccion f = {6, 3};

    int *punteroInt = malloc(sizeof(int));
    punteroInt = &numero;

    Fraccion *f1;
    f1 = (Fraccion *)malloc(sizeof(Fraccion));

    f1->numerador = 6;
    f1->denominador = 3;

    f.numerador = 3;
    f.denominador = 4;

    f1->numerador = 3;
    f1->denominador = 4;

    (*punteroInt) = 33;

    // si multiplicas con el valor por parametro seria multiplicar(f, *f);
    //si multiplicas con el puntero por parametro seria multiplicar(&f, f1);

    int arr[5];
    arr[0] = 1;
    arr[1] = 2;
    arr[2] = 3;
    arr[3] = 4;
    arr[4] = 5;

    int *punteroArr;
    punteroArr = malloc(5 * sizeof(int));

    (*punteroArr) = 1;
    (*(punteroArr + 1)) = 2;
    (*(punteroArr + 2)) = 3;
    (*(punteroArr + 3)) = 4;
    (*(punteroArr + 4)) = 5;

    arr[3] = 17;
    (*(punteroArr + 3)) = 77;

    printf("La posición de memoria del entero de la última posición del Array de memoria estática es: %x", &arr[4]);

    int **punteroAPuntero;
    punteroAPuntero = (int **)malloc(sizeof(int *));
    (*punteroAPuntero) = punteroInt;

    (*(*punteroAPuntero)) = 47;

    Fraccion **punteroApFraccion = (Fraccion **)malloc(sizeof(Fraccion *));
    Fraccion *punteroFraccion = (Fraccion *)malloc(sizeof(Fraccion));

    punteroApFraccion = &punteroFraccion;
    (*punteroApFraccion)->numerador = 47;
    (*punteroApFraccion)->denominador = 66;

    free(f1);
    f1 = NULL;

    free(punteroArr);
    free(*(punteroAPuntero));
    free(punteroAPuntero);

    free(*(punteroApFraccion));
    free(punteroApFraccion);

    return 0;
}