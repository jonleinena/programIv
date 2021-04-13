#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int a;
    int b;
} Coordenada;

int main(void)
{

    Coordenada ***arrayTriple;
    arrayTriple = (Coordenada ***)malloc(5 * sizeof(Coordenada **));
    for (int i = 0; i < 4; i++)
    {
        (*(arrayTriple + i)) = (Coordenada **)malloc(4 * sizeof(Coordenada *));

        for (int j = 0; j < 3; j++)
        {
            (*(*(arrayTriple + i) + j)) = (Coordenada *)malloc(3 * sizeof(Coordenada));
        }
    }

    arrayTriple[2][3][4].a = 3;
    arrayTriple[2][3][4].b = 4;

    for (int i = 0; i < 4; i++)
    {
        free(arrayTriple[i]);
        arrayTriple[i] = NULL;

        for (int j = 0; j < 3; j++)
        {
            free(arrayTriple[i][j]);
            arrayTriple[i][j] = NULL;
        }
    }

    *arrayTriple = NULL;
    free(arrayTriple);

    return 0;
}