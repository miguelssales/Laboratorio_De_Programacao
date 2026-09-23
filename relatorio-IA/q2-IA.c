#include <stdio.h>

int main() {
    int n;
    float anterior, atual, proxima;

    scanf("%d", &n);

    scanf("%f", &anterior);
    scanf("%f", &atual);

    for (int i = 2; i < n; i++) {
        scanf("%f", &proxima);

        printf("%.2f ", (anterior + atual + proxima) / 3);

        anterior = atual;
        atual = proxima;
    }

    return 0;
}