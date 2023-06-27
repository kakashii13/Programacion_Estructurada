/*
    Una empresa desea procesar las ventas que efectúa conociendo los siguientes datos:

número de factura
código de articulo
cantidad vendida
precio unitario

En cada factura sólo se vende un tipo de artículo, los artículos son 6 y los datos finalizan con número de factura = 0
Se pide :
A.cantidad de facturas emitidas
B.monto de cada factura
C.suma de las facturas (caja diaria)
D.cantidad total de artículos vendidos
E.cantidad vendida de cada artículo
F.cantidad de facturas emitidas para cada artículo
G.promedio de importe de las facturas
H.porcentual que representa el monto total de cada artículo sobre el total
I.Saber si se vendió el artículo 4 (utilizar algortimo de búsqueda binaria).
*/

#include <stdio.h>

int binarySearch(int arr[], int size, int target)
{
    int center = 0;
    int high = size - 1;
    int low = 0;

    while (low <= high)
    {
        center = low + (high - low) / 2;
        if (arr[center] == target)
            return center;
        else if (arr[center] > target)
        {
            high = center - 1;
        }
        else
        {
            low = center + 1;
        }
    }
};

int main()
{
    int numInvoice;
    int articleCode = 0;
    int amountSold = 0;
    int unitPrice = 0;
    int articles[6] = {0};
    int invoicesPerArticle[6] = {0};
    int amountPerArticles[6] = {0};
    int countInvoicesEmit = 0;
    int amountPerInvoice = 0;
    int totalArticleSold = 0;
    int totalSold = 0;
    float averageValueOfInvoices = 0;
    float averageValueOfArticlesOverTotal = 0;

    // calculo el size del array de articles
    int size = sizeof(articles) / sizeof(articles[0]);

    printf("Ingrese nro de factura: (0 para salir): ");
    scanf("%d", &numInvoice);

    while (numInvoice != 0)
    {
        printf("Ingrese codigo de articulo: ");
        scanf("%d", &articleCode);

        printf("Ingrese la cantidad vendida: ");
        scanf("%d", &amountSold);

        printf("Ingrese el precio unitario: ");
        scanf("%d", &unitPrice);

        // Cantidad de facturas emitidas
        countInvoicesEmit++;

        // Monto de cada factura
        amountPerInvoice = amountSold * unitPrice;
        printf("\nMonto de la factura nro %d: $%d.\n", numInvoice, amountPerInvoice);

        // Suma de las facturas
        totalSold += amountPerInvoice;

        // suma montos de factura por articulo
        amountPerArticles[articleCode - 1] += amountPerInvoice;

        // Cantidad vendida de cada articulo
        articles[articleCode - 1] += amountSold;

        // cantidad de facturas emitidas para cada artículo
        invoicesPerArticle[articleCode - 1]++;

        printf("\nIngrese nro de factura: (0 para salir): ");
        scanf("%d", &numInvoice);
    }

    printf("-----------------------------------\n");
    for (int i = 0; i < 6; i++)
    {
        // suma para calcular el total de articulos vendidos
        totalArticleSold += articles[i];

        // Cantidad vendida de cada articulo
        printf("Se vendieron %d unidades del articulo %d.\n", articles[i], i + 1);

        // cantidad de facturas emitidas para cada artículo
        printf("\nSe emitieron %d facturas del articulo %d.\n", invoicesPerArticle[i], i + 1);

        // porcentual que representa el monto total de cada artículo sobre el total
        averageValueOfArticlesOverTotal = (amountPerArticles[i] * 100) / totalSold;
        printf("\nEl porcentaje del articulo %d sobre el total es de: %.2f%%.\n", i + 1, averageValueOfArticlesOverTotal);

        printf("-----------------------------------\n");
    }

    // cantidad total de artículos vendidos
    printf("\nSe vendieron un total de %d articulos.\n", totalArticleSold);

    // Cantidad de facturas emitidas
    printf("\nSe emitieron un total de %d facturas.\n", countInvoicesEmit);

    // Suma de las facturas
    printf("\nLa caja diaria es de $%d.\n", totalSold);

    // promedio de importe de las facturas
    averageValueOfInvoices = totalSold / countInvoicesEmit;
    printf("\nEl promedio de importe de las facturas es de: $%.2f.\n", averageValueOfInvoices);

    // Saber si se vendió el artículo 4 (utilizar algortimo de búsqueda binaria).
    int value = binarySearch(articles, size, 3);
    if (articles[value] > 0)
    {
        printf("\nSe vendio el articulo 4.\n");
    }
    else
    {
        printf("\nEl articulo 4 no se vendio.\n");
    }

    return 0;
}