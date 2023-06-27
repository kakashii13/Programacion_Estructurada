// 1) Cree un vector de enteros de 5 posiciones, inicializándolo con los valores del 10,100,94,84,11.

#include <stdio.h>

int main(int argc, char *argv[])
{
    int vector[5] = {10, 100, 94, 84, 11};

    for (int i = 0; i < 5; i++)
    {
        printf("%d\n", vector[i]);
    }

    return 0;
};