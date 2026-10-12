#include <stdio.h>
#include <stdlib.h>

int main()
{
    int idade, contribuicao;
    char sexo;

    printf("Ola, este programa ira dizer se uma pessoa de sexo masculino ou feminino ira ser apto para aposentadoria.\n");

    printf("Masculino ou Feminino? Apenas as iniciais maiusculas: ");
    scanf("%c", &sexo);

    switch(sexo)
    {
    case 'M':
        printf("Digite a idade do homem: ");
        scanf("%d", &idade);

        printf("Digite os anos de contribuicao dele: ");
        scanf("%d", &contribuicao);

        if (idade >= 65 && contribuicao >= 10)
        {
            printf("O homem pode aposentar por estes aspectos!");
        } else if (idade >= 63 && contribuicao >= 15)
        {
            printf("O homem pode aposentar por estes aspectos!");
        } else
        {
            printf("Ele nao pode aposentar!");
        }
        break;
    case 'F':
        printf("Digite a idade dela: ");
        scanf("%d", &idade);

        printf("Os anos de contribuicao dela: ");
        scanf("%d", &contribuicao);

        if (idade >= 63 && contribuicao >= 10)
        {
            printf("A mulher pode aposentar por estes aspectos!");
        } else if (idade >= 61 && contribuicao >= 15)
        {
            printf("A mulher pode aposentar por estes aspectos!");
        } else
        {
            printf("Ela nao pode aposentar!");
        }
        break;
    default:
        printf("Caractere invalido! Por favor, digitar em letra maiuscula!");
    }

    return 0;
}
