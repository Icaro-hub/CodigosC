#include <stdio.h>
#include <stdlib.h>
#define max 50

int main()
{
    unsigned int n1, n2, i;
    double acumuladora;
    int indicadora;

    printf("Digite a quantidade de casas do primeiro vetor: ");
    scanf("%u", &n1);

    double vetor1[n1];

    printf("Digite a quantidade de casas do segundo vetor: ");
    scanf("%u", &n2);

    double vetor2[n2];

    acumuladora = 0;

    for (i = 0; i < n1; i++)
    {
        printf("Numero %d: ", i);
        scanf("%lf", vetor1[i]);

        acumuladora = vetor1[i];

        if (vetor1[i] > acumuladora)
        {
            printf("Esta em desordem!\n");
            indicadora = 0;
            break;
        }
    }

    for (i = 0; i < n2; i++)
    {
        printf("Numero %d, segundo vetor: ");
        scanf("%lf", vetor2[i]);

        acumuladora = vetor2[i];

        if (vetor2[i] > acumuladora)
        {
            printf("Esta em desordem!\n");
            indicadora = 0;
            break;
        }
    }

    for (i = 0; i < n1 || i < n2; i++)
    {
        if (indicadora == 0;)
            break;

        printf("Vetor 3: %lf %lf", vetor1[i], vetor2[i]);
    }

    if (indicadora == 0)
    {
        printf("Operacao inválida, pois um ou os dois vetores estao em desordem!\n");
    }

    return 0;
}
