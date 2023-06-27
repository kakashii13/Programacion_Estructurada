#include <stdio.h>
#include <stdlib.h>

int main()
{
    char patent[6];
    int fee = 0, countHigherThanForty = 0, sumHigherThanForty = 0, total = 0;
    float percentage = 0;

    for (int i = 0; i < 50; i++)
    {
        printf("Ingrese 6 digitos de la patente: ");
        scanf("%s", &patent);

        printf("Ingrese el valor de la multa: ");
        scanf("%d", &fee);

        total += fee; // suma los valores al total

        if (fee > 40)
        {
            countHigherThanForty++;    // incrementa si > 40
            sumHigherThanForty += fee; // suma si > 40
        }
    }

    printf("%d montos superan los $40\n", countHigherThanForty);

    percentage = sumHigherThanForty * 100 / total; // calcula el porcentaje que representan los > 40

    printf("La suma de los mayores a $40 representa %.2f%% del total\n", percentage);

    return 0;
}