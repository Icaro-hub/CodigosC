#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned int qtd_numero1, qtd_numero2, qtd_numero3;
    int i;

    printf("Digite a quantidade de numeros do primeiro vetor: ");
    scanf("%u", &qtd_numero1);

    printf("Digite a quantidade de numeros do segundo vetor: ");
    scanf("%u", &qtd_numero2);

    double vetor1[qtd_numero1], vetor2[qtd_numero2];

    for (i = 0; i < qtd_numero1 && qtd_numero1 <= 50; i++)
    {
        printf("Digite numero da casa %d: ", i);
        scanf("%lf", &vetor1[i]);
    }

    printf("\n");

    for (i = 0; i < qtd_numero2 && qtd_numero2 <= 50; i++)
    {
        printf("Digite numero da casa %d do segundo vetor: ");
        scanf("%lf", &vetor2[i]);
    }

    for (i = 0; i < qtd_numero1 && qtd_numero1 <= 50; i++)
    {
        printf("%.1lf", vetor1[i]);
    }

    printf("\n");

    for (i = 0; i < qtd_numero2 && qtd_numero2 <= 50; i++)
    {
        printf("%.1lf", vetor2[i]);
    }

    printf("\n\n");

    for (i = 0; i < qtd_numero1 && i < qtd_numero2; i++)
    {
        printf(" %.1lf %.1lf ", vetor1[i], vetor2[i]);
    }

    return 0;
}
