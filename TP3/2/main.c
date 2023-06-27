#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number = 0, positives = 0, negatives = 0, zeros = 0;

    for (int i = 0; i < 10; i++)
    {
        printf("Ingrese un numero: ");
        scanf("%d", &number);

        if (number > 0)
        {
            positives++;
        }
        else if (number < 0)
        {
            negatives++;
        }
        else
        {
            zeros++;
        }
    }

    printf("Hay %d positivos, %d negativos y %d ceros\n", positives, negatives, zeros);

    return 0;
}