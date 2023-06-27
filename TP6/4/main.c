#include <stdio.h>

#define NUM_MOZOS 6
#define NUM_MESAS 12

// funcion para leer los datos de la factura
void ingresarDatosFactura(int *num_mozo, int *num_mesa, int *cantidad_personas_mesa, int *cuenta_por_mesa)
{
    // facturas por mozo
    printf("Ingrese numero de mozo (1-6): ");
    scanf("%d", num_mozo);
    // mesa por mozo
    printf("Ingrese numero de mesa (1-12): ");
    scanf("%d", num_mesa);

    // cantidad de personas mesa
    printf("Ingrese cantidad de personas que comieron: ");
    scanf("%d", cantidad_personas_mesa);

    // monto facturado por mesa
    printf("Ingrese el monto total de la cuenta: ");
    scanf("%d", cuenta_por_mesa);
};

// funcion para actualizar datos del mozo
void actualizarDatosMozo(int mozos[], int cantidad_personas_por_mozo[], int cantidad_personas_mesa, int num_mozo, int monto_facturado_por_mozo[], int cuenta_por_mesa)
{
    // veces facturado por mozo
    mozos[num_mozo - 1]++;
    // guarda las personas atendidas por mozo
    cantidad_personas_por_mozo[num_mozo - 1] += cantidad_personas_mesa;
    // guarda lo facturado por mozo
    monto_facturado_por_mozo[num_mozo - 1] += cuenta_por_mesa;
}

// funcion para actualizar datos de la mesa
void actualizarDatosMesa(int monto_total_por_mesa[], int cuenta_por_mesa, int num_mesa, int mesas[])
{
    // guarda los montos facturado por mesa
    monto_total_por_mesa[num_mesa - 1] += cuenta_por_mesa;

    // guarda la cantidad de veces facturado a una mesa
    mesas[num_mesa - 1]++;
}

void calcularEstadisticas();

int main()
{
    int num_factura;
    int num_mozo;
    int num_mesa;
    int cuenta_por_mesa;
    int mozos[NUM_MOZOS];
    int mesas[NUM_MESAS];
    int cantidad_personas_por_mozo[NUM_MOZOS] = {0};
    float porcenjate_factura_por_mozo[NUM_MOZOS] = {0};
    int monto_facturado_por_mozo[NUM_MOZOS] = {0};
    int monto_total_por_mesa[NUM_MESAS] = {0};
    int cantidad_personas_mesa = 0;
    int monto_total = 0;
    int cantidad_facturas_realizadas = 0;
    int max_personas_atendidas_mozo = 0;
    int facturas_mayores_45 = 0;
    int mesa_mas_facturada = 0;

    printf("Ingrese numero de factura (0 para salir): ");
    scanf("%d", &num_factura);

    while (num_factura != 0)
    {
        cantidad_facturas_realizadas++;

        // leo los datos de la factura
        ingresarDatosFactura(&num_mozo, &num_mesa, &cantidad_personas_mesa, &cuenta_por_mesa);

        // actualizo los valores del mozo
        actualizarDatosMozo(mozos, cantidad_personas_por_mozo, cantidad_personas_mesa, num_mozo, monto_facturado_por_mozo, cuenta_por_mesa);

        // actualiza los valores de la mesa
        actualizarDatosMesa(monto_total_por_mesa, cuenta_por_mesa, num_mesa, mesas);

        // guardo los monton en total
        monto_total += cuenta_por_mesa;

        // guarda si la factura supera los $45
        if (cuenta_por_mesa > 45)
        {
            facturas_mayores_45++;
        }

        // vuelvo a solicitar los datos de la factura
        printf("Ingrese numero de factura (0 para salir): ");
        scanf("%d", &num_factura);
    }

    for (int i = 0; i < NUM_MOZOS; i++)
    {
        // calcula porcentaje factura por mozo
        porcenjate_factura_por_mozo[i] = monto_facturado_por_mozo[i] * 100 / monto_total;
        printf("\nEl porcentaje del mozo %d es %.2f%%. \n", i + 1, porcenjate_factura_por_mozo[i]);

        // personas por mozo
        printf("El mozo nro [%d] atendio %d personas.\n", i + 1, cantidad_personas_por_mozo[i]);

        // calcula que mozo atendio mas personas
        if (cantidad_personas_por_mozo[i] > max_personas_atendidas_mozo)
        {
            max_personas_atendidas_mozo = cantidad_personas_por_mozo[i];
            num_mozo = i + 1;
        }

        // calcula el 5% de su venta
        float monto_con_plus = monto_facturado_por_mozo[i] + monto_facturado_por_mozo[i] * 0.05;
        printf("Si a cada mozo se le diera el 5%% de su venta recibiria un total de $%.2f.\n", monto_con_plus);
    }

    printf("\n--------------------------------\n");

    for (int i = 0; i < NUM_MESAS; i++)
    {
        // mesa mas veces facturada
        if (mesas[i] > mesa_mas_facturada)
        {
            mesa_mas_facturada = mesas[i];
            num_mesa = i + 1;
        }

        // monto total facturado por mesa
        printf("La mesa nro [%d] facturo $%d.\n", i + 1, monto_total_por_mesa[i]);
    }

    // imprime cantidad de facturas
    printf("\nSe realizaron un total de %d facturas.\n", cantidad_facturas_realizadas);

    // imprime el mozo que mas personas atendio
    printf("\nEl mozo nro %d fue el que mas personas atendio con un total de %d personas.\n", num_mozo, max_personas_atendidas_mozo);

    // imprime cuantas facturas superaron los $45
    printf("\n%d facturas superaron los $45.\n", facturas_mayores_45);

    // imprime la mesa que mas veces se facturo
    printf("\nLa mesa %d fue la que facturo mas veces.\n", num_mesa);

    // caja diara
    printf("\nSe facturo un total de $%d.\n", monto_total);

    return 0;
}