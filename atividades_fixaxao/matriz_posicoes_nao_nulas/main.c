#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned int i, j, k, l, n_linhas, n_colunas;

    printf("Digite quantidade de linhas da matriz: ");
    scanf("%u", &n_linhas);

    printf("Digite a quantidade de colunas da matriz: ");
    scanf("%u", &n_colunas);

    double matriz1[n_linhas][n_colunas];

    for (i = 0; i < n_linhas; i++)
    {
        for (j = 0; j < n_colunas; j++)
        {
            printf("Linha %u coluna %u: ", i+1, j+1);
            scanf("%lf", &matriz1[i][j]);
        }
    }

    for (k = 0; k < n_linhas; k++)
    {
        for (l = 0; l < n_colunas; l++)
        {
            if (matriz1[k][l] == 0)
            {
                continue;
            } else
            {
                printf("%.1lf\t", matriz1[k][l]);
            }
        }

        printf("\n");
    }

    return 0;
}
