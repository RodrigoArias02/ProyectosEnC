#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//Genera numeros aleatorios y clasifica los pares e impares
int main()
{
    int aleatorio[10];
    int i;
    int pares;
    int impares;
    int reiniciar;
    reiniciar = 1;

    while (reiniciar > 0)
    {
        srand(time(NULL));
        pares = 0;
        impares = 0;

        for (i = 0; i < 10; i++)
        {
            aleatorio[i] = rand() % 10;
        }

        for (i = 0; i < 10; i++)
        {
            printf("%d\n", aleatorio[i]);
            if (aleatorio[i] % 2 == 0)
            {
                pares = pares + 1;
            }
            if (aleatorio[i] % 2 > 0)
            {
                impares = impares + 1;
            }
        }

        printf("Los resultados pares son: %d\n", pares);
        printf("Los resultados impares son: %d\n", impares);
        printf("Ponga el numero 0 o cualquier otro numero para seguir: ");
        scanf("%d", &reiniciar);
    }

    return 0;
}
