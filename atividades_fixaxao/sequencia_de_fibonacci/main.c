#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned int n, termo_atual, termo_anterior, i;

    printf("Sequencia de Fibonacci mais linguagem C");

    printf("Até que termo: ");
    scanf("%u", &n);

    termo_anterior = 0;
    termo_atual = 1;

    for (i=1; i<=n; i++)
    {
        printf("Termo atual: ");
        scanf("%u", &termo_atual);

        termo_atual = termo_atual + termo_anterior;
        termo_anterior = termo_atual;
    }

    printf("Resultado da sequencia de acordo com n repetições: %u", termo_atual);

    return 0;
}
