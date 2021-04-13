#include <stdio.h>

void triangulo(void);
void piramide(void);

int main(void)
{
    triangulo();

    return 0;
}

void triangulo(void)
{
    int i;
    for (i = 0; i < 7; i++)
    {
        for (int j = 1; j < i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}

void piramide(void)
{
    int i;
    char ast = '*';
    char esp = ' ';
    for (i = 0; i < 7; i++)
    {
    }
}