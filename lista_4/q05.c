#include <stdio.h>
#include <string.h>
#define TAM 80
int main(){
    char s1[TAM], s2[TAM];
    puts("Entre com uma string: ");
    fgets(s1, sizeof(s1), stdin);
    puts("Entre com outra string: ");
    fgets(s2, sizeof(s2), stdin);

    for(int i = 0; s1[i] != '\0'; i++)
    {
        if(s1[i] == '\n') s1[i] = '\0';
    }

    for(int i = 0; s2[i] != '\0'; i++)
    {
        if(s2[i] == '\n') s2[i] = '\0';
    }

    strcat(s1,s2);
    printf("strings concatenadas COM strcat: %s\n", s1);

    char s3[TAM], s4[TAM];
    puts("Entre com uma string: ");
    fgets(s3, sizeof(s3), stdin);
    puts("Entre com outra string: ");
    fgets(s4, sizeof(s4), stdin);
    
    for(int i = 0; s3[i] != '\0'; i++)
    {
        if(s3[i] == '\n') s3[i] = '\0';
    }

    for(int i = 0; s4[i] != '\0'; i++)
    {
        if(s4[i] == '\n') s4[i] = '\0';
    }

    int i = 0;
    while(s3[i] != '\0') i++;

    int j = 0;
    while(s4[j] != '\0')
    {
        //s3[i+1] = s4[j];
        s3[i] = s4[j];
        i++;
        j++;
    }

    printf("strings concatenadas SEM strcat: %s\n", s3);


    return 0;
}