#include <stdio.h>
#define TAM 5
int main(){
    int vet[TAM];
    for(int i = 0; i < TAM; i++)
    {
        printf("Entre com um valor para vet[%d]: ", i);
        scanf("%d", &vet[i]);
    }

    puts("VETOR: ");
    for(int i = 0; i < TAM; i++)
    {
        printf("%d[%p]\n", vet[i], &vet[i]);
    }

    return 0;
}