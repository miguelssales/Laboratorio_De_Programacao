#include <stdio.h>
int main(){
    int A, B, aux;
    int numero;

    printf("Digite o valor de A: ");
    scanf("%d", &A);

    printf("Digite o valor de B: ");
    scanf("%d", &B);

    if(A > B){
        aux = A;
        A = B;
        B = aux;
    }

    for(numero = A; numero <= B; numero++){
        if(numero % 4 == 0){
            printf("%d ao quadrado = %d\n", numero, numero * numero);
        }
    }

    return 0;
}