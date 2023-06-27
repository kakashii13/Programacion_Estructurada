//  2) Cree un vector de 10 posiciones, pida al usuario que ingrese los 10 valores y luego muéstrelo de manera inversa.

#include <stdio.h>

int main(int argc, char *argv[])
{
    int vector[10];

    for (int i = 0; i < 10; i++)
    {
        printf("Ingrese un numero: ");
        scanf("%d", &vector[i]);
    }

    for (int i = 9; i >= 0; i--)
    {
        printf("%d\n", vector[i]);
    }

    return 0;
};