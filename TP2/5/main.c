#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a, b, c, d, suma1, suma2;

    printf("Ingrese el primer valor: ");
    scanf("%f", &a);
    printf("Ingrese el segundo valor: ");
    scanf("%f", &b);
    printf("Ingrese el tercer valor: ");
    scanf("%f", &c);
    printf("Ingrese el cuarto valor: ");
    scanf("%f", &d);

    suma1 = a + b;
    suma2 = c + d;

    if (suma1 == suma2)
    {
        printf("La suma de %.2f y %.2f = %.2f es igual a la suma de %.2f y %.2f = %.2f\n", a, b, suma1, c, d, suma2);
    }
    else if (suma1 > suma2)
    {
        printf("La suma de %.2f y %.2f = %.2f  es mayor a la suma de %.2f y %.2f = %.2f \n", a, b, suma1, c, d, suma2);
    }
    else
    {
        printf("La suma de %.2f y %.2f = %.2f es mayor a la suma de %.2f y %.2f = %.2f \n", c, d, suma2, a, b, suma1);
    }
    return 0;
}