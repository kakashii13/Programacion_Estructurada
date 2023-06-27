#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num = 0, numOneToTen = 0, numTenToTwenty = 0, numTwentyToThirty = 0, numHigherThrirty = 0;
    float percentage = 0;

    for (int i = 0; i < 30; i++)
    {
        printf("Ingrese un numero: ");
        scanf("%d", &num);

        if (num > 0 && num <= 10)
        {
            numOneToTen++;
        }
        else if (num > 10 && num <= 20)
        {
            numTenToTwenty++;
        }
        else if (num > 20 && num <= 30)
        {
            numTwentyToThirty++;
        }
        else
        {
            numHigherThrirty++;
        }
    }
    printf("Hay %d valores en el rango de 1-10\n", numOneToTen);
    printf("Hay %d valores en el rango de 10-20\n", numTenToTwenty);
    printf("Hay %d valores en el rango de 20-30\n", numTwentyToThirty);
    printf("Hay %d valores mayores a 30 \n", numHigherThrirty);

    percentage = numOneToTen * 100 / 30; // rango 1-10
    printf("El porcentaje en el total del rango 1-10 es: %.2f%%\n", percentage);

    percentage = numTenToTwenty * 100 / 30; // rango 10-20
    printf("El porcentaje en el total del rango 10-20 es: %.2f%%\n", percentage);

    percentage = numTwentyToThirty * 100 / 30; // rango 20-30
    printf("El porcentaje en el total del rango 20-30 es: %.2f%%\n", percentage);

    percentage = numHigherThrirty * 100 / 30; // rango > 30
    printf("El porcentaje en el total del rango > 30 es: %.2f%%\n", percentage);

    return 0;
}