#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void imprimirCadena(char *c)
{
    for (int i = 0; i < strlen(c); i++)
    {
        printf("%c", *(c + i));
    }
    printf("\n");
}

void tamanyoCadena(char *c)
{
    int i = strlen(c);
    printf("El tamaño de la cadena es: %i\n", i);
}
void clonarCadena(char *c, char *s)
{
    strcpy(c, s);
}
void concatenarCadena(char *c, char *s)
{
    strcat(c, s);
}
int main(void)
{

    char *c = malloc(5 * sizeof(char));
    *c = 'h';
    *(c + 1) = 'o';
    *(c + 2) = 'l';
    *(c + 3) = 'a';
    *(c + 4) = '\0';

    char *s = malloc(5 * sizeof(char));

    imprimirCadena(c);
    tamanyoCadena(c);

    clonarCadena(s, c);
    imprimirCadena(s);

    c = realloc(c, sizeof(char) * 9);
    imprimirCadena(c);
    printf("\n");
    concatenarCadena(c, s);
    imprimirCadena(c);

    *c = NULL;
    *s = NULL;
    free(c);
    free(s);

    return 0;
}