#include <stdio.h>
#include <string.h>
#define TAM 80
int main(){
    char str[TAM];
    unsigned int contador = 0;
    puts("Entre com uma string: ");
    fgets(str, sizeof(str), stdin);
    
    for(int i = 0; str[i] != '\n'; i++)
    {
        contador++;
    }

    printf("Quantidade de caracteres = %u", contador);

    return 0;
}