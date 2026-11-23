#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define max 50

int main()
{
    char texto[100], palavra[50], escolha;
    int i, qtd_t, qtd_p, indicador1, indicador2, indicador3, indicador_es, positions[max], k;

    printf("Palavras dentro de textos!\n\n");

    printf("Digite uma frase ou um texto: ");
    fgets(texto, 100, stdin);

    qtd_t = strlen(texto);

    qtd_t = qtd_t - 1;

    printf("Palavra que deseja ser encontrada: ");
    fgets(palavra, 50, stdin);

    qtd_p = strlen(palavra);

    qtd_p = qtd_p - 1;

    printf("Um texto com %d caracteres para uma palavra com %d caracteres...interessante.\n\n", qtd_t, qtd_p);

    i = 0;

    while (i < qtd_t)
    {
        k = 0;

        while (k <= qtd_p && texto[i+k] == palavra[k])
        {
            k++;
        }

        i++;

        if (k == qtd_p)
        {
            printf("%d\t", i);
        }
    }

    return 0;
}
