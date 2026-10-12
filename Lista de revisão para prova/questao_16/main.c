#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned int n, intervalo1, intervalo2, intervalo3, intervalo4, intervalo5;
    int i;
    double numero;

    printf("Ola. Este programa ira utilizar variavel contadora depois de digitar um numero.\n");

    printf("Quantidade de repeticao: ");
    scanf("%u", &n);

    intervalo1 = 0;
    intervalo2 = 0;
    intervalo3 = 0;
    intervalo4 = 0;
    intervalo5 = 0;

    for (i=1; i<=n; i++)
    {
        printf("Digite um numero: ");
        scanf("%lf", &numero);

        if (numero >= 0 && numero <= 20)
        {
            intervalo1++;
        } else if (numero >= 21 && numero <= 40)
        {
            intervalo2++;
        } else if (numero >= 41 && numero <= 60)
        {
            intervalo3++;
        } else if (numero >= 61 && numero <= 80)
        {
            intervalo4++;
        } else if (numero >= 81 && numero <= 100)
        {
            intervalo5++;
        } else
        {
            continue;
        }
    }

    printf("Quantidade de numeros no primeiro intervalo: %u\n", intervalo1);
    printf("Quantidade de numeros no segundo intervalo: %u\n", intervalo2);
    printf("Quantidade de numeros no terceiro intervalo: %u\n", intervalo3);
    printf("Quantidade de numeros no quarto intervalo: %u\n", intervalo4);
    printf("Quantidade de numeros no quinto intervalo: %u\n", intervalo5);

    return 0;
}
