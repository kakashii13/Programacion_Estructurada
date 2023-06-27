#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// funcion principal
int main(){//inicio funcion
    int v1,v2; // inicializacion de variables
    double diagonal = 0; // inicializacion y asignacion de variable
    double perimetro = 0; //inicializacion y asignacion de variable
    double superficie = 0; // inicializacion y asignacion de variable

    printf("Ingrese lado 1: "); // muestra msj por consola
    scanf("%d", &v1); // guarda el valor en la variable

    printf("Ingrese lado 2: "); // muestra msj por consola
    scanf("%d", &v2); // guarda el valor en la variable

    diagonal = sqrt(pow(v1, 2) + pow(v2, 2)); // calcula la diagonal
    perimetro = 2*(v1 + v2); // calcula el perimetro
    superficie = v1 * v2; // calcula la superficie

    printf("La diagonal es: %.2f \n", diagonal); // muestra msj por consola
    printf("El perimetro es es: %.2f \n", perimetro); // muestra msj por consola
    printf("La superficie es: %.2f \n", superficie); // muestra msj por consola

    return 0; // finaliza la ejecucion
} //fin funcion