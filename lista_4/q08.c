#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TAM 100
int main(){
   srand(time(NULL));
   int vet[TAM], base, limite;
  
   puts("Entre com o valor minimo do intervalo: ");
   scanf("%d", &base);
   puts("Entre com o valor maximo do intervalo: ");
   scanf("%d", &limite);

   for(int i = 0; i < TAM; i++)
   {
       vet[i] = rand() % (limite + 1 - base) + base;
       printf("n%d = %d\n", i, vet[i]);
   }

   for(int i = 0; i < TAM - 1; i++)
   {
       int imenor = i;


       for(int j = i + 1; j < TAM; j++)
       {
           if(vet[j] < vet[imenor]) imenor = j;
       }


       if(imenor != i)
       {
           int temp = vet[i];
           vet[i] = vet[imenor];
           vet[imenor] = temp;
       }
   }

   puts("\nVetor ordenado:\n");

   for(int i = 0; i < TAM; i++)
   {
       printf("n%d = %d\n", i, vet[i]);
   }

   return 0;
}