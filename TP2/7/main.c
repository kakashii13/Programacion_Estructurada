#include <stdio.h>
#include <stdlib.h>

int main()
{
    float vh, tt, sueldo;
    int premio = 100;

    printf("Ingrese el valor de la hora: ");
    scanf("%f", &vh);

    printf("Ingrese las horas trabajadas: ");
    scanf("%f", &tt);

    sueldo = vh * tt;

    if (tt > 50)
    {
        if (tt > 150)
        {
            sueldo = sueldo + premio * 2;
            printf("El sueldo del empleado es: $%.2f\n", sueldo);
        }
        else
        {
            sueldo = sueldo + premio;
            printf("El sueldo del empleado es: $%.2f\n", sueldo);
        }
    }
    else
    {
        printf("El sueldo del empleado es: $%.2f\n", sueldo);
    }

    return 0;
}