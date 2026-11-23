#include <stdio.h>
#include <stdlib.h>

int main()
{
    double matriz1[10][10], matriz2[10][10], contadora;
    unsigned int i, j;

    printf("Ola! Este programa ira ler duas matrizes 10x10 e exibir as posições não nulas delas!\n");

    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 10; j++)
        {
            printf("Digite um numero: ");
            scanf("%lf", &matriz1[i][j]);
        }
    }

    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 10; j++)
        {
            printf("%lf ", matriz1[i][j]);
        }

        printf("\n");

        if (matriz1[i][j] != 0)
        {
            contadora++;
        }

        printf("Numero de posicoes: %u", contadora);
    }

    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 10; j++)
        {
            printf("Digite numeros da outra matriz: ");
            scanf("%lf", &matriz2[i][j]);
        }
    }

    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 10; j++)
        {
            printf("%lf ", matriz2[i][j]);
        }

        printf("\n");

        if (matriz1[i][j] != 0)
        {
            contadora++;
        }
    }

    printf("Numero de posiçoes: %u", contadora);

    return 0;
}
