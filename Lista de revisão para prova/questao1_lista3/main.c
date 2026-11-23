#include <stdio.h>
#include <stdlib.h>
#define max 50

int main()
{
    double vetor[max], media, anterior;
    unsigned int i, n;

    printf("Quantidade de numeros: ");
    scanf("%u", &n);

    vetor[n];
    media = 0;
    anterior = 0;

    for (i = 0; i < n; i++)
    {
        printf("Um numero: ");
        scanf("%lf", &vetor[i]);

        anterior = vetor[i];

        media = anterior + vetor[i] / n;
    }

    printf("Media: %lf", media);

    return 0;
}
