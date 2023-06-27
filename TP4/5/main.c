#include <stdio.h>
#include <stdlib.h>

int main()
{

    int temp = 0, higherTemp = 0, lowerTemp = 0, countTemp = 0;

    printf("Ingrese una temperatura: ");
    scanf("%d", &temp);

    while (temp != 1000)
    {

        countTemp++;

        if (countTemp == 0)
        {
            higherTemp = temp;
            lowerTemp = temp;
        }
        else
        {

            if (temp > higherTemp)
            {
                higherTemp = temp;
            }
            if (temp < lowerTemp)
            {
                lowerTemp = temp;
            }
        }

        printf("Ingrese una temperatura: ");
        scanf("%d", &temp);
    }

    printf("La temperatura mas alta es: %d\n", higherTemp);
    printf("La temperatura mas baja es: %d\n", lowerTemp);

    return 0;
}