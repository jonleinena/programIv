#include <stdio.h>
#include <stdlib.h>

void f1(int arr[3][4], int filas, int columnas)
{
    for (int i = 0; i < filas; i++)
    {
        for (int j = 0; j < columnas; j++)
        {
            printf("F1 - Fila %i, columna %i: %i \n", i, j, arr[i][j]);
        }
    }
    printf("\n");
}

void f2(int *arr[4])
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("F2 - Fila %i, columna %i: %i \n", i, j, arr[i][j]);
        }
    }
    printf("\n");
}

void f3(int **arr)
{
    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("F3 - Fila %i, columna %i: %i \n", i, j, *(*(arrTres + i) + j));
        }
    }
    printf("\n");
}

int main(void)
{
    int arrayEnteros[3][4];

    int *arrDos[4];

    int **arrTres;

    arrTres = (int **)malloc(6 * sizeof(int *));

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            arrayEnteros[i][j] = i + j;
        }
    }

    for (int i = 0; i < 3; i++)
    {
        arrDos[i] = malloc(4 * sizeof(int));
        for (int j = 0; j < 4; j++)
        {
            arrDos[i][j] = i + j * 2;
        }
    }

    for (int i = 0; i < 6; i++)
    {
        *(arrTres + i) = (int *)malloc(5 * sizeof(int *));
        for (int j = 0; j < 5; j++)
        {
            *(*(arrTres + i) + j) = i + (j * 3);
        }
    }

    f1(arrayEnteros, 3, 4);
    f2(arrDos);
    f3(arrTres);

    for (int i = 0; i < 3; i++)
    {
        free(arrDos[i]);
    }

    for (int i = 0; i < 6; i++)
    {
        free(arrTres[i]);
    }
    free(arrTres);

    return 0;
}