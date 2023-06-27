// Ingrese 10 valores en un vector de enteros. Sume todos los valores muestre el resultado en pantalla. Responda:
// ¿Cuántas líneas de código necesito para desarrollar el programa sin utilizar ciclos de repetición?
#include <stdio.h>

int main(int argc, char *argv[])
{
    // int vector[10] = {98, 2, 4, 6, 12, 12, 5, 7, 24, 31}; // si estuviese inicializado
    int vector[10]; // si no estuviese inicializado
    int result = 0;

    printf("Ingrese un valor: ");
    scanf("%d", &vector[0]);
    printf("Ingrese un valor: ");
    scanf("%d", &vector[1]);
    printf("Ingrese un valor: ");
    scanf("%d", &vector[2]);
    printf("Ingrese un valor: ");
    scanf("%d", &vector[3]);
    printf("Ingrese un valor: ");
    scanf("%d", &vector[4]);
    printf("Ingrese un valor: ");
    scanf("%d", &vector[5]);
    printf("Ingrese un valor: ");
    scanf("%d", &vector[6]);
    printf("Ingrese un valor: ");
    scanf("%d", &vector[7]);
    printf("Ingrese un valor: ");
    scanf("%d", &vector[8]);
    printf("Ingrese un valor: ");
    scanf("%d", &vector[9]);

    result += vector[0];
    result += vector[1];
    result += vector[2];
    result += vector[3];
    result += vector[4];
    result += vector[5];
    result += vector[6];
    result += vector[7];
    result += vector[8];
    result += vector[9];

    printf("El resultado es: %d\n", result);

    return 0;
}