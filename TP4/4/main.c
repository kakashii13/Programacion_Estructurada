#include <stdio.h>
#include <stdlib.h>

int main()
{
    int invoiceNum = 0, articleNum = 0, amount = 0, totalSold = 0, unityPrice = 0, totalArt1 = 0, totalArt2 = 0, totalArt3 = 0;

    printf("Ingrese nro de factura: ");
    scanf("%d", &invoiceNum);

    while (invoiceNum != 0)
    {
        printf("Seleccione numero de articulo 1-2-3: ");
        scanf("%d", &articleNum);

        printf("Ingrese la cantidad vendida: ");
        scanf("%d", &amount);

        printf("Ingrese el precio por unidad: ");
        scanf("%d", &unityPrice);

        switch (articleNum)
        {
        case (1):
            totalArt1 += amount * unityPrice;
            break;
        case (2):
            totalArt2 += amount * unityPrice;
            break;
        case (3):
            totalArt3 += amount * unityPrice;
            break;
        default:
            printf("Numero de articulo incorrecto.\n");
            break;
        }
        totalSold += amount * unityPrice;

        printf("Ingrese nro de factura: ");
        scanf("%d", &invoiceNum);
    }

    printf("Ventas articulo 1: $%d\n", totalArt1);
    printf("Ventas articulo 2: $%d\n", totalArt2);
    printf("Ventas articulo 3: $%d\n", totalArt3);
    printf("El total facturado es $%d\n", totalSold);

    return 0;
}