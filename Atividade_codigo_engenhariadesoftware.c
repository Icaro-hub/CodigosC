#include <stdio.h>

int main() {
    int i;
    int numero, maior;

// O primeiro número será temporariamente o maior...e a partir do momento em que outros números forem inputados, haverá uma comparação por trás
    printf("Digite o 1o numero: ");
    scanf("%d", &numero);
    maior = numero;


    for (i = 2; i <= 1000; i++) {//Estrutura de repetição que permite ao usuário colocar uma quantidade x de números para armazenar na memória
        printf("Digite o %do numero: ", i);
        scanf("%d", &numero);//escaneia o número colocado e, caso não atende os padrões, trava a repetição e vai apenas no ponto que parou e deu como correto

        if (numero > maior) {//Em caso de encontrar um número maior que o outro já maior, atualiza a variável
            maior = numero;
        }
    }

    printf("O maior numero digitado foi: %d\n", maior);//exibição do número maior em quantidade x

    return 0;
}
