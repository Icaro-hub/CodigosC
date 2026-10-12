#include <stdio.h>
#include <stdlib.h>

int main()
{
    char caractere;
    int num_inteiro;
    float num_ptflutuante;


    printf("Digite um caractere: \n");
    scanf("%c", &caractere);

    printf("Digite um numero decimal: \n");
    scanf("%d", &num_inteiro);

    printf("Digite um numero com casas decimais: ");
    scanf("%f", &num_ptflutuante);

    printf("Os valores que foram digitados foi: %c, %d, %f \n", caractere, num_inteiro, num_ptflutuante);
    return 0;
}
