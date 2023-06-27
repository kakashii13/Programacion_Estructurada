#include <stdio.h>

int main(int argc, char *argv[])
{
    int vector[10];
    int result = 0;

    for (int i = 0; i < 10; i++)
    {
        printf("Ingrese un numero: ");
        scanf("%d", &vector[i]);
        result += vector[i];
    }

    printf("El resultado es: %d\n", result);

    return 0;
}