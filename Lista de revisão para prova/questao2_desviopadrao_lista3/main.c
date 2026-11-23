#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define max 50

int main()
{
    unsigned int n, i, indicadora;
    double pot, media, somatorio, diferenca, resultado_parcial, s;

    printf("Quantas posiçoes tera o vetor? (Quantidade limite: Ate 50) -> ");
    scanf("%u", &n);

    double vetor[n];

    indicadora = 1;//assumindo estar dentro dos conformes

    if (n > 50)
    {
        printf("Operacao invalida, pois o vetor deve conter ate 50 casas apos a virgula!\n");
        indicadora = 0;
    }

    for (i = 0; i < n; i++)
    {
        if (indicadora == 0)
            break;

        printf("Numero %d: ", i);
        scanf("%lf", &vetor[i]);
    }

    media = 0;
    for (i = 0; i < n; i++)
    {
        if (indicadora == 0)
            break;

        media = (media + vetor[i]) / n;
    }

    printf("%.1lf\n", media);

    diferenca = 0;
    somatorio = 0;

    pot = 0;

    for (i = 0; i < n; i++)
    {
        if (indicadora == 0)
            break;

        diferenca = (vetor[i] - media);

        pot = pow(diferenca, 2);

        somatorio = somatorio + pot;
    }

    printf("%.1lf\n", somatorio);

    resultado_parcial = somatorio / (n-1);

    s = sqrt(resultado_parcial);

    printf("%.1lf\n", s);

    return 0;
}
