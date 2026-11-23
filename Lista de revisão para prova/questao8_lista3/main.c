#include <stdio.h>
#include <stdlib.h>
#define max 50

int main()
{
    double vetor_u[max], vetor_v[max], resultado_final[max], produto_interno;
    int i, j, k, m, n, indicador;

    printf("REGRA: Os dois vetores precisam ter o mesmo tamanho para calcular seu produto interno.\n");

    printf("Quantos numeros voce quer no primeiro vetor? -> ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        printf("Numero %d: ", i);
        scanf("%lf", &vetor_u[i]);
    }

    printf("\n\n");

    for (i = 0; i < n; i++)
    {
        printf("%lf ", vetor_u[i]);
    }

    printf("\n\n");

    printf("Quantos numeros voce quer no segundo vetor? -> ");
    scanf("%d", &m);

    indicador = 1;

    for (j = 0; j < m; j++)
    {
        if (m != n)
        {
            printf("Invalido! Os vetores precisam ter o mesmo tamanho!\n");
            indicador = 0;
            break;
        }

        printf("Numero %d: ", j);
        scanf("%lf", &vetor_v[j]);
    }

    printf("\n\n");

    if (indicador == 0)
        return 1;

    for (j = 0; j < m; j++)
    {
        if (indicador == 0)
            break;

        printf("%lf ", vetor_v[j]);
    }

    printf("\n\n");

    produto_interno = 0;

    for (k = 0; k < n && m == n; k++)
    {
        produto_interno = produto_interno + (vetor_u[k] * vetor_v[k]);
        resultado_final[k] = produto_interno;

        printf("%lf ", resultado_final[k]);
    }

    return 0;
}
