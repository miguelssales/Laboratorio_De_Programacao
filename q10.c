#include <stdio.h>
int main(){
    float cotacao, reais, dolares;

    puts("Digite a cotacao do dolar:");
    scanf("%f", &cotacao);

    puts("Digite a quantidade de reais:");
    scanf("%f", &reais);

    dolares = reais / cotacao;

    printf("Valor em dolares: %.2f\n", dolares);

    return 0;
}