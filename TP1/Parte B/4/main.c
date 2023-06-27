#include <stdio.h>
#include <stdlib.h>

// funcion principal
int main(){//inicio funcion
    int v1, v2, v3; // inicializacion de variables
    int resultado = 0; // asignacion e inicializacion de variable

    printf("Ingrese lado 1: "); // muestra msj por consola
    scanf("%d", &v1); // guarda el valor en la variable

    printf("Ingrese lado 2: "); // muestra msj por consola
    scanf("%d", &v2); // guarda el valor en la variable

    printf("Ingrese lado 3: "); // muestra msj por consola
    scanf("%d", &v3); // guarda el valor en la variable

    resultado = v1 + v2 + v3; // calcula el perimetro

    printf("El perimetro del triangulo es: %d \n", resultado);// imprime el resultado

    return 0; // finaliza la ejecucion
} // fin funcion