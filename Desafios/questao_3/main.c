#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned int escolha;
    double celcius, farenheint, quilometros, metros;
    char sair_do_programa;

    do
    {
        printf("1 - Converter celcius para Farenheint\n");
        printf("2 - Converter Farenheint para Celcius\n");
        printf("3 - Converter de Metros para Quilometros\n");
        printf("4 - Converter de Quilometro para Metros\n");
        printf("5 - Sair do programa\n");

        printf("Selecione sua opcao: ");
        scanf("%u", &escolha);

        switch (escolha)
        {
        case 1:
            printf("Escolheu converter temperatura C para F.\n");

            printf("Digite a temperatura em Celcius: ");
            scanf("%lf", &celcius);

            farenheint = (1.8 * celcius) + 32;

            printf("Resultado da temperatura: %lf\n", farenheint);
            break;

        case 2:
            printf("Escolheu converter temperatura de F para C.\n");

            printf("Digite a temperatura em Farenheint: ");
            scanf("%lf", &farenheint);

            celcius = 0.33 * (farenheint - 32);

            printf("Resultado da temperatura: %lf\n", celcius);
            break;

        case 3:
            printf("Escolheu converter metro para quilômetro!\n");

            printf("Coloque a medida em Metros: ");
            scanf("%lf", &metros);

            quilometros = metros / 1000;

            printf("Medida em quilometros: %lf Km.\n", quilometros);
            break;
        case 4:
            printf("Escolha de quilometro para metro!\n");

            printf("Coloque a medida em Quilometros: ");
            scanf("%lf", &quilometros);

            metros = quilometros * 1000;

            printf("Medida em metros: %lf m", metros);
        case 5:
            printf("Voce realmente deseja sair do programa?\n");

            printf("Escolha S para sim ou N para nao: ");
            scanf(" %c", &sair_do_programa);
            break;
        default:
            printf("Alternativa invalida! Por favor, escolha numeros de um a cinco.\n");
        }

        if (sair_do_programa == 'S')
            {
                printf("Voce escolheu sair do programa!\n");
                break;
            }

    } while (escolha);

    return 0;
}
