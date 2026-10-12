#include <stdio.h>
#include <stdlib.h>

int main()
{
    float media, numero_anterior, numero_atual;
    unsigned int i, n, qtd_numeros;

    printf("Loop com somatoria, media e quantidade de numeros acima da media.\n");

    printf("Quantidade de repeticoes no loop: ");
    scanf("%u", &n);

    printf("Primeiro numero: ");
    scanf("%f", &numero_atual);

    numero_anterior = 0;
    media = 0;
    qtd_numeros = 0;

    for (i=1; i<=n; i++)
    {
        numero_anterior = numero_anterior + numero_atual;
        media = numero_anterior / n;

        if (numero_atual > media)
        {
            qtd_numeros = qtd_numeros + 1;
        }
        printf("Digite o proximo numero: ");
        scanf("%f", &numero_atual);
    }
    printf("Soma total foi de %f\n", numero_anterior);
    printf("A media total foi de %f\n", media);
    printf("A quantidade de numeros acima da media foi de %u\n", qtd_numeros);

    //QUESTÃO QUE NÃO CAI EM PROVA POR CAUSA DE VETORES E MATRIZES

    return 0;
}
