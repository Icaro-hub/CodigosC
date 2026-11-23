#include <stdio.h>
#include <stdlib.h>
#define max 50

int main()
{
    int vetor[max], resultado[max];
    unsigned int C_resultado, n1;
    int i, j, contadora;

    printf("Quantidade de numeros para o vetor: ");
    scanf("%u", &n1);

    printf("Qual seu numero para analise? -> ");
    scanf("%u", &C_resultado);

    for (i = 0; i < n1; i++)
    {
        printf("Numero %d: ", i);
        scanf("%d", &vetor[i]);
    }

    for (i = 0; i < n1; i++)
    {
        printf("Vetor: %d ", vetor[i]);
    }

    printf("\n\n");

    contadora = 0;

    for (j = 0; j < n1; j++)
    {
        if (C_resultado % vetor[j] == 0)
        {
            resultado[contadora] = vetor[j];
            printf("Pontos multiplos do numero escolhido: %d ", resultado[contadora]);
            contadora++;
        }
    }

    return 0;
}
