// 4) Cree un array de char y escriba la palabra “Bienvenidos”. Responda la siguiente pregunta:
// ¿De cuantas posiciones deberá ser el vector?

#include <stdio.h>

int main(int argc, char *argv[])
{
    char saludo[11] = {"Bienvenidos"};

    for (int i = 0; i < 11; i++)
    {
        printf("%c\n", saludo[i]);
    }
    return 0;
}