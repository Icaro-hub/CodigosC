#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char s_vetor[80], inverso[80];
    int i, j, contagem;

    printf("Digite a sua frase: ");
    fgets(s_vetor, 80, stdin);

    contagem = strlen(s_vetor);
    inverso[contagem] = '\0';
    j = contagem - 1;
    i = 0;

    while (i < contagem)
    {
        inverso[j] = s_vetor[i];
        i++;
        j--;
    }

    printf("Invertido: %s\n", inverso);

    return 0;
}
