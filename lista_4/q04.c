#include <stdio.h>
#include <string.h>
#define TAM 80
int main(){
    char str1[TAM];
    char str2[TAM];
    unsigned int flag = 1; // verdadeiro

    puts("Entre com uma string: ");
    fgets(str1, sizeof(str1), stdin);

    puts("Entre com outra string: ");
    fgets(str2, sizeof(str2), stdin);

    
    int i = 0;
    while(str1[i] != '\n' && str2[i] != '\n')
    {
        if(str1[i] != str2[i]) flag = 0; // falso
        i++;
    }

    if(flag) puts("Sao strings iguais.");
    else puts("Sao strings diferentes.");

    return 0;
}
