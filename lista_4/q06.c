#include <stdio.h>
#include <string.h>
#define TAM 80
int main(){
    char s[TAM];
    puts("Entre com uma string: ");
    fgets(s, sizeof(s), stdin);

    for(int i = 0; s[i] != '\0'; i++)
    {
        if(s[i] == '\n') s[i] = '\0';
    }

    int tam = strlen(s);
    
    char si[tam + 1];
    int j = 0;
    for(int i = tam - 1; i >= 0; i--) 
    { 
        si[j] = s[i]; 
        j++; 
    }

    printf("string invertida: %s", si);

    return 0;
}