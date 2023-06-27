#include <stdio.h>
#include <stdlib.h>

int main()
{
    int edad1, edad2;
    float altura1, altura2;

    printf("Ingrese una edad: ");
    scanf("%d", &edad1);
    printf("Ingrese la altura: ");
    scanf("%f", &altura1);

    printf("Ingrese otra edad: ");
    scanf("%d", &edad2);
    printf("Ingrese la altura: ");
    scanf("%f", &altura2);

    if (edad1 == edad2)
    {
        printf("Las edades son iguales.\n");
    }
    else if (edad1 > edad2)
    {
        printf("La altura del de mayor edad es de: %.2f cm\n", altura1);
    }
    else
    {
        printf("La altura del de mayor edad es de: %.2f cm\n", altura2);
    }
    return 0;
}