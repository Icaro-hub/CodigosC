#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#define max 100

int main()
{
    char mensagem_em_texto[100];
    int i, j, k, contagem, tam_matriz;

    printf("Digite um texto sem espacos: ");
    fgets(mensagem_em_texto, 100, stdin);

    contagem = strlen(mensagem_em_texto);
    contagem = contagem - 1;
    tam_matriz = sqrt(contagem);

    char matriz[tam_matriz][tam_matriz];
    char nova_string[max];
    int new_string_position;

    new_string_position = 0;

    for (i = 0; i < tam_matriz; i++)
    {
        for (j = 0; j < tam_matriz; j++)
        {
            matriz[i][j] = mensagem_em_texto[i * tam_matriz + j];

            printf("%c\t", matriz[i][j]);
        }

        printf("\n");
    }

    printf("\n\n\n");

    for (j = 0; j < tam_matriz; j++)
    {
        for (k = 0; k < tam_matriz; k++)
        {
            if (matriz[k][j] != '*')
            {
                nova_string[new_string_position] = matriz[k][j];
                new_string_position++;
            }
        }
    }

    nova_string[new_string_position] = '\0';
    printf("%s", nova_string);

    return 0;
}
