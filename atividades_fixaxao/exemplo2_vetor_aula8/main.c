#include <stdio.h>
#include <stdlib.h>

int main()
{
    double vetor1[5], vetor2[5];
    int i, j;

    for (i=0; i<5; i++)
    {
        printf("Valor da posicao %d do primeiro vetor: ", i);
        scanf("%lf", &vetor1[i]);
    }

    for (j = 0; j < 5; j++)
    {
        printf("Valor da posicao %d do segundo vetor: ", j);
        scanf("%lf", &vetor2[j]);
    }

    if (vetor2[0] == vetor1[0] && vetor2[1] != vetor1[1] && vetor2[2] != vetor1[2] && vetor2[3] != vetor1[3] && vetor2[4] != vetor1[4])
    {
        printf("Primeiro valor igual");
    } else if (vetor2[0] != vetor1[0] && vetor2[1] == vetor1[1] && vetor2[2] != vetor1[2] && vetor2[3] != vetor1[3] && vetor2[4] != vetor1[4])
    {
        printf("Segundo valor igual");
    } else if (vetor2[0] != vetor1[0] && vetor2[1] != vetor1[1] && vetor2[2] == vetor1[2] && vetor2[3] != vetor1[3] && vetor2[4] != vetor1[4])
    {
        printf("Terceiro valor igual");
    } else if (vetor2[0] != vetor1[0] && vetor2[1] != vetor1[1] && vetor2[2] != vetor1[2] && vetor2[3] == vetor1[3] && vetor2[4] != vetor1[4])
    {
        printf("Quarto valor igual");
    } else if (vetor2[0] != vetor1[0] && vetor2[1] != vetor1[1] && vetor2[2] != vetor1[2] && vetor2[3] != vetor1[3] && vetor2[4] == vetor1[4])
    {
        printf("Ultimo valor igual");
    } else
    {
        printf("Mais de um valor igual ou nenhum deles");
    }

    return 0;
}
