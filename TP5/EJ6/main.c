#include <stdio.h>

int main(int argc, char *argv[])
{
    int vector[12][2] = {
        {1, 31},
        {2, 28},
        {3, 31},
        {4, 30},
        {5, 31},
        {6, 30},
        {7, 31},
        {8, 31},
        {9, 30},
        {10, 31},
        {11, 30},
        {12, 31}};

    int mes;

    printf("Seleccione un mes del 1-12, 0 para salir: ");
    scanf("%d", &mes);

    while (mes != 0)
    {
        scanf("%d", &mes);
        printf("El mes seleccionado tiene %d dias.\n", vector[mes - 1][1]);
        printf("Seleccione un mes del 1-12, 0 para salir: ");
    }

    return 0;
}