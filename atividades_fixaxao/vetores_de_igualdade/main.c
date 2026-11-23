#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vetor1[5], vetor2[5], igualdade, i;

    printf("Objetivo do programa: checar igualdade de vetores! Utilizei variavel acumuladora para o cheque\n");

    igualdade = 0; //Assumindo, primeiramente, que as matrizes não possuem igualdade

    for (i = 0; i < 5; i++)
    {
        printf("Digite um numero INTEIRO no primeiro vetor: ");
        scanf("%d", &vetor1[i]);
    }


    printf("%d %d %d %d %d\n", vetor1[0], vetor1[1], vetor1[2], vetor1[3], vetor1[4]);

    for (i = 0; i < 5; i++)
    {
        printf("Digite um numero INTEIRO no segundo vetor: ");
        scanf("%d", &vetor2[i]);
    }

    printf("%d %d %d %d %d\n", vetor2[0], vetor2[1], vetor2[2], vetor2[3], vetor2[4]);

        if (vetor1[0] == vetor2[0] || vetor1[0] == vetor2[1] || vetor1[0] == vetor2[2] || vetor1[0] == vetor2[3] || vetor1[0] == vetor2[4])
        {
            igualdade = 1;
        } else if (vetor1[1] == vetor2[0] || vetor1[1] == vetor2[1] || vetor1[1] == vetor2[2] || vetor1[1] == vetor2[3] || vetor1[1] == vetor2[4])
        {
            igualdade = 1;
        } else if (vetor1[2] == vetor2[0] || vetor1[2] == vetor2[1] || vetor1[2] == vetor2[2] || vetor1[2] == vetor2[3] || vetor1[2] == vetor2[4])
        {
            igualdade = 1;
        } else if (vetor1[3] == vetor2[0] || vetor1[3] == vetor2[1] || vetor1[3] == vetor2[2] || vetor1[3] == vetor2[3] || vetor1[3] == vetor2[4])
        {
            igualdade = 1;
        } else if (vetor1[4] == vetor2[0] || vetor1[4] == vetor2[1] || vetor1[4] == vetor2[2] || vetor1[4] == vetor2[3] || vetor1[4] == vetor2[4])
        {
            igualdade = 1;
        } else if (vetor1[i] == vetor2[i])
        {
            igualdade = 1;
        } else
        {
            igualdade = 0;//Assumindo que não possui igualdade entre dois vetores
        }

    if (igualdade == 1)
    {
        printf("O vetor 1 e vetor dois possuem elementos de igualdade");
    } else
    {
        printf("Os valores sao totalmente diferentes entre eles");
    }

    return 0;
}
