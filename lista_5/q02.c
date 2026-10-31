#include <stdio.h>
int main(){
   int n1, n2;

   int *p1 = &n1;
   int *p2 = &n2;

   puts("Entre com o valor de n1: ");
   scanf("%d", p1);

   puts("Entre com o valor de n2: ");
   scanf("%d", p2);

   puts("Antes: ");

   printf("n1 = %d\nn2 = %d\n\n", n1, n2);

   int aux = *p1;
   *p1 = *p2;
   *p2 = aux;

   puts("Depois: ");

   printf("n1 = %d\nn2 = %d\n", n1, n2);

   return 0;
}
