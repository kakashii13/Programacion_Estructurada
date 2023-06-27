/* 1) Ingresar datos y cargar un vector de 50 elementos, calcular
La suma de todos los elementos.
El producto de todos los elementos.
Mostrar del vector el elemento 50 al 1.
Imprimir las componentes de indice par.
Imprimir las componentes de indice impar. */

#include <stdio.h>

int main()
{
    // ingresar 50 elementos
    int vector[50];
    int totalSum = 0;
    long long int totalProduct = 1; // multiplicar 50 veces ???? se desborda

    // usuario ingresa los valores y se guardan en el vector
    printf("Ingrese 50 valores: \n");
    for (int i = 0; i < 50; i++)
    {
        printf("Valor %d: ", i + 1);
        scanf("%d", &vector[i]);

        // suma y multiplica todos los elementos
        totalSum += vector[i];
        totalProduct *= vector[i];
    }

    // muestra el vector de 50 a 1
    printf("\nVector del 50 al 1:\n");
    for (int i = 9; i >= 0; i--)
    {
        printf("[%d]", vector[i]);
    }
    printf("\n----------------------\n");

    for (int i = 0; i < 50; i++)
    {

        if (i % 2 == 0)
        {
            printf("Valor de indice par: [%d]\n", vector[i]);
        }
        else
        {
            printf("Valor de indice impar: [%d]\n", vector[i]);
        }
    }
    printf("\n----------------------\n");

    printf("La suma total es: %d\n", totalSum);
    printf("El producto total es: %d\n", totalProduct); // produce un desbordamiento

    return 0;
}