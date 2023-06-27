
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int value = 0, pos = 0, countPos = 0, neg = 0, countNeg = 0, zeros = 0;
    float posAvg = 0, negAvg = 0;

    printf("Ingrese un valor: ");
    scanf("%d", &value);

    while (value > -100 && value < 100)
    {

        if (value > 0)
        {
            pos += value; // Suma los positivos
            countPos++;   // Cueta los positivos
        }
        else if (value < 0)
        {
            neg += value; // Suma los negativos
            countNeg++;   // Cuenta los negativos
        }
        else
        {
            zeros++; // Cuenta los ceros
        }

        printf("Ingrese un valor: ");
        scanf("%d", &value);
    }

    // Chequeo que que haya positivos para la division
    if (countPos == 0)
    {
        printf("No hay positivos.\n");
    }
    else
    {
        posAvg = pos / countPos; // Promedio positivos
        printf("El promedio de los positivos es %.2f.\n", posAvg);
    }

    // Chequeo que que haya negativos para la division
    if (countNeg == 0)
    {
        printf("No hay negativos.\n");
    }
    else
    {

        negAvg = neg / countNeg; // Promedio negativos
        printf("El promedio de los negativos es %.2f.\n", negAvg);
    }

    printf("Hay %d ceros.\n", zeros);

    return 0;
}