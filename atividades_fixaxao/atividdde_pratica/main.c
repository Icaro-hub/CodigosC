#include <stdio.h>
#include <stdlib.h>

int main()
{

    unsigned int n, acumuladora, valor_atual;
    int i;

    printf("Ola! Este programa ira realizar calculo de soma por meio diferebte de codificacao!\n");

    printf("Coloque a quantidade de vezes que vai repetir: ");
    scanf("%u", &n);

    acumuladora = 0;

    for (i = 1; i <= n; i++)
    {
        printf("Digite o valor atual dela: ");
        scanf("%u", &valor_atual);

        acumuladora += valor_atual;
    }

    printf("Valor final da somatoria: %u", acumuladora);

    return 0;
}
