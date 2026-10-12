#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vitoriaA, vitoriaB, saldoA, saldoB, golsA, golsB, cvA, cvB, caA, caB;


    printf("Numero de vitorias do time A: ");
    scanf("%d", &vitoriaA);
    printf("Numero de vitorias do time B: ");
    scanf("%d", &vitoriaB);

    printf("Saldo de gols do time A: ");
    scanf("%d", &saldoA);
    printf("Saldo de gols do time B: ");
    scanf("%d", &saldoB);

    printf("Gols marcados time A: ");
    scanf("%d", &golsA);
    printf("Gols marcados time B: ");
    scanf("%d", &golsB);

    printf("Cartoes vermelho time A: ");
    scanf("%d", &cvA);
    printf("Cartoes vermelho time B: ");
    scanf("%d", &cvB);

    printf("Cartoes amarelos time A: ");
    scanf("%d", &caA);
    printf("Cartoes amarelos time B: ");
    scanf("%d", &caB);

    if (vitoriaA > vitoriaB)
    {
        printf("Time A vence o desempate por numero de vitorias.");
    } else if (vitoriaA < vitoriaB)
    {
        printf("Time B vence o desempate por numero de vitorias.");
    } else if (saldoA > saldoB)
    {
        printf("Time A vence criterio de desempate por saldo de gols.");
    } else if (saldoA < saldoB)
    {
        printf("Time B vence criterio de desempate por saldo de gols.");
    } else if (golsA > golsB)
    {
        printf ("Time A vence criterio de desempate por gols marcados.");
    } else if (golsA < golsB)
    {
        printf("Time B vence criterio de desempate por gols marcados.");
    } else if (cvA < cvB)
    {
        printf("Time A tem menos cartoes vermelhos e ganhou o desempate");
    } else if (cvA > cvB)
    {
        printf("Time B tem menos cartoes vermelhos e ganhou o desempate");
    } else if (caA < cvB)
    {
        printf("Time B perdeu para time A por ter mais cartoes amarelos");
    } else
    {
        printf("Time A perdeu para time B por ter mais cartoes amarelos");
    }
    return 0;
}
