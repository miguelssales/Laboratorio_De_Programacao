#include <stdio.h>
int main(){
    float valorHora, horasTrabalhadas, percentualINSS;
    float salarioBruto, descontoINSS, salarioLiquido;

    puts("Digite o valor da hora aula:");
    scanf("%f", &valorHora);

    puts("Digite o numero de horas trabalhadas no mes:");
    scanf("%f", &horasTrabalhadas);

    puts("Digite o percentual de desconto do INSS:");
    scanf("%f", &percentualINSS);

    salarioBruto = valorHora * horasTrabalhadas;
    descontoINSS = salarioBruto * percentualINSS / 100;
    salarioLiquido = salarioBruto - descontoINSS;

    printf("Salario bruto: R$ %.2f\n", salarioBruto);
    printf("Salario liquido: R$ %.2f\n", salarioLiquido);

    return 0;
}