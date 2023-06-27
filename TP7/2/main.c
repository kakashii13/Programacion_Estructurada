#include <stdio.h>

// 2) Cree un programa para ingresar 20 números en un vector y luego que permita introducir un número para realizar una búsqueda. Permita que el operador del programa elija que tipo de algoritmo quiere utilizar por medio de un menú (debe ser búsqueda binaria o secuencial).

int sequentialSearch(int *vector, int size, int numToSearch)
{
    for (int i = 0; i < size; i++)
    {
        if (vector[i] == numToSearch)
        {
            return i;
        }
    }
    return -1;
}

int binarySearch(int *vector, int size, int numToSearch)
{
    int left = 0;
    int right = size - 1;
    int center = 0;

    while (left <= right)
    {
        center = left + (right - left) / 2;
        if (vector[center] == numToSearch)
            return center;
        else if (numToSearch > vector[center])
        {
            left = center + 1;
        }
        else
        {
            right = center - 1;
        }
    }
    return -1;
}

int main()
{
    int vector[10];
    int size = sizeof(vector) / sizeof(vector[0]);
    int typeOfSearch = 0, numToSearch, position;

    for (int i = 0; i < size; i++)
    {
        printf("Ingrese un numero: ");
        scanf("%d", &vector[i]);
    }

    // numero a buscar
    printf("Ingrese el numero a buscar: ");
    scanf("%d", &numToSearch);

    // eleccion tipo de busqueda
    printf("Elija el metodo de busqueda: \n(1) - Busqueda secuencial | (2) - Busqueda binaria\n");
    scanf("%d", &typeOfSearch);

    if (typeOfSearch == 1)
    {
        position = sequentialSearch(vector, size, numToSearch);
    }
    else
    {
        position = binarySearch(vector, size, numToSearch);
    }

    // imprimo el resultado
    printf("El numero %d esta en la posicion nro %d.\n", numToSearch, position);

    return 0;
}
