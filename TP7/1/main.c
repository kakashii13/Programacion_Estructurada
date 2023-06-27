#include <stdio.h>
/*
    Ingrese 20 valores en un vector e imprimalo ordenado utilizando el algoritmo bubblesort (ordenamiento por burbujeo).
*/

void bubbleSort(int *vector, int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - i - 1; j++)
        {
            if (vector[j] > vector[j + 1])
            {
                int aux = vector[j];
                vector[j] = vector[j + 1];
                vector[j + 1] = aux;
            }
        }
    }
}

int main()
{
    int vector[20];
    int size = sizeof(vector) / sizeof(vector[0]);

    // guardo los valores ingresados en el vector
    for (int i = 0; i < 20; i++)
    {
        printf("Ingrese un numero: ");
        scanf("%d", &vector[i]);
    }

    // ejecuto la funcion
    bubbleSort(vector, size);

    // imprimo los valores ordenados
    for (int i = 0; i < 20; i++)
    {
        printf("[%d]\n", vector[i]);
    }

    return 0;
}