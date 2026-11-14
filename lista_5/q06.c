#include <stdio.h>
#define TAM 80
int main(){
    char s1[TAM], s2[TAM];

    puts("Entre com uma string: ");
    fgets(s1, TAM, stdin);

    char *ps1 = s1; 
    char *ps2 = s2;

    while(*ps1 != '\0' && *ps1 != '\n')
    {
        *ps2 = *ps1;
        ps1++;
        ps2++;
    }

    *ps2 = '\0';

    printf("string copiada(%s)", s2);

    return 0;
}