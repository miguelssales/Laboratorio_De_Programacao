#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define LIN 3
#define COL 3
int main(){
   int mat[LIN][COL];
   for(int i = 0; i < LIN; i++)
   {
       for(int j = 0; j < COL; j++)
       {
           printf("Digite o elemento da posicao [%d][%d]: ", i, j);
           scanf("%d", &mat[i][j]);
       }
   }

   puts("\nDiagonal principal:");

   for(int i = 0; i < LIN; i++)
   {
       printf("%d ; ", mat[i][i]);
   }

   return 0;
}