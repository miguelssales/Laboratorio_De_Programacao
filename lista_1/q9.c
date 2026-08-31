#include <stdio.h>
int main(){
    float comprimento, largura, altura, volume;

    puts("Digite o comprimento:");
    scanf("%f", &comprimento);

    puts("Digite a largura:");
    scanf("%f", &largura);

    puts("Digite a altura:");
    scanf("%f", &altura);

    volume = comprimento * largura * altura;

    printf("Volume: %.2f\n", volume);

    return 0;
}