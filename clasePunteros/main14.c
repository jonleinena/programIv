#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int comprobarNombre(char *c, char *s)
{
    printf("%s %s\n", c, s);
    return strcmp(c, s);
}

int main(int argc, char *argv[])
{
    char *nombre = "main14.exe";
    printf("El número de argumentos recibidos es: %i\n", argc);
    if (comprobarNombre(argv[0], nombre) == 0)
    {
        printf("el string es igual\n");
    }
    return 0;
}