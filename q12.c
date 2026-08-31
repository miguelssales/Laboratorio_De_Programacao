#include <stdio.h>
int main(){
    int A, B, auxiliar;

    puts("Digite o valor de A:");
    scanf("%d", &A);

    puts("Digite o valor de B:");
    scanf("%d", &B);

    auxiliar = A;
    A = B;
    B = auxiliar;

    printf("Valor de A: %d\n", A);
    printf("Valor de B: %d\n", B);

    return 0;
}