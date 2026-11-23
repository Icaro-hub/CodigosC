#include <stdio.h>
#include <stdlib.h>

int main()
{
    double vetor[10], atual, maior;
    int i;

    printf("Ola! Este programa ira ter um vetor e, consequentemente, ver qual o maior dos dez numeros e o maior deles!\n");

    atual = 0;
    maior = 0;

    for (i = 0; i < 10; i++)
    {
        printf("Numero %d: ", i);
        scanf("%lf", &vetor[i]);

        atual = vetor[i];

        if (atual > maior)
        {
            maior = atual;
        }
    }

    printf("O maior numero dentro do vetor seria igual a %.2lf", maior);

    return 0;
}
