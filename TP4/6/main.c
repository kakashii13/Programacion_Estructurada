
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numCar = 0, time = 0, count = 0, winner = 0, winnerTime = 0, last = 0, lastTime = 0;

    printf("Ingrese el numero del auto: ");
    scanf("%d", &numCar);

    while (numCar != 0)
    {

        printf("Ingrese el tiempo: ");
        scanf("%d", &time);

        count++;

        if (count == 1)
        {
            winner = numCar;
            last = numCar;
            winnerTime = time;
            lastTime = time;
        }
        else
        {
            if (time < winnerTime)
            {
                winner = numCar;
                winnerTime = time;
            }
            if (time > lastTime)
            {
                last = numCar;
                lastTime = time;
            }
        }

        printf("Ingrese el numero del auto: ");
        scanf("%d", &numCar);
    }

    printf("El ganador es el auto numero %d, con un tiempo de %d\n", winner, winnerTime);
    printf("El ultimo es el auto numero %d, con un tiempo de %d\n", last, lastTime);

    return 0;
}