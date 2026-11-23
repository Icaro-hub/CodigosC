#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char s_vetor[80], new_string[80];
    int i, j, contadora;

    printf("Digite seu texto. Nao ultrapasse de 79 caracteres: ");
    fgets(s_vetor, 80, stdin);

    contadora = strlen(s_vetor);
    j = contadora - 2;
    j = 0;

    for (i = 0; i < j; i++)
    {
        if ((s_vetor[i] == ' ' && s_vetor[i + 1] == ' ') && (s_vetor[i] != '\0' || s_vetor[i] != '\n')
        {
            i++;
        } else
        {
            new_string[j] = s_vetor[i];
            j++;
        }
    }

    printf("Nova frase: %s", new_string);

    return 0;
}
