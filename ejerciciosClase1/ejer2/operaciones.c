#include "operaciones.h"

float sumar(float a, float b)
{
    return a + b;
}

float restar(float a, float b)
{
    return a - b;
}

int sumaSucesiva(int a, int b)
{
    int result = a;
    for (int i = b; i > 0; i--)
    {
        result += a;
    }
    return result;
}

int multiplicacionSucesiva(int a, int b)
{
    int result = a;
    for (int i = b; i > 0; i--)
    {
        result *= a;
    }
    return result;
}