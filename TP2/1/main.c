#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b;

    printf("Ingrese un valor: ");
    scanf("%d", &a);

    printf("Ingrese otro valor: ");
    scanf("%d", &b);

    if (a == b)
    {
        printf("Los valores son iguales\n");
    }
    else
    {
        printf("Los valores son diferentes\n");
    };

    return 0;
}