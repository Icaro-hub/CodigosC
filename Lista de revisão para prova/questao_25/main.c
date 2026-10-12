#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned int escolha;
    double soma1, soma2, subtracao1, subtracao2, multiplicacao1, multiplicacao2, divisao1, divisao2;
    double soma_final, subtracao_final, multiplicacao_final, divisao_final;
    char saida_do_programa;

    do
    {
        printf("Escolha 1 - Somar dois numeros\n");
        printf("Escolha 2 - Subtrair dois numeros\n");
        printf("Escolha 3 - Multiplicar dois numeros\n");
        printf("Escolha 4 - Dividir dois numeros\n");
        printf("Escolha 5 - Sair do programa\n");

        printf("Escolha uma das opcoes: ");
        scanf("%u", &escolha);

        switch (escolha)
        {
        case 1:
            printf("Voce escolheu somar dois numeros!\n");

            printf("Escolha um numero: ");
            scanf("%lf", &soma1);

            printf("Escolha o segundo numero: ");
            scanf("%lf", &soma2);

            soma_final = soma1 + soma2;
            printf("Resultado final: %lf\n", soma_final);
            break;
        case 2:
            printf("Voce escolheu subtrair dois numeros!\n");

            printf("Escolha um numero: ");
            scanf("%lf", &subtracao1);

            printf("Escolha outro numero: ");
            scanf("%lf", &subtracao2);

            subtracao_final = subtracao1 - subtracao2;
            printf("Resultado final: %lf\n", subtracao_final);
            break;
        case 3:
            printf("Voce escolheu multiplicacao entre dois numeros!\n");

            printf("Escolha um numero: ");
            scanf("%lf", &multiplicacao1);

            printf("Escolha outro numero: ");
            scanf("%lf", &multiplicacao2);

            multiplicacao_final = multiplicacao1 * multiplicacao2;
            printf("Resultado final: %lf\n", multiplicacao_final);
            break;
        case 4:
            printf("Voce escolheu divisao de dois numeros!\n");

            printf("Escolha um numero: ");
            scanf("%lf", &divisao1);

            printf("Escolha outro numero: ");
            scanf("%lf", &divisao2);

            divisao_final = divisao1 / divisao2;
            printf("Resultado final: %lf\n", divisao_final);
            break;
        case 5:
            printf("Voce realmente quer parar o programa?\n");

            printf("Digite S ou N: ");
            scanf(" %c", &saida_do_programa);

            if (saida_do_programa == 'S')
            {
                printf("Fim do programa!\n");
            } else
            {
                printf("O programa continua!\n");
            }
            break;
        default:
            printf("Numero invalido! Por favor digite numeros de um a cinco!\n");
            break;

        }

        if (saida_do_programa == 'S')
        {
            break;
        }

    } while (escolha);

    return 0;
}
