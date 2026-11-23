#include <stdio.h>
#include <stdlib.h>

int main()
{
    long int vetor[10], resultado_c;
    int i;

    printf("Ola! Este programa e da segunda questao de vetores da disciplina!\n");

    printf("Qual resultado voce quer que compare com os elemento dos vetores: ");
    scanf("%ld", &resultado_c);

    for (i = 0; i < 9; i++)
    {
        printf("Digite o elemento, pode ser numeros positivos e negativos: ");
        scanf("%ld", &vetor[i]);

        if (vetor[i] % resultado_c == 0)
        {
           printf("%ld e multiplo de %ld\n", vetor[i], resultado_c);
        } else
        {
            printf("C igual a -1, ou seja, nao possui um multiplo\n");
        }
    }

    return 0;
}
