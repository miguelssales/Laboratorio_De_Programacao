#include <stdio.h>
int main(){
    int numero;

    puts("Digite um numero inteiro:");
    scanf("%d", &numero);

    printf("Este numero e %s.\n", numero % 2 == 0 ? "par" : "impar");

    return 0;
}