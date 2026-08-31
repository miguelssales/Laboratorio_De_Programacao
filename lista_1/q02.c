#include <stdio.h>

int main(){
    double n;

    puts("Digite um valor Real: ");
    scanf("%lf", &n);
    
    int m = (int) n;
    printf("Parte inteira = %d", m);

    return 0;
}