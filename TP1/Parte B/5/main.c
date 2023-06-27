#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// funcion principal
int main(){//inicio funcion
    int v1,v2; // inicializacion de variables
    double hipotenusa = 0; //inicializacion y asignacion de variable
    double perimetro = 0; //inicializacion y asignacion de variable
    double superficie = 0; //inicializacion y asignacion de variable

    printf("Ingrese lado 1: "); // muestra msj por consola
    scanf("%d", &v1); // guarda el valor en la variable

    printf("Ingrese lado 2: "); // muestra msj por consola
    scanf("%d", &v2); // guarda el valor en la variable

    hipotenusa = sqrt(pow(v1,2) + pow(v2, 2)); // calcula hipotenusa
    perimetro = v1 + v2 + hipotenusa; // calcula perimetro
    superficie = (v1*v2)/2; // calcula superficie

    printf("El valor de la hipotenusa es: %.2f \n", hipotenusa); // muestra msj por consola
    printf("El valor del perimetro es: %2.f \n", perimetro ); // muestra msj por consola
    printf("El valor de la superficie es: %2.f \n", superficie); // muestra msj por consola

    return 0; // fin ejecucion
} // fin funcion
