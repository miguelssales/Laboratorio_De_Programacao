#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TAM 3
#define INT 80
int main(){
   srand(time(NULL));
   int mat[TAM][TAM];
   for(int i = 0; i < TAM; i++)
   {
       for(int j = 0; j < TAM; j++)
       {
           mat[i][j] = rand() % INT;
           printf("  mat[%d][%d] = %d", i, j, mat[i][j]);
       }
       printf("\n");
   }

   int x, cont = 0;
   puts("Entre com um valor x: ");
   scanf("%d", &x);

   for(int i = 0; i < TAM; i++)
   {
       for(int j = 0; j < TAM; j++)
       {
           if(mat[i][j] == x) cont++;
       }
   }

   printf("O valor x = %d aparece %d vezes na matriz gerada.\n", x, cont);

   return 0;
}