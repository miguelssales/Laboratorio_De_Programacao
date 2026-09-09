#include <stdio.h>
int main(){
    int F;
    puts("Entre com um valor inteiro positivo: ");
    scanf("%d",&F);

    for(int i = F - 1; i >= 1; i--){
        F = F * i;
    }

    printf("Fatorial =  %d", F);

    return 0;
}