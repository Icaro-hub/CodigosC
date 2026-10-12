#include <stdio.h>
#include <stdlib.h>

int main()
{
    double soma, atual, maior_valor, menor_valor, media;
    int i, n;

    printf("Ola. Este programa ira mostrar a soma, media, maior e menor valor que for digitado.\n");

    printf("Ate que numero para calcular: ");
    scanf("%d", &n);

    soma = 0;
    maior_valor = 0;
    menor_valor = 0;
    media = 0;

    for (i=1; i<=n; i++)
    {
        printf("Digite um numero: ");
        scanf("%lf", &atual);

        if (atual < soma)
        {
            menor_valor = atual;
        } else
        {
            maior_valor = atual;
        }

        soma = soma + atual;

        media = (soma + atual) / i;
    }

    printf("Soma: %lf\n", soma);
    printf("Media: %lf\n", media);
    printf("Maior valor: %lf\n", maior_valor);
    printf("Menor valor: %lf", menor_valor);

    return 0;
}
