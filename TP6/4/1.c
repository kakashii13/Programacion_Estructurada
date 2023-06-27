#include <stdio.h>

#define NUM_MOZOS 6
#define NUM_MESAS 12

void ingresarDatosFactura(int *num_mozo, int *num_mesa, int *cantidad_personas_mesa, int *cuenta_por_mesa)
{
    printf("Ingrese numero de mozo (1-6): ");
    scanf("%d", num_mozo);

    printf("Ingrese numero de mesa (1-12): ");
    scanf("%d", num_mesa);

    printf("Ingrese cantidad de personas que comieron: ");
    scanf("%d", cantidad_personas_mesa);

    printf("Ingrese el monto total de la cuenta: ");
    scanf("%d", cuenta_por_mesa);
}

void actualizarDatosMozo(int mozos[], int monto_facturado_por_mozo[], int num_mozo, int cantidad_personas_mesa, int cuenta_por_mesa)
{
    mozos[num_mozo - 1]++;
    monto_facturado_por_mozo[num_mozo - 1] += cuenta_por_mesa;
}

void actualizarDatosMesa(int mesas[], int monto_total_por_mesa[], int num_mesa, int cuenta_por_mesa)
{
    mesas[num_mesa - 1]++;
    monto_total_por_mesa[num_mesa - 1] += cuenta_por_mesa;
}

void calcularEstadisticas(int mozos[], int cantidad_de_personas_por_mozo[], int monto_facturado_por_mozo[], int monto_total,
                          int *max_personas_atendidas_mozo, int *num_mozo, int facturas_mayores_45)
{
    for (int i = 0; i < NUM_MOZOS; i++)
    {
        float porcentaje_factura_por_mozo = monto_facturado_por_mozo[i] * 100.0 / monto_total;
        printf("\nEl porcentaje del mozo %d es %.2f%%. \n", i + 1, porcentaje_factura_por_mozo);

        printf("El mozo nro [%d] atendio %d personas.\n", i + 1, cantidad_de_personas_por_mozo[i]);

        if (cantidad_de_personas_por_mozo[i] > *max_personas_atendidas_mozo)
        {
            *max_personas_atendidas_mozo = cantidad_de_personas_por_mozo[i];
            *num_mozo = i + 1;
        }

        float monto_con_plus = monto_facturado_por_mozo[i] + monto_facturado_por_mozo[i] * 0.05;
        printf("Si a cada mozo se le diera el 5%% de su venta recibiria un total de $%.2f.\n", monto_con_plus);
    }

    printf("\n--------------------------------\n");

    int mesa_mas_facturada = 0;
    int num_mesa = 0;

    for (int i = 0; i < NUM_MESAS; i++)
    {
        if (mesas[i] > mesa_mas_facturada)
        {
            mesa_mas_facturada = mesas[i];
            num_mesa = i + 1;
        }

        printf("La mesa nro [%d] facturo $%d.\n", i + 1, monto_total_por_mesa[i]);
    }

    printf("\nEl mozo nro %d fue el que mas personas atendio con un total de %d personas.\n", *num_mozo, *max_personas_atendidas_mozo);
    printf("\n%d facturas superaron los $45.\n", facturas_mayores_45);
    printf("\nLa mesa %d fue la que facturo mas veces.\n", num_mesa);
    printf("\nSe facturo un total de $%d.\n", monto_total);
}

int main()
{
    int num_factura;
    int mozos[NUM_MOZOS] = {0};
    int mesas[NUM_MESAS] = {0};
    int cantidad_de_personas_por_mozo[NUM_MOZOS] = {0};
    int monto_facturado_por_mozo[NUM_MOZOS] = {0};
    int monto_total_por_mesa[NUM_MESAS] = {0};
    int monto_total = 0;
    int cantidad_facturas_realizas = 0;
    int max_personas_atendidas_mozo = 0;
    int facturas_mayores_45 = 0;

    printf("Ingrese numero de factura (0 para salir): ");
    scanf("%d", &num_factura);

    while (num_factura != 0)
    {
        cantidad_facturas_realizas++;

        int num_mozo;
        int num_mesa;
        int cantidad_personas_mesa;
        int cuenta_por_mesa;

        ingresarDatosFactura(&num_mozo, &num_mesa, &cantidad_personas_mesa, &cuenta_por_mesa);
        actualizarDatosMozo(mozos, monto_facturado_por_mozo, num_mozo, cantidad_personas_mesa, cuenta_por_mesa);
        actualizarDatosMesa(mesas, monto_total_por_mesa, num_mesa, cuenta_por_mesa);
        monto_total += cuenta_por_mesa;

        if (cuenta_por_mesa > 45)
        {
            facturas_mayores_45++;
        }

        printf("Ingrese numero de factura (0 para salir): ");
        scanf("%d", &num_factura);
    }

    calcularEstadisticas(mozos, cantidad_de_personas_por_mozo, monto_facturado_por_mozo, monto_total,
                         &max_personas_atendidas_mozo, &num_mozo, facturas_mayores_45);

    return 0;
}
