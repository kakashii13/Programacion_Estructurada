#include <stdio.h>
#include <stdlib.h>

int main()
{
    int hsTrabajadas, categoria, sueldo;

    printf("Ingrese las horas trabajadas: ");
    scanf("%d", &hsTrabajadas);

    printf("Ingrese la categoria: ");
    scanf("%d", &categoria);

    switch (categoria)
    {
    case 1:
        sueldo = hsTrabajadas * 50;
        printf("El sueldo es $%d.00\n", sueldo);
        break;
    case 2:
        sueldo = hsTrabajadas * 70;
        printf("El sueldo es $%d.00\n", sueldo);
        break;
    case 3:
        sueldo = hsTrabajadas * 80;
        printf("El sueldo es $%d.00\n", sueldo);
        break;
    default:
        printf("La categoria ingresada es incorrecta.\n");
        break;
    }

    return 0;
}