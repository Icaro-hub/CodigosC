#include <stdio.h>
#include <stdlib.h>

int main()
{
    double valor_transacao;
    float comissao1, comissao2, comissao3, comissao4, comissao5, comissao6;

    printf("Digite o valor da transacao pelo usuario: ");
    scanf("%lf", &valor_transacao);

    if (valor_transacao <= 2500.0)
    {
        comissao1 = (valor_transacao * 1.7 / 100) + 30;
        printf("O valor da comissao por essa transacao foi de: %.2f\n", comissao1);

        if(comissao1 < 39)
        {
            comissao1 = 39;
            printf("O vendedor recebe %f reais", comissao1);
        }
    } else if (valor_transacao > 2500.0 && valor_transacao <= 6250.0)
    {
        comissao2 = (valor_transacao * 0.66 / 100) + 56;
        printf("Valor da comissao por esta transacao foi de: %.2f", comissao2);
    } else if (valor_transacao > 6250.0 && valor_transacao <= 20000.0)
    {
        comissao3 = (valor_transacao * 0.34 / 100) + 76;
        printf("Valor da comissao por esta transacao foi de: %.2f", comissao3);
    } else if (valor_transacao > 20000.0 && valor_transacao <= 50000.0)
    {
        comissao4 = (valor_transacao * 0.22 / 100) + 100;
        printf("Valor da comissao por esta transacao foi de: %.2f", comissao4);
    } else if (valor_transacao > 50000.0 && valor_transacao <= 500000.0)
    {
        comissao5 = (valor_transacao * 0.11 / 100) + 155;
        printf("Valor da comissao por esta transacao foi de: %.2f", comissao5);
    } else
    {
        comissao6 = (valor_transacao * 0.08 / 100) + 255;
        printf("Valor da comissao por esta transacao foi de : %.2f", comissao6);
    }

    return 0;
}
