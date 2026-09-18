#include <stdio.h>
int main(){
    int numero;
    scanf("%d", &numero);

    if(numero % 2 == 0){
        puts("par");
    }else{
        puts("impar");
    }


    return 0;
}