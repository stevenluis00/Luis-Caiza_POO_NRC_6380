#include <stdio.h>
#include <string.h>
#define dim 50

int main ()
{
    char ingreso [dim];
    printf ("Hola Mundo\n");
    printf ("Escriba algo: \n");
    gets(ingreso);
    printf ("%s",ingreso);

    return(0);
}
