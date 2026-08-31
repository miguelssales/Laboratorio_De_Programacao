#include <stdio.h>
int main(){
    float altura;
    char sexo;

    puts("Entre com a altura em metros:");
    scanf("%f", &altura);
    puts("Entre com o sexo[F/M]: ");
    scanf(" %c", &sexo);

    if (sexo == 'M' || sexo == 'm') {
        printf("Peso ideal: %.2f kg\n", 72.7 * altura - 58);
    } else if (sexo == 'F' || sexo == 'f') {
        printf("Peso ideal: %.2f kg\n", 62.1 * altura - 44.7);
    }

    return 0;
}