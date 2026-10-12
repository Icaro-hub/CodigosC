#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned int m, n, modular;

    printf("Ola! Este programa ira calcular o maximo divisor comum de termos m e n, quando digitados pelo usuario!\n");

    printf("Termo m: ");
    scanf("%u", &m);

    printf("Termo n: ");
    scanf("%u", &n);

    while (n!=0)
    {
        modular = m % n;

        m = n;

        n = modular;
    }

    printf("Resultado final: %u", m);

    return 0;
}
