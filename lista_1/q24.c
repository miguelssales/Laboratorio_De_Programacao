#include <stdio.h>
int main(){
    int tempo, horas, minutos, segundos;

    puts("Digite o tempo em segundos:");
    scanf("%d", &tempo);

    horas = tempo / 3600;
    minutos = (tempo % 3600) / 60;
    segundos = tempo % 60;

    printf("Horas: %d\n", horas);
    printf("Minutos: %d\n", minutos);
    printf("Segundos: %d\n", segundos);

    return 0;
}