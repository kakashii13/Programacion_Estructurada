#include <stdio.h>
#include <stdlib.h>

// funcion principal
int main(){//inicio funcion
    int valor_vehiculo, cant_vehiculo; // inicializacion de variables
    int sueldo_fijo = 500; // inicializacion y asignacion de variable
    int plus_fijo = 50; // inicializacion y asignacion de variable
    double sueldo = 0;  // inicializacion y asignacion de variable

    printf("Ingrese valor del vehiculo: "); // muestra msj por consola
    scanf("%d", &valor_vehiculo); // guarda valor en variable

    printf("Ingrese cantidad de vehiculos vendidos: "); // muestra msj por consola
    scanf("%d", &cant_vehiculo); 

    sueldo = (sueldo_fijo + (valor_vehiculo * 0.1 + plus_fijo) * cant_vehiculo); // calcula sueldo

    printf("El sueldo es: %.2f pesos \n", sueldo); // muestra msj por consola
    
    return 0;
} // fin funcion