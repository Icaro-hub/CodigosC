#include <stdio.h>
#include <stdlib.h>

int main()
{
    double numero;
    unsigned int n, intervalo1, intervalo2, intervalo3, intervalo4;
    unsigned int i;

    printf("Ola! Este codigo ira contar quantos numeros tem dentro de cada intervalo\n");

    printf("Quantas repeticoes?: ");
    scanf("%u", &n);

    intervalo1 = 0;
    intervalo2 = 0;
    intervalo3 = 0;
    intervalo4 = 0;

    for (i=1; i<=n; i++)
    {
        printf("Digite um numero: \n");
        scanf("%lf", &numero);

        if (numero >= 0.0 && numero <= 25.0)
        {
            intervalo1 = intervalo1 + 1;
        } else if (numero >= 26.0 && numero <= 50.0)
        {
            intervalo2 = intervalo2 + 1;
        } else if (numero >= 51.0 && numero <= 75.0)
        {
            intervalo3 = intervalo3 + 1;
        } else
        {
            if ( numero >= 76.0 && numero <= 100.0)
            {
                intervalo4 = intervalo4 + 1;
            } else
            {
                continue;
            }
        }
    }

    printf("Intervalo 1 teve %u numeros!\n", intervalo1);
    printf("Intervalo 2 teve %u numeros!\n", intervalo2);
    printf("Intervalo 3 teve %u numeros!\n", intervalo3);
    printf("Intervalo 4 teve %u numeros!\n", intervalo4);

    return 0;
}
