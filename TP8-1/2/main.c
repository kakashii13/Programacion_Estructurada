#include <stdio.h>

/*
    2) Modifique el programa anterior, para que permita elegir que algoritmo utilizar por medio de un menú, puede ser Bubblesort o Quicksort. Deben utilizarse funciones para implementar los algoritmos.
*/

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int partition(int arr[], int low, int high)
{
    int pivot = arr[high];

    int i = (low - 1);

    for (int j = low; j <= high - 1; j++)
    {
        if (arr[j] < pivot)
        {
            i++;
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[high]);
    return (i + 1);
}

void quicksort(int arr[], int low, int high)
{
    if (low < high)
    {
        int pi = partition(arr, low, high);

        quicksort(arr, low, pi - 1);
        quicksort(arr, pi + 1, high);
    }
}

void bubblesort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(&arr[j], &arr[j + 1]);
            }
        }
    }
}

int main()
{
    int vector[20];
    int n = sizeof(vector) / sizeof(vector[0]);
    int typeSort;

    for (int i = 0; i < n - 1; i++)
    {
        printf("Ingrese un numero: ");
        scanf("%d", &vector[i]);
    }

    printf("Como desear ordenarlo? (1 - quicksort / 2 - bubblesort): ");
    scanf("%d", &typeSort);

    if (typeSort == 1)
    {
        quicksort(vector, 0, n - 1);
    }
    else if (typeSort == 2)
    {
        bubblesort(vector, n - 1);
    }
    else
    {
        printf("No selecciono un metodo correcto.\n");
    }

    for (int i = 0; i < n - 1; i++)
    {
        printf("[%d]\n", vector[i]);
    }

    return 0;
}