#include <stdio.h>
int main(){
   int n1, n2, soma;

   int *pn1 = &n1;
   int *pn2 = &n2;
   int *psoma = &soma;

   puts("Entre com o valor de n1: ");
   scanf("%d", pn1);

   puts("Entre com o valor de n2: ");
   scanf("%d", pn2);

   *psoma = *pn1 + *pn2;

   printf("Soma %d + %d = %d [%p]\n", n1, n2, *psoma, psoma);

   return 0;
}
