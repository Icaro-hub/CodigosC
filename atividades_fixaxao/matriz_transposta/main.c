#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, j, n_linhas, n_colunas;

    printf("Digite a quantidade de linhas da matriz: ");
    scanf("%u", &n_linhas);

    printf("Digite a quantidade de colunas da matriz: ");
    scanf("%u", &n_colunas);

    double matriz[n_linhas][n_colunas];
    double transposta[n_colunas][n_linhas];

    for (i = 0; i < n_linhas; i++)
    {
        for (j = 0; j < n_colunas; j++)
        {
            printf("Digite numero da linha %u e coluna %u: ", i + 1, j + 1);
            scanf("%lf", &matriz[i][j]);
        }
    }

    for (i = 0; i < n_linhas; i++)
    {
        for (j = 0; j < n_colunas; j++)
        {
            printf("%.1lf\t", matriz[i][j]);
        }

        printf("\n");
    }

    printf("\n\n");

    for (j = 0; j < n_colunas; j++)
    {
        for (i = 0; i < n_linhas; i++)
        {
            transposta[j][i] = matriz[i][j];

            printf("%.1lf\t", transposta[j][i]);
        }

        printf("\n");
    }

    return 0;
}
