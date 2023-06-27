#include <stdio.h> // libreria utilizada
#include <stdlib.h> // libreria utilizada
// funcion main   
int main() {  // inicio funcion
    int emp, ch, vh, sdo; // declaracion de variables
    system("clear"); // limpia la pantalla
    printf("Ingrese el nro de empleado: "); // muestra msj por consola
    scanf("%d", &emp); // lee los datos del teclado
    printf("Ingrese la cantidad de horas: ");  // muestra msj por consola
    scanf("%d", &ch); // lee los datos del teclado
    printf("Ingrese el valor de la hora: "); // muestra msj por consola
    scanf("%d", &vh); // lee los datos del teclado
    sdo=ch*vh; // calcula el sueldo
    printf("El empleado %d, cobra %d pesos \n", emp, sdo); // muestra msj por consola
    return 0; // termina la ejecucion 
} // fin funcion 