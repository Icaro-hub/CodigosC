#include <stdio.h>
#include <stdlib.h>

int main()
{
    double temperatura_c, temperatura_f, grau_c, grau_f;
    char temperatura;

    printf("Ola! Este programa ira calcular qual a temperatura de Celsius e Farenheint\n");

    printf("Por favor, escolha entre Celcius ou Farenheint. Vale apenas as iniciais C ou F: ");
    scanf("%c", &temperatura);


    switch(temperatura)
    {
    case 'C':
        printf("Digite o valor: ");
        scanf("%lf", &grau_f);

        temperatura_c = 0.55 * (grau_f - 32);
        printf("O valor da temperatura em escala Celsius foi de %.1lf Celsius, considerando a temperatura %.1lf Farenheints.", temperatura_c, grau_f);

        break;
    case 'F':
        printf("Digite o valor: ");
        scanf("%lf", &grau_c);

        temperatura_f = (grau_c * 1.8) + 32;
        printf("O valor da temperatura em escala Farenheint foi de %.1lf Farenheint, considerando a temperatura %.1lf Celsius.", temperatura_f, grau_c);
        break;
    default:
        printf("Caractere incorreto! Por favor, escolha apenas C ou F");
        break;
    }

    return 0;
}
