#include <stdio.h>
int main(){
    int x, n, resultado;

    puts("Digite o valor de x:");
    scanf("%d", &x);

    puts("Digite o valor de n:");
    scanf("%d", &n);

    resultado = x << n;

    printf("Resultado: %d\n", resultado);

    return 0;
}