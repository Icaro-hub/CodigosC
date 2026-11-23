#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Quantidade de palavras dentro de uma frase.\n\n");

    char string[50];
    int qtd_palavras, i, spaces;

    printf("Texto: ");
    fgets(string, 50, stdin);

    i = 0;
    qtd_palavras = 0;
    spaces = 0;

    while (string[i] != '\n' && string[i] != '\0')
    {
        while(string[i]==' ')
            i++;

        if (string[i] != '\n' && string[i] != '\0')
        {
            qtd_palavras++;

            while (string[i] != ' ' && string[i] != '\n' && string[i] != '\0')
            {
                i++; //percorre a palavra
            }

         }
    }

    printf("Quantidade de palavras de uma frase ou texto: %d", qtd_palavras);

    return 0;
}
