#include <stdio.h>
int main(){
    int A, B, aux;
    int quantidade = 0;

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
        if(i % 3 == 0){
            quantidade++;
        }
    }

    printf("Quantidade de numeros divisiveis por 3: %d\n", quantidade);

    return 0;
}