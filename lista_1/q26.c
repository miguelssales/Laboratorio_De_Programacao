#include <stdio.h>
#include <math.h>
int main(){
    float numero1, numero2, numero3, mediaAritmetica, mediaGeometrica;

    puts("Digite o primeiro numero:");
    scanf("%f", &numero1);

    puts("Digite o segundo numero:");
    scanf("%f", &numero2);

    puts("Digite o terceiro numero:");
    scanf("%f", &numero3);

    mediaAritmetica = (numero1 + numero2 + numero3) / 3;
    mediaGeometrica = pow(numero1 * numero2 * numero3, 1.0 / 3.0);

    printf("Media aritmetica: %f\n", mediaAritmetica);
    printf("Media geometrica: %f\n", mediaGeometrica);

    return 0;
}