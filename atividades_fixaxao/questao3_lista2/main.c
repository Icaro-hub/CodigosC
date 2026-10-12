#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned int i, n, soma;

    printf("Ola! Simulacao de uma PA sem utilização da formula!\n");

    printf("Quantidade que ira repetir: ");
    scanf("%u", &n);

    soma = 0; //variável acumuladora, ou seja, acumula os termos durante o loop. Valor inicial de zero.

    for (i=1; i<=n; i++)
    {
        soma = soma + i;
        printf("%u ", soma);
    }

    return 0;
}
