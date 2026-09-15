#include <stdio.h>
int main(){
    int numero, contador = 0;
    puts("Entre com um valor inteiro: ");
    scanf("%d", &numero);

    while (numero != 0)
    {
        if (numero % 10 == 7)
        {
            contador++;
        }

        numero = numero / 10;
        
    }
    
    printf("Quantidade de 7: %d", contador);

    return 0;
}