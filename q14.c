#include <stdio.h>
int main(){
    int dias;
    float valorBruto, gratificacao, imposto, valorLiquido;

    puts("Digite o numero de dias trabalhados:");
    scanf("%d", &dias);

    valorBruto = dias * 50.25;

    if(dias <= 10){
        gratificacao = 0;
    }else if(dias <= 20){
        gratificacao = valorBruto * 0.20;
    }else{
        gratificacao = valorBruto * 0.30;
    }

    valorBruto = valorBruto + gratificacao;
    imposto = valorBruto * 0.10;
    valorLiquido = valorBruto - imposto;

    printf("Valor liquido a receber: R$ %.2f\n", valorLiquido);

    return 0;
}