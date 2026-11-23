#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i, j, divisor, qtd;
    double menor_valor;

    printf("Digite a quantidade de numeros do vetor! Maximo de cinquenta numeros: ");
    scanf("%d", &n);

    int vetor[n];
    int matriz[n][n];

    for (i = 0; i < n && n <= 50; i++)
    {
        printf("Digite o numero da casa %d: ", i+1);
        scanf("%d", &vetor[i]);
    }

    menor_valor = 0;

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (vetor[i] < vetor[j])
            {
                menor_valor = vetor[i];
            }
            else
            {
                menor_valor = vetor[j];
            }

            qtd = 0;

            for (divisor = 2; divisor <= menor_valor; divisor++)
            {
                if ((vetor[i] % divisor == 0 && vetor[j] % divisor == 0) && divisor <= menor_valor)
                {
                    qtd++;
                }
                else
                {
                    matriz[i][j] = 1;
                }
            }

            if (qtd > 0)
            {
                matriz[i][j] = 0;
            }
        }
    }

    for (i = 0; i < n && n <= 50; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%d\t", matriz[i][j]);
        }

        printf("\n");
    }

    return 0;
}
