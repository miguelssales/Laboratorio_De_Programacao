#include <stdio.h>
int main(){
    int anterior = 1;
    int atual = 1;
    int proximo;

    printf("%d, %d", anterior, atual);

    for(int i = 3; i <= 20; i++){
        proximo = anterior + atual;

        printf(", %d", proximo);

        anterior = atual;
        atual = proximo;
    }

    return 0;
}