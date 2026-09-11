#include <stdio.h>
int main(){
    int jose = 150;
    int pedro = 110;
    int anos = 0;
    while(jose >= pedro){
        jose += 2;
        pedro += 3;
        anos++;
    }

    printf("Altura do Jose = %d cm\nAltura do Pedro = %d cm\nPara isso, foram necessarios %d anos.", jose, pedro, anos);
    return 0;
}