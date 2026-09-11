#include <stdio.h>
int main(){
    int soma3 = 0;
    int soma5 = 0;

    for(int i = 0; i <= 200; i++){
        if(i <= 100 && i % 3 == 0){
            soma3 = soma3 + i;
        }
        else if(i > 100 && i % 5 == 0){
            soma5 = soma5 + i;
        }
    }

    printf("Somatorio dos numeros divisiveis por 3: %d\n", soma3);
    printf("Somatorio dos numeros divisiveis por 5: %d\n", soma5);

    return 0;
}