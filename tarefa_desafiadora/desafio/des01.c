#include <stdio.h>
/*Olá, este programa irá calcular o valor total do comprimento da circunferência
tanto para quilômetro de circunferência quanto em relação à estádios. Entradas de distância e angulação
e saída da quantidade de estádios e a quilometragem equivalente.
NOME DO ALUNO: Ícaro Gomes Benedetti
REGISTRO ACADÊMICO: 2760482621031*/
int main()
{
    double estadios, angulo, distancia, kms;

    printf("Digite a distancia: \n");
    scanf("%lf", &distancia);

    printf("Digite o angulo: \n");
    scanf("%lf", &angulo);

    estadios = distancia * 360 / angulo;

    printf("A distancia entre a cidade A e B foi o equivalente a %lf estadios com a distancia %lf e angulo %lf\n", estadios, distancia, angulo);

    kms = estadios * 176.4 / 1000; //Cada estádio tem o valor de 176,4 metros. Deve-se dividir por mil para achar em quilômetros

    printf("A circunferencia no valor de estadios é o equivalente a %lf quilometros", kms);

    return 0;
}
