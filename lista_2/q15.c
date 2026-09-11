#include <stdio.h>
int main(){
    int potencia = 1;

    for(int expoente = 0; expoente <= 7; expoente++){
        printf("3^%d = %d\n", expoente, potencia);

        potencia = potencia * 3;
    }

    return 0;
}