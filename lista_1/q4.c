#include <stdio.h>

int main() {
    int X;

    puts("Entre com um valor inteiro: ");
    scanf("%d", &X);

    printf("Triplo: %d\n", X * 3);
    printf("Quadrado: %d\n", X * X);
    printf("Meio: %d\n", X / 2);

    return 0;
}