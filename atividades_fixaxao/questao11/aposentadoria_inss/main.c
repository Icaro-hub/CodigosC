#include <stdio.h>
#include <stdlib.h>

int main()
{
    char genero;
    int idade, contribuicao;

    printf("Questao 11 da lista de exercicios da disciplina!\n");

    printf("Digite o genero da pessoa. Vale apenas as iniciais M ou F: \n");
    scanf("%c", &genero);
    printf("Qual a idade do trabalhador: \n");
    scanf("%d", &idade);
    printf("Anos de contribuicao: \n");
    scanf("%d", &contribuicao);


    if (genero == 'M' && idade >= 65 && contribuicao == 10)
    {
        printf("Aposentavel");
    } else if (genero == 'M' && idade >= 63 && contribuicao == 15)
    {
        printf("Aposentavel");
    } else if (genero == 'F' && idade >= 63 && contribuicao == 10)
    {
        printf("Aposentavel");
    } else if (genero == 'F' && idade >= 61 && contribuicao == 15)
    {
        printf("Aposentavel");
    } else
    {
        printf("Nao aposentavel");
    }

    return 0;
}
