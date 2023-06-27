// 7) Desarrolle un programa que pida al usuario los datos de dos matrices de 2x2, y calcule y muestre su producto. Investigue como obtener el producto de dos matrices.

#include <stdio.h>

int main(int argc, char *argv[])
{
    int vector1[2][2],
        vector2[2][2];
    int vectorResult[2][2];

    // vector 1
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("Ingrese el valor de la matriz 1 en la posicion [%d][%d]: ", i, j);
            scanf("%d", &vector1[i][j]);
        }
    }
    // vector 2
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("Ingrese el valor de la matriz 2 en la posicion [%d][%d]: ", i, j);
            scanf("%d", &vector2[i][j]);
        }
    }

    // calculo la multiplicacion de las matrices
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            int test = 0;
            for (int k = 0; k < 2; k++)
            {
                test += vector1[i][k] * vector2[k][j];
                printf("i = [%d]\n", i);
                printf("j = [%d]\n", j);
                printf("k = [%d]\n", k);
                printf("test = [%d]\n", test);
                printf("----------------------\n");
            }
            vectorResult[i][j] = test;
        }
    }

    // muestro por pantalla el resultado de cada posicion de la matriz resultante
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("vectorResult = [%d]\n", vectorResult[i][j]);
        }
    }
    return 0;
}