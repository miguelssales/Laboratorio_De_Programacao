#include <stdio.h>
#include <stdlib.h>
int main(){
    int numero, absoluto;

    puts("Digite um valor inteiro:");
    scanf("%d", &numero);

    absoluto = abs(numero);

    printf("Valor absoluto: %d\n", absoluto);

    return 0;
}