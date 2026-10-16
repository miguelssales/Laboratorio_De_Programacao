#include <stdio.h>
#include <stdlib.h>
#define TAM 15
int main(){
    float menor, maior;
    float vet[TAM];
    for(int i = 0; i < TAM; i++)
    {
        vet[i] = ((float) rand() / RAND_MAX) * 10.0;
        printf("\n%.3f", vet[i]);

        if(i == 0)
        {
            menor = vet[i];
            maior = vet[i];
        }
        else
        {
            if(vet[i] < menor)
            {
                menor = vet[i];
            }
            else if (vet[i] > maior)
            {
                maior = vet[i];
            }
        }
    }
    
    printf("\nMAIOR = %.3f\nMENOR = %.3f\nSOMA = %.3f", maior, menor, maior + menor);

    return 0;
}