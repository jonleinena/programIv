#include <stdio.h>

typedef struct
{
    int x;
    int y;
} Point;

void suma(Point p1, Point p2)
{
    p1.x = p1.x + p2.x;
    p1.y = p1.y + p2.y;
}

void sumaPunteros(Point *p1, Point *p2)
{
    (*p1).x = (*p1).x + (*p2).x;
    (*p1).y = (*p1).y + (*p2).y;
}

int main(void)
{
    Point p1 = {2, 3};
    Point p2 = {7, 5};

    printf("punto sin sumar x: %i y: %i \n", p1.x, p1.y);
    suma(p1, p2);

    printf("punto con suma sin puntero x: %i y: %i \n", p1.x, p1.y);

    sumaPunteros(&p1, &p2);

    printf("punto con suma con puntero x: %i y: %i \n", p1.x, p1.y);

    return 0;
}