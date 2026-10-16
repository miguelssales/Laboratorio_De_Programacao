#include <stdio.h>
#include <string.h>
#define TAM 80
int main(){
    char str[TAM];
    char caractere;
    puts("Entre com uma string: ");
    fgets(str, sizeof(str), stdin);
    
    puts("Entre com um caractere: ");
    scanf(" %c", &caractere);

    unsigned int flag = 0;
    for(int i = 0; str[i] != '\0'; i++)
    {
        if(str[i] == caractere)
        {
            flag = 1;
        }
    }

    if(flag == 0) puts("Caractere nao encontrado na string digitada.\n");
    else puts("Este caractere contem na string.\n");

    return 0;
}