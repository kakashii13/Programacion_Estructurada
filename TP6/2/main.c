/* 2) Ingresar 10 sueldos y edades de una empresa y calcular
Sueldo promedio
Sueldo promedio de los empleados que tienen entre 23 y 40 años
Edad promedio
Cantidad de empleados mayores a 30 años y sueldo menor a $ 1000.
Cantidad de empleados con edades menor a la edad promedio */

#include <stdio.h>

float calculaPromedio(float total, int count);

int main()
{
    int vector[10][2], edadesTotal = 0, countSueldosE23y40 = 0, countEmplMayoresA30 = 0, countEmplMenoresAlPromedio;
    float sueldosTotal = 0, sueldosTotalE23y40 = 0, edadPromedio = 0;

    for (int i = 0; i < 10; i++)
    {
        printf("Ingrese un sueldo: ");
        scanf("%d", &vector[i][0]);
        printf("Ingrese una edad: ");
        scanf("%d", &vector[i][1]);

        // Sumo y guardo los sueldos
        sueldosTotal += vector[i][0];
        edadesTotal += vector[i][1];

        if (vector[i][1] >= 23 && vector[i][1] <= 40)
        {
            sueldosTotalE23y40 += vector[i][0];
            countSueldosE23y40++;
        }

        if (vector[i][1] >= 30 && vector[i][0] < 1000)
        {
            countEmplMayoresA30++;
        }
    }

    // sueldo promedio
    printf("\nEl sueldo promedio es: $");
    calculaPromedio(sueldosTotal, 10);

    // sueldo promedio entre 23 y 40
    printf("\nEl sueldo promedio entre 23 y 40 años es: $");
    calculaPromedio(sueldosTotalE23y40, countSueldosE23y40);

    // edad promedio
    printf("\nLa edad promedio es: ");
    edadPromedio = calculaPromedio(edadesTotal, 10);

    for (int i = 0; i < 10; i++)
    {
        if (vector[i][1] < edadPromedio)
        {
            countEmplMenoresAlPromedio++;
        }
    }

    printf("\nHay %d empleados mayores a 30 años y con sueldos menores a $1000\n", countEmplMayoresA30);

    printf("\nHay %d empleados menores a la edad promedio.\n", countEmplMenoresAlPromedio);
    return 0;
}

float calculaPromedio(float total, int count)
{
    float promedio = 0;
    promedio = total / count;
    printf("%.2f\n", promedio);
    return promedio;
};
