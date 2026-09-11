#include <stdio.h>
int main(){
    float preco;
    float entrada, prestacoes;
    printf("Entre com o preco da mercadoria: R$ ");
    scanf("%f", &preco);

    prestacoes = (int) (preco / 3);
    entrada = preco - prestacoes * 2;

    printf("Entrada = R$ %.2f\nPrestacoes = R$ %.2f", entrada, prestacoes);

    return 0;
}