#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int x;
    int y;
} Point;

void escalar(int a[], Point **pa, int sizeA, int sizePa)
{

    for (int i = 0; i < sizePa; i++)
    {
        (*(pa + i))->x = (*(pa + i))->x * a[i];
        (*(pa + i))->y = (*(pa + i))->y * a[i];
    }
}

int main(void)
{

    int a[3];
    a[0] = 1;
    a[1] = 2;
    a[2] = 3;

    Point **pa;
    pa = (Point **)malloc(3 * sizeof(Point *));

    for (int i = 0; i < 3; i++)
    {
        *(pa + i) = (Point *)malloc(sizeof(Point));
    }
    (*(*(pa + 0))).x = 1;
    (*(pa))->x = 33;
    (*(pa))->y = 44;
    (*(pa + 1))->x = 313;
    (*(pa + 1))->y = 414;
    (*(pa + 2))->x = 323;
    (*(pa + 2))->y = 424;

    /* Esta bien pero mejor hacerlo como arriba para entender la aritmetica de punteros
    Point p1 = {33, 44};
    Point p2 = {313, 414};
    Point p3 = {323, 424};

    pa[0] = &p1;
    pa[1] = &p2;
    pa[2] = &p3;

    // pa = (Point *)malloc(3 * sizeof(Point));

    //pa->x = 33;
    // pa->y = 44;
    //  (pa + 1)->x = 313;
    //  (pa + 1)->y = 414;
    //  (pa + 2)->x = 353;
    // (pa + 2)->y = 454;
    */

    escalar(a, pa, 3, 3);

    for (int i = 0; i < 3; i++)
    {
        printf("El valor escalado de la posicion %i del array de point es en x: %i y y: %i \n", i, (*(pa + i))->x, (*(pa + i))->y);
    }

    *pa = NULL;
    free(pa);

    return 0;
}