#include <stdio.h>

int main() {
    int R, G, B, M;

    scanf("%d %d %d", &R, &G, &B);
    scanf("%d", &M);

    R = (R & 254) | ((M >> 2) & 1);
    G = (G & 254) | ((M >> 1) & 1);
    B = (B & 254) | (M & 1);

    printf("%d %d %d\n", R, G, B);

    return 0;
}