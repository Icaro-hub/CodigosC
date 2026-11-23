#include <stdio.h>
#include <stdlib.h>
#define max 100

int main()
{
    double matriz1[max][max], matriz2[max][max], matriz3[max][max], produto_interno;
    unsigned int linha1, coluna1, linha2, coluna2, linha3, coluna3, escolha, indicador, saida;
    int i, j;
    char sair_do_laco;

    printf("Ola! Este programa ira utilizar um menu para trabalhar com matrizes\n");

    do
    {
        printf("Por favor escolha numeros de um a cinco. Seis para sair: ");
        scanf("%u", &escolha);


        switch(escolha)
        {
        case 1:
            printf("Voce escolheu apenas a leitura de uma matriz bidimensional\n");

            printf("Quantidade de linhas: ");
            scanf("%u", &linha1);
            printf("Quantidade de colunas: ");
            scanf("%u", &coluna1);

            matriz1[linha1][coluna1];

            for (i = 0; i < linha1; i++)
            {
                for (j = 0; j < coluna1; j++)
                {
                    printf("Digite o numero: ");
                    scanf("%lf", &matriz1[i][j]);
                }

                printf("\n");
            }

            for (i = 0; i < linha1; i++)
            {
                for (j = 0; j < coluna2; j++)
                {
                    printf("%.1lf ", matriz1[i][j]);
                }

                printf("\n");
            }
            break;
        case 2:
            printf("Voce escolheu a leitura e exebicao da outra matriz bidimensional\n");

            printf("Quantidade de linhas: ");
            scanf("%u", &linha2);
            printf("Quantidade de colunas: ");
            scanf("%u", &coluna2);

            matriz2[linha2][coluna2];

            for (i = 0; i < linha2; i++)
            {
                for (j = 0; j < coluna2; j++)
                {
                    printf("Digite um numero: ");
                    scanf("%lf", &matriz2[i][j]);
                }
            }

            for (i = 0; i < linha1; i++)
            {
                for (j = 0; j < coluna2; j++)
                {
                    printf("%.1lf ", matriz2[i][j]);//\t é tabulação, ou seja, ganha-se espaço horizontal
                }

                printf("\n");
            }
            break;
        case 3:
            printf("Voce escolheu somar matrizes e exibir resultado da terceira matriz!\n");

            printf("Digite a quatidade de linhas da primeira matriz: ");
            scanf("%u", &linha1);
            printf("Digite a quantidade de colunas da primeira matriz: ");
            scanf("%u", &coluna1);

            matriz1[linha1][coluna1];

            printf("Digite a quantidade de linhas da segunda matriz: ");
            scanf("%u", &linha2);
            printf("Digite a quantidade de colunas da segunda matriz: ");
            scanf("%u", &coluna2);

            matriz2[linha2][coluna2];

            for (i = 0; i < linha1; i++)
            {
                for (j = 0; j < coluna1; j++)
                {
                    printf("Numero: ");
                    scanf("%lf", &matriz1[i][j]);
                }
            }

            indicador = 1;//Assumindo valor como verdadeiro e matrizes seguem com as mesmas dimensões

            for (i = 0; i < linha2; i++)
            {
                for (j = 0; j < coluna2; j++)
                {
                    printf("Outro numero: ");
                    scanf("%lf", &matriz2[i][j]);
                }
            }

            linha3 = linha1;
            coluna3 = coluna1;

            matriz3[linha3][coluna3];

            for (i = 0; i < linha1; i++)
            {
                if (linha1 != linha2 || coluna1 != coluna2)
                {
                    printf("Inválido! As matrizes devem conter as mesmas dimensoes para somar!");
                    indicador = 0;//Com a satisfação das condições, assume que as matrizes não possuem as mesmas dimensões
                    break;//Interrompa minha repetição caso acontecer
                }
                for (j = 0; j < coluna1; j++)
                {
                    matriz3[i][j] = matriz1[i][j] + matriz2[i][j];
                }
            }

            if (indicador == 0)
            {
                printf("As matrizes não somaram, pois não contém o mesmo tamanho!");
            }

            for (i = 0; i < linha1; i++)
            {
                for(j = 0; j < coluna1; j++)
                {
                    printf("%.2lf ", matriz3[i][j]);
                }

                printf("\n");
            }
            break;
        case 4:
            printf("Voce escolheu subtrair matrizes e exibir o resultado final!\n");

            printf("Digite a quatidade de linhas da primeira matriz: ");
            scanf("%u", &linha1);
            printf("Digite a quantidade de linhas da primeira matriz: ");
            scanf("%u", &coluna1);

            matriz1[linha1][coluna1];

            printf("Digite a quantidade de linhas da segunda matriz: ");
            scanf("%u", &linha2);
            printf("Digite a quantidade de colunas da segunda matriz: ");
            scanf("%u", &coluna2);

            matriz2[linha2][coluna2];

            indicador = 1;

            for (i = 0; i < linha1; i++)
            {
                for (j = 0; j < coluna1; j++)
                {
                    printf("Entre com um numero: ");
                    scanf("%lf", &matriz1[i][j]);
                }
            }

            for (i = 0; i < linha2; i++)
            {
                for (j = 0; j < coluna2; j++)
                {
                    printf("Entre com numero inteiro para segunda matriz: ");
                    scanf("%lf", &matriz2[i][j]);
                }
                printf("\n");
            }

            for (i = 0; i < linha1; i++)
            {
                if (linha1 != linha2 || coluna1 != coluna2)
                {
                    printf("OPERACAO INVALIDA! As matrizes precisam ser iguais em dimensões.");
                    indicador = 0;
                    break;
                }

                linha3 = linha1;
                coluna3 = coluna1;

                matriz3[linha3][coluna3];

                for (j = 0; j < coluna2; j++)
                {
                    matriz3[i][j] = (matriz1[i][j] - matriz2[i][j]);
                }
            }

            if (indicador == 0)
            {
                printf("Operação finalizada! Por favor, tente novamente colocando as mesmas dimensões de matrizes.\n");
            }

            for (i = 0; i < linha3; i++)
            {
                for (j = 0; j < coluna3; j++)
                {
                    printf("%.2lf ", matriz3[i][j]);
                }

                printf("\n");
            }
            break;
        case 5:
            printf("Voce escolheu a multiplicacao entre numeros!\n");

            printf("Determine sua quantidade de linhas: ");
            scanf("%u", &linha1);

            printf("Determine a quantidade de colunas: ");
            scanf("%u", &coluna1);

            matriz1[linha1][coluna1];

            indicador = 1;
            /* Neste caso, como é multiplicação de matrizes, assumo como
            verdade que a quantidade de colunas da primeira matriz é
            igual a quantidade de linhas da segunda matriz*/

            for (i = 0; i < linha1; i++)
            {
                for (j = 0; j < coluna1; j++)
                {
                    printf("Digite um numero: ");
                    scanf("%lf", &matriz1[i][j]);
                }
            }

            printf("Coloque sua quantidade de linhas na segunda matriz: ");
            scanf("%u", &linha2);
            printf("Coloque sua quantidade de colunas na segunda matriz: ");
            scanf("%u", &coluna2);

            matriz2[linha2][coluna2];

            linha3 = coluna1;
            coluna3 = linha2;

            matriz3[linha3][coluna3];

            for (i = 0; i < linha2; i++)
            {
                for (j = 0; j < coluna2; j++)
                {
                    printf("Digite um numero: ");
                    scanf("%lf", &matriz2[i][j]);
                }
            }

            matriz3[i][j] = 0;

            for (i = 0; i < coluna1; i++)
            {
                if (coluna1 != linha2)
                {
                    printf("A coluna da primeira matriz e a linha da segunda matriz estao diferentes! Nao sera possivel calcular o produto!\n");
                    indicador = 0;
                    break;
                }

                for (j = 0; j < linha2; j++)
                {
                    matriz3[i][j] = matriz3[i][j] + (matriz1[i][j] * matriz2[i][j]);
                }
            }

            for (i = 0; i < linha3; i++)
            {
                for (j = 0; j < coluna3; j++)
                {
                    printf("%.2lf ", matriz3[i][j]);
                }

                printf("\n");
            }
            break;
        case 6:
            printf("Voce realmente deseja sair do programa? (V/F): ");
            scanf(" %c", &sair_do_laco);

            if (sair_do_laco == 'V' || sair_do_laco == 'v')
            {
                saida = 1;//Programa diz que o usuário escolheu sair do programa!
                printf("Sair do programa!\n");
                break;
                return 1;
            } else
            {
                saida = 0;
                printf("O programa continua!\n");
            }

            break;

        }
    }
    while (saida == 0);

    printf("Final do loop! =)");

    /*A ideia do programa é um menu que trabalhe com matrizes e que exibam elas
    e façam operações matemáticas com elas. O usuário pode digitar diferentes
    matrizes para conseguir interagir com o programa.*/

    return 0;
}
