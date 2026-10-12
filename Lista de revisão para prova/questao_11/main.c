#include <stdio.h>
#include <stdlib.h>

int main()
{
    double temperatura_c, temperatura_f;
    char temperatura;

    printf("Este programa tem a funcao de calcular temperaturas de C ou F, a depender do caractere escolhido.\n");

    printf("Digite caractere entre C ou F: ");
    scanf("%c", &temperatura);

    switch (temperatura)
    {
    case 'C':
        printf("Qual a temperatura em Farenheint: ");
        scanf("%lf", &temperatura_f);

        temperatura_c = 0.33 * (temperatura_f - 32);
        printf("A temperatura, de acordo com o valor em F, e igual a %lf Celcius", temperatura_c);
        break;
    case 'F':
        printf("Qual a temperatura em Celcius: ");
        scanf("%lf", &temperatura_c);

        temperatura_f = (1.8 * temperatura_c) + 32;
        printf("A temperatura, de acordo com o valor em C, e igual a %lf Farenheint", temperatura_f);
        break;
    default:
        printf("Valor invalido! Por favor digite apenas os caracteres C ou F, em letra maiuscula!");
        break;
    }

    return 0;
}
