#include <stdio.h>
int main(){
    int r, g, b, m;
    int b0, b1, b2;

    printf("r:");
    scanf("%d", &r);
    printf("g:");
    scanf("%d", &g);
    printf("b:");
    scanf("%d", &b);
    printf("m:");
    scanf("%d", &m);

    b0 = m & 1;
    b1 = (m & 2) >> 1;
    b2 = (m & 4) >> 2;

    r = (r & 254) | b2;
    g = (g & 254) | b1;
    b = (b & 254) | b0;

    printf("r = %d\ng = %d\nb = %d\n", r,g,b);

    return 0;
}
