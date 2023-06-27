#include <stdio.h>
#include <stdlib.h>

// funcion principal
int main() { // inicio funcion
    int v1, v2; // inicializacion de variables
    int resultado = 0; // iniciacializacion de resultado 

    printf("Ingrese el primer numero: "); // muestra un msj por consola
    scanf("%d", &v1); // guarda los datos ingresados
    printf("Ingrese el segundo numero: "); // muestra un msj por consola
    scanf("%d", &v2); // guarda los datos ingresados

    resultado= v1+v2; // calcula el resultado
    
    printf("El resultado es: %d \n", resultado); // muestra msj por consola
    return 0; // fin de la ejecucion 
} // fin funcion 