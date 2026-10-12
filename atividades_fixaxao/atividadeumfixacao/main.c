#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    float b;
    char c;

    printf("Digite o primeiro numero, do tipo inteiro:  \n");
    scanf("%d", &a);

    printf("Digite o segundo numero, do tipo flutuante:  \n");
    scanf("%f", &b);

    printf("Digite um caractere:  \n");
    scanf("%c", &c);

    printf("Exibicao final dos valores das variaveis: %d, %f, %c", a,b,c);
    return 0;
}
