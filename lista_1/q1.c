#include <stdio.h>

int main() {
    int n = 0;

    printf("Digite um valor Inteiro em Decimal: ");
    scanf("%d", &n);

    printf("Hexadecimal = %X\n", n);
    printf("Octal = %o\n", n);

    return 0;
}