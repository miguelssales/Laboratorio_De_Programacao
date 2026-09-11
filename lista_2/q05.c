#include <stdio.h>
int main(){
    int n, maior, menor;

    puts("Entre com um valor: ");
    puts("*digite 0 para finalizar");
    scanf("%d", &n);
    maior = n;
    menor = n;

    while(n != 0){
    
        puts("Entre com um valor: ");
        puts("*digite 0 para finalizar");
        scanf("%d", &n);
        if (n > maior)
        {
            maior = n;
        }
        else if(n < menor && n != 0)
        {
            menor = n;
        }
   
    }

    printf("Maior valor: %d\nMenor valor: %d", maior, menor);

    return 0;
}