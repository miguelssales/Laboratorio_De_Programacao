#include <stdio.h>
int main(){
    int x = 8, y = 2;
    y = x-- + y; // y = x(valendo 8) + y = 10; Depois, x = x - 1 = 7; O incremento -- foi realizado após a atribuicao de y;
    x = --y + x; // x = y(valendo 10 - 1 = 9) + x = 16; O incremento -- foi realizado antes do calculo de y referente a atribuicao de x;

    printf("x = %d\n", x);
    printf("y = %d\n", y);

    return 0;
}