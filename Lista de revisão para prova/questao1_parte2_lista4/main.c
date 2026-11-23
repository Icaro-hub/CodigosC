#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char s_vetor[80], acumuladora;
    int i, j, contagem;

    printf("Digite uma frase de ate 79 caracteres: ");
    fgets(s_vetor, 80, stdin);

    contagem = strlen(s_vetor);
    i = 0;
    j = contagem - 2;
    s_vetor[contagem] = '\0';
    acumuladora = s_vetor[contagem];

    while (i < j && (s_vetor[i] != '\0'))
    {
        acumuladora = s_vetor[i];
        s_vetor[i] = s_vetor[j];
        s_vetor[j] = acumuladora;

        i++;
        j--;
    }

    printf("Inverso: %s\n", s_vetor);

    return 0;
}
