/*
    Una consultora tiene 10 analistas y 15 proyectos en los que trabajan indistintamente, a fin de mes cada analista eleva una planilla con los siguientes datos

Número de analista
Número de proyecto
Cantidad de hs trabajadas


En memoria se debera cargar previamente el nombre de los analistas y el valor hora. Se desea saber:

Cantidad de hs. trabajadas en total por cada analista.
Total de horas trabajadas por cada analista en cada proyecto.
Total de hs trabajadas sobre cada proyecto.
Qué analista trabajó menos en el proyecto 1.
Sueldo de cada analista.
Nombre del analista que cobró más.
Cantidad de analistas que hayan trabajado menos de 5 hs en alguno de los proyectos.
Imprimir ordenado en forma descendente por sueldo de los analista: nombre valor de la hora y sueldo
*/

#include <stdio.h>

int scanAnalyst() {}
void bubbleSort(int *salaryOfAnalyst)
{
    for (int i = 0; i < 10 - 1; i++)
    {
        for (int j = 0; j < 10 - i - 1; j++)
        {
            if (salaryOfAnalyst[j] < salaryOfAnalyst[j + 1])
            {
                int aux = salaryOfAnalyst[j];
                salaryOfAnalyst[j] = salaryOfAnalyst[j + 1];
                salaryOfAnalyst[j + 1] = aux;
            }
        }
    }
}

int main()
{
    char *names[] = {"Matias", "Juan", "Laura", "Agustina", "Diego", "Romina", "Luis", "Sofia", "Santiago", "German"};
    int hourValue = 100;
    int hoursWorkedPerProjects[15] = {0}, hoursWorkedPerAnalyst[10] = {0}, numOfAnalyst, numOfProject, hoursWorked = 0, projectOneLowest = 0, highestAnalystSalary = 0, countAnalystWorkedLessFiveHours = 0, salaryOfAnalyst[10];
    int hoursWorkedPerAnalystPerProjects[10][15] = {0};

    printf("Ingrese nro de analista - (0 para salir): ");
    scanf("%d", &numOfAnalyst);
    // ingreso los datos de los analistas
    while (numOfAnalyst != 0)
    {
        printf("Ingrese nro de proyecto: ");
        scanf("%d", &numOfProject);
        printf("Ingrese cantidad de horas trabajadas: ");
        scanf("%d", &hoursWorked);

        // Cantidad de hs. trabajadas en total por cada analista.
        hoursWorkedPerAnalyst[numOfAnalyst - 1] += hoursWorked;

        // Total de horas trabajadas por cada analista en cada proyecto.
        hoursWorkedPerAnalystPerProjects[numOfAnalyst - 1][numOfProject - 1] += hoursWorked;

        // Total de hs trabajadas sobre cada proyecto.
        hoursWorkedPerProjects[numOfProject - 1] += hoursWorked;

        printf("Ingrese nro de analista - (0 para salir): ");
        scanf("%d", &numOfAnalyst);
    }

    printf("-------------------------------------\n");

    for (int i = 0; i < 10; i++)
    {
        // Qué analista trabajó menos en el proyecto 1.
        if (hoursWorkedPerAnalystPerProjects[i][0] != 0 && hoursWorkedPerAnalystPerProjects[i][0] > projectOneLowest)
        {
            hoursWorkedPerAnalystPerProjects[i][0] = projectOneLowest;
        }

        // Sueldo de cada analista.
        salaryOfAnalyst[i] = hoursWorkedPerAnalyst[i] * hourValue;

        // Nombre del analista que cobró más.
        if (salaryOfAnalyst[i] > highestAnalystSalary)
        {
            highestAnalystSalary = i;
        }

        // Sueldo de cada analista.
        // Cantidad de hs. trabajadas en total por cada analista.
        printf("El sueldo de %s es %d - trabajo un total de %d horas.\n", names[i], salaryOfAnalyst[i], hoursWorkedPerAnalyst[i]);
    }

    // Cantidad de analistas que hayan trabajado menos de 5 hs en alguno de los proyectos.

    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 15; j++)
        {
            if (hoursWorkedPerAnalystPerProjects[i][j] < 5)
            {
                countAnalystWorkedLessFiveHours++;
                break;
            }

            // Total de horas trabajadas por cada analista en cada proyecto.
            printf("%s trabajo un total de %d horas en el proyecto nro %d.\n", names[i], hoursWorkedPerAnalystPerProjects[i][j], j + 1);
        }
    }

    printf("-------------------------------------\n");
    for (int i = 0; i < 15; i++)
    {
        // Total de hs trabajadas sobre cada proyecto.
        printf("Para el proyecto nro %d se trabajo un total de %d horas.\n", i + 1, hoursWorkedPerProjects[i]);
    }
    printf("-------------------------------------\n");

    // Cantidad de analistas que hayan trabajado menos de 5 hs en alguno de los proyectos.
    printf("%d analistas trabajaron menos de 5 horas en algun proyecto.\n", countAnalystWorkedLessFiveHours);

    // Qué analista trabajó menos en el proyecto 1.
    printf("%s fue el analista que trabajo menos en el proyecto nro 1.\n\n", names[projectOneLowest]);

    // Nombre del analista que cobró más.
    printf("%s fue el analista que mas cobro.\n\n", names[highestAnalystSalary]);

    // Imprimir ordenado en forma descendente por sueldo de los analista: nombre valor de la hora y sueldo
    bubbleSort(salaryOfAnalyst);

    // Imprimir ordenado en forma descendente por sueldo de los analista: nombre valor de la hora y sueldo
    for (int i = 0; i < 10; i++)
    {
        printf("Nombre: %s - Sueldo: %d - ValorHora: %d.\n", names[i], salaryOfAnalyst[i], hourValue);
    } // ESTO ESTA MAL, ORDENO LOS SUELDOS PERO NO LOS NOMBRES !!! :C

    return 0;
}