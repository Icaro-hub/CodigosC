#include <stdio.h>
#include <stdlib.h>

/*Nome do aluno: Ícaro Gomes Benedetti
Registro Acadêmico: 2760482621031
Objetivo da atividade proposta: Simular uma luta do jogo icônico Street Fighter, respeitando também os cálculos de um
golpe perfeito ou de um número triangular.*/

int main()
{
    int Ken, Ryu, analise_p, analise_t, somatorio1, somatorio2, indicador1, indicador2, triangular, perfeito, i, j, k;
    int dano, dano_melhorado;

    printf("RYU: The strength to win, not simply defeat foes.\n\n");
    printf("KEN: and there are a lot of different variations, so I think it'll bet a while before you can beat then all!\n");

    Ken = 100;
    Ryu = 100;
    i = 1;

    while (Ken > 0 && Ryu > 0)
    {
        analise_p = 0;
        analise_t = 0;
        somatorio1 = 0;
        somatorio2 = 0;
        indicador1 = 0;
        indicador2 = 0;
        perfeito = 0;
        triangular = 0;
        dano_melhorado = 0;
        j = 1;
        k = 1;

        scanf("%d", &dano);

        if (dano > 0)//Analisa quem deu o golpe. Ryu ou Ken
        {
            indicador1 = 1;//Ryu deu seu golpe
        } else
        {
            indicador2 = 1;//Ken deu seu golpe
        }

        while (j < abs(dano))//o comando abs ignora o sinal negativo. O golpe de Ken precisa também ser analisado para fatores cimo numero perfeito ou triangular
        {

            if (abs(dano) % j == 0)
            {
                somatorio1 = somatorio1 + j;
            }

            j++;
        }

         if (somatorio1 == dano)
        {
            analise_p = 1;//indicadora para verificar se número de entrada dano é perfeito ou não
        }

        while (k < abs(dano))
        {
            somatorio2 = somatorio2 + k;

            k++;
        }

        if (somatorio2 == abs(dano))
        {
            analise_t = 1;
        }

        if (analise_p == 1 || (analise_p == 1 && analise_t == 1))//faz calculos por meio do resultado dos loops anteriores.
        {
            dano_melhorado = dano * 3;
            perfeito = 1;
        } else if (analise_t == 1)
        {
            dano_melhorado = dano * 2;
            triangular = 1;
        } else
        {
            dano_melhorado = 0;
        }

        if (indicador1 == 1 && perfeito == 1)
        {
            Ken = Ken - dano_melhorado;
        } else if (indicador1 == 1 && triangular == 1)
        {
            Ken = Ken - dano_melhorado;
        } else if (indicador2 == 1 && perfeito == 1)
        {
            Ryu = Ryu + dano_melhorado;
        } else if (indicador2 == 1 && triangular == 1)
        {
            Ryu = Ryu + dano_melhorado;
        } else if (indicador1 == 1 && (perfeito == 0 || triangular == 0))
        {
            Ken = Ken - dano;
        } else if (indicador2 == 1 && (perfeito == 0 || triangular == 0))
        {
            Ryu = Ryu + dano;
        } else
        {
            printf("BLOCKED!");
        }

        printf("\n");

        i++;
    }

    if (Ryu > Ken || Ken <= 0)
    {
        printf("Ryu venceu!");
    } else if (Ryu < Ken || Ryu <= 0)
    {
        printf("Ken venceu! obs: isso foi afirmacao rsrs");
    } else
    {
        printf("Que sem graca....deu empate!");
    }

    return 0;
}
