#include <stdio.h>
int main(){
    int numero;

    for(numero = 16; numero <= 90; numero += 4){
        printf("%d ao quadrado = %d\n", numero, numero * numero);
    }

    return 0;
}