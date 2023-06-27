#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number = 0, sum = 0;
    float average = 0;

    for (int i = 0; i < 25; i++)
    {
        printf("Ingrese un numero: ");
        scanf("%d", &number);

        sum += number;
    }
    average = sum / 25;
    printf("El promedio es: %.2f\n", average);

    return 0;
}