#include <stdio.h>
int main(){
    int numero, contador = 0, digito;
    puts("Entre com um valor inteiro: ");
    scanf("%d", &numero);
    puts("Entre com o digito de busca: ");
    scanf("%d", &digito);

    while (numero != 0)
    {
        if (numero % 10 == digito)
        {  
            contador = contador + 1;
        }
        numero = numero / 10;
    }
    
    printf("Quantidade de %d: %d", digito, contador);

    return 0;
}