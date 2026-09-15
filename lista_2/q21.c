#include <stdio.h>
int main(){
    int n, uni, dez, cent, mil, dezmil;
    puts("Entre com um numero inteiro de 5 digitos: ");
    scanf("%d", &n);

    uni = n % 10;
    dez = (n % 100) / 10 ;
    cent = (n % 1000) / 100 ;
    mil = (n % 10000) / 1000;
    dezmil = (n % 100000) / 10000;

    if (uni == dezmil && dez == mil)
    {
        puts("Eh palindromo!\n");
    }
    else
    {
        puts("Nao eh palindromo :(\n");
    }

    return 0;
}