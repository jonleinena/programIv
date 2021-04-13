#include <stdio.h>

typedef struct
{
    int x;
    int y;
} Point;

void escalar(Point p1, int num)
{
    p1.x += num;
    p1.y += num;
}

void escalarPuntero(Point *p1, int num)
{
    p1->x = p1->x + num;
}

int main(void)
{

    Point p1 = {2, 7};

    escalar(p1, 10);

    printf("Numero escalado sin usar puntero en x: %i y en y: %i \n", p1.x, p1.y);

    escalarPuntero(&p1, 10);

    printf("Numero escalado usando puntero en x: %i y en y: %i \n", p1.x, p1.y);

    return 0;
}