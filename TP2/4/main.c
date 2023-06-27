#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a, b, c, suma, promedio;

    printf("Ingrese primer valor: ");
    scanf("%f", &a);
    printf("Ingrese segundo valor: ");
    scanf("%f", &b);
    printf("Ingrese tercer valor: ");
    scanf("%f", &c);

    suma = a + b + c;
    promedio = suma / 3;
    printf("El promedio es %.2f\n", promedio);

    if (a > promedio || b > promedio || c > promedio)
    {
        printf("Los valores mayor al promedio son: \n");
        if (a > promedio)
        {
            printf("a = %.2f\n", a);
        };
        if (b > promedio)
        {
            printf("b = %.2f\n", b);
        }
        if (c > promedio)
        {
            printf("c = %.2f\n", c);
        }
    }
    else
    {
        printf("No hay ningun valor mayor al promedio");
    }

    return 0;
}