#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#define TAM 3
#define LIM 20
int main(){
    srand(time(NULL));
    int vet[TAM], sum = 0, produto = 1;
    for(int i = 0; i < TAM; i++)
    {
        vet[i] = rand() % LIM;
        printf("n%d = %d\n", i, vet[i]);
        sum += vet[i];
        produto *= vet[i];
    }
    printf("MEDIA ARITMETICA = %.4f\nMEDIA GEOMETRICA = %.4lf\n", (float)(sum) / TAM, pow(produto, 1.0/TAM));

    return 0;
}