#include <stdio.h>
int main(){
    int A, B, aux;
    int soma = 0;

    printf("Digite o valor de A: ");
    scanf("%d", &A);

    printf("Digite o valor de B: ");
    scanf("%d", &B);

    if(A > B){
        aux = A;
        A = B;
        B = aux;
    }

    for(int i = A; i <= B; i++){
        if(i % 2 == 0){
            soma = soma + i;
        }
    }

    printf("Somatorio dos numeros pares: %d\n", soma);

    return 0;
}