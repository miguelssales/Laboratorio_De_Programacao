#include <stdio.h>
int main(){
    int x = 0;

    puts("Entre com valor de X: ");
    scanf("%d", &x);
    printf("TRIPLO = %d\nQUADRADO = %d\nMETADE = %d", 3*x, x*x, x/2);

    return 0;
}