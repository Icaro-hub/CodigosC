#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, j, vetor1[5], vetor2[5], produto_final;

    produto_final = 0;

    for (i=0; i<5; i++)
    {
        printf("Entre com valor para posicao %d: ", i);
        scanf("%d", &vetor1[i]);
    }

    for (j=0; j<5; j++)
    {
        printf("Entre com valor para posicao %d: ", j);
        scanf("%d", &vetor2[j]);
    }

    for (i=0; i<5; i++)
    {
        produto_final = produto_final + (vetor1[i] * vetor2[i]);
        printf("O resultado do produto entre dois vetores: %d", produto_final);
    }

    return 0;
}
