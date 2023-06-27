#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sueldo, categoria, antiguedad;

    printf("Ingrese sueldo: ");
    scanf("%d", &sueldo);
    printf("Ingrese categoria: ");
    scanf("%d", &categoria);
    printf("Ingrese antiguedad: ");
    scanf("%d", &antiguedad);

    sueldo = antiguedad * sueldo;

    if (categoria != 1)
    {
        printf("El sueldo final es: $%d.00\n", sueldo);
    }
    else
    {
        sueldo = sueldo + (antiguedad * 50);
        printf("El sueldo final es: $%d.00\n", sueldo);
    }
    return 0;
}