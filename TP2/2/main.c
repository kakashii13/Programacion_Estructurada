#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;

    printf("Ingrese un valor: ");
    scanf("%d", &n);

    if (n > 0)
    {
        printf("El valor es positivo\n");
    }
    else if (n < 0)
    {
        printf("El valor es negativo\n");
    }
    else
    {
        printf("El valor es cero\n");
    }
    return 0;
}