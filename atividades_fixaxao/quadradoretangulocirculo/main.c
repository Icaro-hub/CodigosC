#include <stdio.h>
#include <stdlib.h>
//Calcular área de quadrado, retangulo e circulo
int main()
{
    char forma_geometrica;
    double l1, base, altura, raio, arear, areaq, areac;

    printf("Esccolha entre circulo, retangulo ou quadrado. Vale apenas as iniciais: ");
    scanf("%c", &forma_geometrica);

    if (forma_geometrica == 'r' || forma_geometrica == 'R')
    {

        printf("Digite a base: ");
        scanf("%lf", &base);
        printf("Digite a altura: ");
        scanf("%lf", &altura);

        arear = base * altura;

        printf("O retangulo de base %lf e de altura %lf tera area igual a: %lf", base, altura, arear);
    } else if (forma_geometrica == 'q' || forma_geometrica == 'Q')
    {
        printf("Digite um lado do quadrado: ");
        scanf("%lf", &l1);

        areaq = l1 * l1;

        printf("O quadrado de lado %lf tem area de: %lf", l1, areaq);
    } else if (forma_geometrica == 'c' || forma_geometrica == 'C')
    {
        printf("Digite o raio do circulo: ");
        scanf("%lf", &raio);


        areac = 3.14 * (raio * raio);

        printf("O circulo de raio %lf tem area de: %lf", raio, areac);
    } else
    {
        printf("Letra invalida! Por favor escolha entre circulo, quadrado e retangulo");
    }
    return 0;
}
