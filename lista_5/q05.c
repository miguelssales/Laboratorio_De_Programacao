#include <stdio.h>
#define TAM 80
int main(){
    char str[TAM];

    puts("Entre com uma string: ");
    fgets(str, sizeof(str), stdin);
    
    int cont = 0;
    char *pstr = str;
    
    while(*pstr != '\0')
    {
        if(*pstr == '\n')
        {
            *pstr = '\0';
            break;
        }
        
        cont++;
        pstr++;
    }

    printf("String digitada: %s\n", str);
    printf("Tamanho da string usando ponteiros: %d", cont);

    return 0;
}