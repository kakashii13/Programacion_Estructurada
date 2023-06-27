#include <stdio.h>
#include <stdlib.h>

// funcion principal
int main(){//inicio funcion
    int tt; // inicializacion de variables
    int vh = 10; // inicializacion y asignacion de variable
    int sueldo = 0; // inicializacion y asignacion de variable

    printf("Ingrese el tiempo trabajado: "); // muestra msj por consola
    scanf("%d", &tt); // guarda valor en la variable

    sueldo = vh * tt; // calcula sueldo

    printf("El sueldo es: %d pesos \n", sueldo); // muestra resultado por consola 

    return 0; // fin ejecucion
}// fin funcion