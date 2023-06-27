#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a, b, c;

    printf("Ingrese primer lado: ");
    scanf("%f", &a);

    printf("Ingrese segundo lado: ");
    scanf("%f", &b);

    printf("Ingrese tercer lado: ");
    scanf("%f", &c);

    if (a == b && b == c)
    {
        printf("El triangulo es equilatero\n");
    }
    else if (a == b && b != c || a == c && a != b || b == c && b != a)
    {
        printf("El triangulo es isosceles\n");
    }
    else
    {
        printf("El triangulo es escaleno\n");
    }

    return 0;
}