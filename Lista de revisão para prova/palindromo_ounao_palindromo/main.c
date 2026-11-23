#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char s_vetor[50], nova_string[50], acumuladora;
    int i, j, qtd_caracteres, indicador;

    printf("Palindromo ou Nao Palindromo, eis a questao.\n\n");

    printf("Digite sua palavra: ");
    fgets(s_vetor, 50, stdin);

    qtd_caracteres = strlen(s_vetor);
    i = 0;
    j = qtd_caracteres - 2;
    indicador = 0;

    while (i < qtd_caracteres)
    {
        nova_string[j] = s_vetor[i];

        i++;
        j--;
    }

    i = 0;

    while (i < qtd_caracteres - 2)
    {

        if (nova_string[i] == s_vetor[i])
        {
            indicador = 1;
        }
        else
        {
            indicador = 0;
        }

        i++;
    }

    printf("%s\n", s_vetor);
    printf("%s\n", nova_string);

    if (indicador == 1)
    {
        printf("Parabens, e um palindromo!\n");
    }
    else
    {
        printf("Infelizmente, nao e palindromo!\n");
    }

    return 0;
}
