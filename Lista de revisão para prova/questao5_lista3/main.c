#include <stdio.h>
#include <stdlib.h>
#define max 30

int main()
{
    double vetor_final[max];
    unsigned int i, j, n1, n2, contadora;

    printf("Tamanho do primeiro vetor: ");
    scanf("%u", &n1);

    double vetor1[n1];

    printf("Tamanho do sengundo vetor: ");
    scanf("%u", &n2);

    double vetor2[n2];

    for (i = 0; i < n1; i++)
    {
        printf("Numero %u: ", i);
        scanf("%lf", &vetor1[i]);
    }

    for (i = 0; i < n2; i++)
    {
        printf("Numero %u: ", i);
        scanf("%lf", &vetor2[i]);
    }

    contadora = 0;

    for (i = 0; i < n2; i++)
    {
        for (j = 0; j < n1; j++)
        {
            if (vetor2[i] == vetor1[j])
            {
                vetor_final[contadora] = vetor2[i];
                printf("%lf ", vetor_final[contadora]);
                contadora++;
            }
        }
    }

    return 0;
}

