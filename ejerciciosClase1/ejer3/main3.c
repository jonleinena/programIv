#include <stdio.h>
int main(void)
{

    char caracter;
    caracter = getchar();
    fflush(stdin);
    while (caracter != 'q')
    {
        caracter -= 32;
        printf("Has introducido la letra %c, ASCII %i \n", caracter, caracter);
        fflush(stdout);
        caracter = getchar();
        fflush(stdin);
    }
    return 0;
}