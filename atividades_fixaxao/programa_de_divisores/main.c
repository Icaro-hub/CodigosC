#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned int i, n;

    printf("Ola! Este programa realiza calculos de divisores entre dois e a variavel n\n");

    printf("Escolha um numero: ");
    scanf("%u", &n);

    for (i = 2; i <= n; i++)
    {
        if (n % i != 0)
        {
            continue;
        }

        printf("Valores que sao multiplos: %u\n", i);
    }

    return 0;
}
