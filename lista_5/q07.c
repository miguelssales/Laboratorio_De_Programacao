#include <stdio.h>
#define TAM 80
int main(){
    char s1[TAM], s2[TAM];

    puts("Entre com uma string: ");
    fgets(s1, TAM, stdin);

    puts("Entre com outra string: ");
    fgets(s2, TAM, stdin);

    char *ps1 = s1;
    char *ps2 = s2;


    return 0;
}