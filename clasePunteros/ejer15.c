#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
    int id;
    float nota;
    char nombre[0];

} Asignatura;

void crearAsig(Asignatura *a, int id, float nota, char nombre[])
{
    a->id = id;
    a->nota = nota;
    strcpy(nombre, a->nombre);
}

float calcularMedia(Asignatura *asigs, int max)
{
    float result = 0;
    float sumas = 0;
    for (int i = 0; i < max; i++)
    {
        sumas += (asigs + i)->nota;
        result = sumas / (i + 1);
    }
    return result;
}

int main(void)
{
    int maxAsigs = 0;
    int *numAsig;
    numAsig = &maxAsigs;
    Asignatura *arrayPuntero;
    arrayPuntero = (Asignatura *)malloc(5 * sizeof(Asignatura));

    printf("11.- Introducir asignatura \n 2.- Mostrar listado asignaturas \n 3.- Calcular media \n pulsar q para salir\n");
    char caracter;
    caracter = getchar();
    printf("\n");
    fflush(stdin);
    while (caracter != 'q')
    {

        switch (caracter)
        {
        case '1':
            if ((*numAsig) <= 4)
            {
                int id;
                float nota;
                char *str = malloc(10 * sizeof(char));
                printf("introducir id: ");
                scanf("%i", &id);
                printf("introducir nota: ");
                scanf("%f", &nota);
                printf("Introducir nombre: ");
                fgets(str, 10, stdin);
                sscanf(str, "%d", &num);
                (arrayPuntero + *numAsig)->id = id;
                (arrayPuntero + *numAsig)->nota = nota;
                *numAsig = *numAsig + 1;
                printf("numAsig: %i \n", *numAsig);
            }
            else
            {
                printf("Ya se han introducido el max. numero de asignaturas. \n");
                printf("numAsig: %i \n", *numAsig);
            }

            break;

        case '2':
            for (int i = 0; i < (*numAsig); i++)
            {
                printf("Asignatura con id: %i, nota: %f \n", ((arrayPuntero + i)->id), ((arrayPuntero + i)->nota));
            }
            break;

        case '3':
            printf("Nota media: %f \n", calcularMedia(arrayPuntero, *numAsig));
            break;
        default:
            printf("Introduce un numero entre 1 y 3 o la letra q, por favor.\n");
            break;
        }

        printf("1.- Introducir asignatura \n 2.- Mostrar listado asignaturas \n 3.- Calcular media \n pulsar q para salir\n");
        fflush(stdout);
        caracter = getchar();
        printf("\n");
        fflush(stdin);
    }
    free(arrayPuntero);
    arrayPuntero = NULL;

    return 0;
}