#include <stdio.h>
int main(){
    int numero1, numero2;

    puts("Digite o primeiro numero:");
    scanf("%d", &numero1);

    puts("Digite o segundo numero:");
    scanf("%d", &numero2);

    printf("%d %s multiplo de %d.\n", numero1, numero1 % numero2 == 0 ? "e" : "nao e", numero2);

    return 0;
}