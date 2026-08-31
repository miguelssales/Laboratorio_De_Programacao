#include <stdio.h>
int main(){
    float conta;

    puts("Entre com o valor da conta: R$ ");
    scanf("%f", &conta);

    printf("Total a pagar = R$ %.2f\n", conta * 1.10);

    return 0;
}