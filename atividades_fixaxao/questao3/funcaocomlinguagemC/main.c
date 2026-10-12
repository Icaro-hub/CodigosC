#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    double primeiro_termo, segundo_termo, terceiro_termo, resultado_final, base, expoente;
    float x, valor1, valor2, valor3;

    printf("Ola! Esta funcao ira calcular uma funcao que contem raiz e potencia.");

    printf("Digite o valor de x: \n");
    scanf("%f", &x);

    if (x >= 0)
    {
         valor1 = ("%f", x);
         primeiro_termo = sqrt(valor1);

         valor2 = ("%f", x) / 2;
         segundo_termo = valor2;

         valor3 = ("%f", x);
         base = valor3;
         expoente = valor3;
         terceiro_termo = pow(base, expoente);

         resultado_final = primeiro_termo + segundo_termo + terceiro_termo;
         printf("Por meio do valor de %f, o resultado da expressao foi de: %.2lf", x, resultado_final);
    } else
    {
        printf("Calculo invalido! Nao pode ser possivel realizar calculo com numeros negativos.");
    }

    return 0;
}
