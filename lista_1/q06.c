#include <stdio.h>
int main(){
    int horas, minutos, segundos, total;

    puts("Entre com a quantidade de horas: ");
    scanf("%d", &horas);
    puts("Entre com a quantidade de minutos: ");
    scanf("%d", &minutos);
    puts("Entre com a quantidade segundos: ");
    scanf("%d", &segundos);

    total = horas * 3600 + minutos * 60 + segundos;

    printf("Total de segundos: %d s\n", total);

    return 0;
}