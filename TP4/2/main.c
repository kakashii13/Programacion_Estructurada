#include <stdio.h>
#include <stdlib.h>

int main()
{

    int invoice = 0, invoiceAmount = 0, sum = 0, invoicesHigherThan1000 = 0, invoicesAmount400to700 = 0;

    printf("Ingrese nro de factura: ");
    scanf("%d", &invoice);
    printf("Ingrese el monto de la factura: ");
    scanf("%d", &invoiceAmount);

    while (invoice != 0)
    {

        sum += invoiceAmount;

        if (invoiceAmount > 1000)
        {
            printf("La factura nro %d supera los $1000\n", invoice);
            invoicesHigherThan1000++; // Cuenta valores mayores a 1000
        }

        if (invoiceAmount >= 400 && invoiceAmount <= 700)
        {
            invoicesAmount400to700++; // Cuenta valores que ingresan en el rango 400-700
        }

        printf("Ingrese nro de factura: ");
        scanf("%d", &invoice);
        printf("Ingrese el monto de la factura: ");
        scanf("%d", &invoiceAmount);
    }

    printf("%d facturas superaron los $1000.\n", invoicesHigherThan1000);
    printf("%d facturas estan en el rango $400-$700.\n", invoicesAmount400to700);

    return 0;
}