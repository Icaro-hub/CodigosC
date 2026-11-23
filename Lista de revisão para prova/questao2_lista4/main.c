#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char s_vetor[80], not_space[80];
    int i, j, contagem;

    printf("Digite sua frase: ");
    fgets(s_vetor, 80, stdin);

    contagem = strlen(s_vetor);

    j = 0;

    for (i = 0; i < contagem; i++)
    {
        if (s_vetor[i] != ' ' && s_vetor[i] != '\0')
        {
            not_space[j] = s_vetor[i];
            j++;
        }
    }

    not_space[j] = '\0';
    printf("Frase sem espacos: %s", not_space);

    return 0;
}
