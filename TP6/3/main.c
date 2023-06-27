/*
3) En una empresa los empleados cobran un sueldo según la categoria, son 50 empleados y 3 categorías

Categoría1 = $ 1500
Categoría2 = $ 2000
Categoría3 = $ 2500

Al sueldo se le suman $ 100 por cada año trabajado. Si se ingresa el nombre, categoría y antigüedad de cada empleado, calcular

Cuántos empleados hay por categoría
Total de sueldos pagados por categoría
Sueldo promedio general
Sueldo máximo y a quién pertenece
Qué porcentaje sobre el total de sueldos representa cada total de sueldos de las categorías
*/

#include <stdio.h>

float calculaPromedio(float total, int count);
int calculaSueldo(int categoria, int antiguedad);

int main()
{
    int i, sueldo, empleados[50][2], empleados_por_categoria[3] = {0, 0, 0}, sueldos_por_categoria[3] = {0, 0, 0}, nombre_sueldo_maximo = 0;
    float porcentaje_total_sueldo_por_categoria;
    char nombres[50][12], sueldo_maximo_nombre[12];
    int sueldo_maximo = 0, sueldos_total = 0;

    for (i = 0; i < 50; i++)
    {
        // nombre
        printf("Ingrese el nombre: ");
        scanf("%s", &nombres[i][0]);
        // categoria
        printf("Seleccione la categoria [1,2,3]: ");
        scanf("%d", &empleados[i][0]);
        // antiguedad
        printf("Ingrese la antiguedad: ");
        scanf("%d", &empleados[i][1]);

        // calculo el sueldo
        sueldo = calculaSueldo(empleados[i][0], empleados[i][1]);

        // acumulo los sueldos totales
        sueldos_total += sueldo;

        // acumulo los empleados y sueldos por categoria
        int categoria = empleados[i][0];
        empleados_por_categoria[categoria - 1]++;
        sueldos_por_categoria[categoria - 1] += sueldo;

        if (sueldo > sueldo_maximo)
        {
            // guardo el indice para buscar el nombre
            nombre_sueldo_maximo = i;
            // guardo el sueldo
            sueldo_maximo = sueldo;
        }
    }

    printf("\n-------------------------------------\n");

    printf("\nEl sueldo promedio es: $");
    calculaPromedio(sueldos_total, 5);

    // sueldo maximo
    printf("\nEl sueldo maximo es de $%d y corresponde a %s\n", sueldo_maximo, nombres[nombre_sueldo_maximo]);

    for (i = 0; i < 3; i++)
    {
        // porcentaje sobre el total de sueldos por categoria
        porcentaje_total_sueldo_por_categoria = (sueldos_por_categoria[i] * 100) / sueldos_total;
        printf("\n%.3f%% del total de sueldos corresponde a la categoria %d\n", porcentaje_total_sueldo_por_categoria, i + 1);
    }

    return 0;
}

float calculaPromedio(float total, int count)
{
    float promedio = 0;
    promedio = total / count;
    printf("%.2f\n", promedio);
    return promedio;
};

int calculaSueldo(int categoria, int antiguedad)
{
    int categorias[3] = {1500, 2000, 2500};
    int plus = 100, sueldo = 0;

    sueldo = categorias[categoria - 1];

    for (int i = 0; i < antiguedad; i++)
    {
        sueldo += plus;
    }

    return sueldo;
};
