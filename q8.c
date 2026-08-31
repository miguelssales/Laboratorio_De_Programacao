#include <stdio.h>
int main(){
    int numero;

    puts("Digite um valor inteiro:");
    scanf("%d",&numero);

    printf("Sucessor: %d\n",numero + 1);
    printf("Antecessor: %d\n",numero - 1);

    return 0;
}