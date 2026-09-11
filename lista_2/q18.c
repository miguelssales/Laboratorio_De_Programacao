#include <stdio.h>
int main() {
    unsigned long long graos = 1;
    unsigned long long soma = 0;

    for (int quadro = 1; quadro <= 64; quadro++) {
        soma += graos;
        graos *= 2;
    }

    printf("Somatorio de graos = %llu\n", soma);

    return 0;
}