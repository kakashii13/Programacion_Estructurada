#include <stdio.h>
#include <stdlib.h>

int main()
{
    int salary = 0, countOfSalaries = 0, sum = 0;
    float avg = 0;

    printf("Ingrese un sueldo: ");
    scanf("%d", &salary);

    while (salary != 0)
    {
        sum += salary;
        countOfSalaries++;

        printf("Ingrese un sueldo: ");
        scanf("%d", &salary);
    }

    printf("La suma de los sueldos es: $%d\n", sum);

    avg = sum / countOfSalaries;
    printf("El promedio total es %.2f\n", avg);

    return 0;
}