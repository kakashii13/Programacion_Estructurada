#include <stdio.h>
#include <stdlib.h>

// funcion principal 
int main(){//inicio funcion

    int v1, v2; // inicializacion de las variables
    int suma = 0; // inicializacion y asignacion de variable
    int producto = 0; // inicializacion y asignacion de variable
    int resta = 0; // inicializacion y asignacion de variable

    printf("Ingrese un numero: "); // muestra msj por consola
    scanf("%d", &v1); // guarda el valor en la variable
    
    printf("Ingrese un numero: "); // muestra msj por consola
    scanf("%d", &v2); // guarda el valor en la variable
    
    suma = v1 + v2; // calcula suma
    producto = v1 * v2; // calcula producto
    resta = v1 - v2; // calcula resta

    printf("La suma es: %d \n", suma); // muestra resultado por pantalla
    printf("El producto es: %d \n", producto); // muestra resultado por pantalla
    printf("La resta es: %d \n", resta); // muestra resultado por pantalla

    return 0; // fin ejecucion
}// fin funcion