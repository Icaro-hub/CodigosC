#include <stdio.h>
#include <stdlib.h>
#define max 50

int main()
{
    int i, j, k, n1, n2, contadora, indicadora;
    double vetor[max];

    printf("Digite quantidade de numeros do primeiro vetor: ");
    scanf("%d", &n1);

    double vetor1[n1];

    printf("Digite quantidade de numeros do segundo vetor: ");
    scanf("%d", &n2);

    double vetor2[n2];

    indicadora = 1;

    if (n1 > 50 || n2 > 50)
    {
        printf("Os vetores tem limite de ate cinquenta linhas de codigo!");
        indicadora = 0;
    }

    for (i = 0; i  < n1 && indicadora == 1; i++)
    {
        printf("Numero %d: ", i);
        scanf("%lf", &vetor1[i]);
    }

    for (k = 0; k < n2 && indicadora == 1; k++)
    {
        printf("Numero %d: ", k);
        scanf("%lf", &vetor2[k]);
    }

    contadora = 0;

    for (j = 0; j < n1 || j < n2; j++)
    {

        if (indicadora == 0)
            break;

        if (vetor2[j] == vetor1[j])
        {
            continue;
        } else
        {
            vetor[contadora] = vetor2[j];
            printf("%.1lf\t", vetor[contadora]);
            contadora++;
        }
    }

    return 0;
}
