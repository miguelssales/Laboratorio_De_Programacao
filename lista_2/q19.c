#include <stdio.h>
int main() {
    int inicio, fim, soma = 0, quantidade = 0;
    float media;

    printf("Digite o inicio da faixa: ");
    scanf("%d", &inicio);
    printf("Digite o fim da faixa: ");
    scanf("%d", &fim);

    for (int i = inicio; i <= fim; i++) {
        soma += i;
        quantidade++;
    }

    media = (float)soma / quantidade;

    printf("Media aritmetica = %.2f\n", media);

    return 0;
}