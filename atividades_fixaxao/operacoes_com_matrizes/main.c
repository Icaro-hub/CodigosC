#include <stdio.h>
#include <stdlib.h>
#define max 10
int main()
{
   unsigned int linha1, coluna1, linha2, coluna2;
   int i, j;
   double soma, matriz1[max][max], matriz2[max][max];

   printf("Quantidade de linhas da primeira matriz: ");
   scanf("%u", &linha1);

   coluna1 = linha1;

   matriz1[linha1][coluna1];

   for (i = 0; i < linha1; i++)
   {
       for (j = 0; j < coluna1; j++)
       {
           printf("Digite um numero: ");
           scanf("%lf", &matriz1[i][j]);
       }
   }

   printf("Quantidade de linhas da segunda matriz: ");
   scanf("%u", &linha2);

   coluna2 = linha2;

   matriz2[linha2][coluna2];

   for (i = 0; i < linha2; i++)
   {
       for (j = 0; j < coluna2; j++)
       {
           printf("Digite outro numero: ");
           scanf("%lf", &matriz2[i][j]);
       }
   }

   for (i = 0; i < linha1; i++)
   {
       for (j = 0; j < coluna1; j++)
       {
           soma = matriz1[i][j] + matriz2[i][j];
       }

       printf("%.1lf ", soma);
   }

   return 0;
}
