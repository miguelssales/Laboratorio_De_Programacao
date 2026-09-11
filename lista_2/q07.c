#include <stdio.h>
int main(){
    float n1;
    float n2;

    puts("Entre com o primeiro valor:");
    scanf("%f", &n1);
    puts("Entre com o segundo valor:");
    scanf("%f", &n2);

    while (n2 == 0)
    {
        puts("O segundo valor nao pode ser nulo.");
        puts("Entre novamente com o segundo valor:");
        scanf("%f", &n2);
    }

    printf("Resultado da divisao: %.2f\n", n1 / n2);

    return 0;
}