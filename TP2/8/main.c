#include <stdio.h>
#include <stdlib.h>

int main()
{
    int day, month, year;

    printf("Ingrese el dia: ");
    scanf("%d", &day);
    printf("Ingrese el mes: ");
    scanf("%d", &month);
    printf("Ingrese el año: ");
    scanf("%d", &year);

    if (month < 1 || month > 12 || day < 1 || day > 31 || year <= 0)
    {
        printf("La fecha es invalida\n");
    }
    else if (month == 2)
    { // Si es febrero calculo si es bisiesto
        if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
        {
            if (day <= 29)
            {
                printf("La fecha %d/%d/%d es valida\n", day, month, year);
            }
            else
            {
                printf("La fecha es invalida\n");
            }
        }
        else
        {
            if (day <= 28)
            {
                printf("La fecha %d/%d/%d es valida\n", day, month, year);
            }
            else
            {
                printf("La fecha es invalida\n");
            }
        }
    }
    else if (month == 4 || month == 6 || month == 9 || month == 11)
    {
        if (day <= 30)
        {
            printf("La fecha %d/%d/%d es valida\n", day, month, year);
        }
        else
        {
            printf("La fecha es invalida\n");
        }
    }
    else
    {
        printf("La fecha %d/%d/%d es valida\n", day, month, year);
    }

    return 0;
}