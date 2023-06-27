#include <stdio.h>
#include <stdlib.h>

// funcion principal
int main() { // inicio funcion
    int v1, v2, v3; // inicializacion de variables
    int resultado = 0; // asignacion e inicializacion de variables

    printf("Ingrese un numero: "); // muestra msj por consola
    scanf("%d", &v1); // guarda los datos ingresados

    printf("Ingrese un numero: "); // muestra msj por consola
    scanf("%d", &v2); // guarda los datos ingresados

    printf("Ingrese un numero: "); // muestra msj por consola
    scanf("%d", &v3); // guarda los datos ingresados


    resultado = v1 + v2; // suma los primeros 2 numeros
    resultado = resultado + v3; // suma el resultado de los primeros numeros con el tercero

    printf("El resultado es: %d \n", resultado); // muestra msj por consola
    return 0;
}