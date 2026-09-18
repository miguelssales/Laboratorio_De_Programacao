#include <stdio.h>
int main(){
    unsigned int R, G, B, M;
    int b0, b1, b2;

    scanf("%d", &R);
    scanf("%d", &G);
    scanf("%d", &B);
    scanf("%d", &M);

     b0 = M & 1;
     b1 = (M >> 1) & 1;
     b2 = (M >> 2) & 1;

     R = (R & 254) | b2;
     G = (G & 254) | b1;
     B = (B & 254) | b0;

     printf("%d %d %d\n", R,G,B);

    return 0;
}
