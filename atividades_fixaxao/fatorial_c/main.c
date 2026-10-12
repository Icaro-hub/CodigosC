#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned int i, n, fatorial;

    printf("Ola, usuario! Este programa ira calcular fatorial por meio de variavel acumuladora!\n");

    printf("Entre com um numero: ");
    scanf("%u", &n);

    fatorial = 1;

    for (i = 1; i <= n; i++)
    {
        fatorial = fatorial * i;
    }

    printf("O resultado da fatorial de valor n e de: %u", fatorial);
    return 0;
}
