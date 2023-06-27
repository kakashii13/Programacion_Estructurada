#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num = 0, numHigherThanFifteen = 0, countPairs = 0, countOdds = 0;

    float pairsAvg = 0, oddsAvg = 0, avg = 0;

    for (int i = 0; i < 8; i++)
    {
        printf("Ingrese un numero: ");
        scanf("%d", &num);

        avg += num; // se suma los numeros al promedio

        if (num > 15)
        {
            numHigherThanFifteen++; // si es > 15 se incrementa el contador
        }

        if (num % 2 == 0)
        {
            countPairs++;    // incrementa contador
            pairsAvg += num; // suma promedio pares
        }
        else
        {
            countOdds++;    // incrementa contador
            oddsAvg += num; // suma promedio impares
        }
    }
    avg = avg / 8; // calcula promedio general

    pairsAvg = pairsAvg / countPairs; // calcula promedio pares

    oddsAvg = oddsAvg / countOdds; // calcula promedio impares

    printf("El promedio general es: %.2f\n", avg);
    printf("El promedio de los pares es: %.2f\n", pairsAvg);
    printf("El promedio de los impares es: %.2f\n", oddsAvg);

    printf("%d superaron el valor 15.\n", numHigherThanFifteen);

    return 0;
}