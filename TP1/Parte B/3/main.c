#include <stdio.h>
#include <stdlib.h>

// funcion principal
int main() { // inicio funcion
    int v1, v2, v3; // inicializacion de variables
    int resultado = 0; // asignacion e inicializacion de variable

    printf("Ingrese un numero: "); // muestra msj por consola
    scanf("%d", &v1); // guarda la variable 
    printf("Ingrese un numero: "); // muestra msj por consola
    scanf("%d", &v2); // guarda la variable 
    printf("Ingrese un numero: "); // muestra msj por consola
    scanf("%d", &v3); // guarda la variable 

    resultado= v1 + v2 + v3; // calcula el resultado

    printf("El resultado es: %d \n", resultado); // muestra resultado por consola
    return 0; // finaliza ejecucion
} // fin funcion
