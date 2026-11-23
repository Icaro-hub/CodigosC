#include <stdio.h>
#include <stdlib.h>
#define max 50

int main()
{
    double matriz1[max][max], matriz2[max][max], subtracao;
    int i, j, linha1, linha2, coluna1, coluna2;

    printf("Subtracao de matrizes\n");

    printf("Quantidade de linhas da primeira matriz: ");
    scanf("%d", &linha1);
    printf("Quantidade de colunas da primeira matriz: ");
    scanf("%d", &coluna1);

    matriz1[linha1][coluna1];

    for (i = 0; i < linha1; i++)
    {
        for (j = 0; j < coluna1; j++)
        {
            printf("Um numero: ");
            scanf("%lf", &matriz1[i][j]);
        }
    }

    for (i = 0; i < linha1; i++)
    {
        for (j = 0; j < coluna1; j++)
        {
            printf("%.1lf", matriz1[i][j]);
        }

        printf("\n");
    }

    printf("Digite a mesma quantidade de linhas para a segunda matriz: ");
    scanf("%d", &linha2);

    printf("Digite a mesma quantidade de colunas para a segunda matriz: ");
    scanf("%d", &coluna2);

    for (i = 0; i < linha2; i++)
    {
        for (j = 0; j < coluna2; j++)
        {
            printf("Segundo elemento: ");
            scanf("%lf", &matriz2[i][j]);
        }
    }

    for (i = 0; i < linha2; i++)
    {
        for (j = 0; j < coluna2; j++)
        {
            printf("%.1lf", matriz2[i][j]);
        }

        printf("\n");
    }



    for (i = 0; i < linha1; i++)
    {
        if (linha1 != linha2 || coluna1 != coluna2)
        {
            printf("Matriz nao quadratica! Operacao invalida!");
            break;
            return 1;
        }

        for (j = 0; j < coluna2; j++)
        {
            subtracao = matriz1[i][j] - matriz2[i][j];
        }

        printf("%lf\t", matriz1[i][j] - matriz2[i][j]);
    }

    return 0;
}
