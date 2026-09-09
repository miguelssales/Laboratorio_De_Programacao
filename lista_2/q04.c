#include <stdio.h>
int main(){
    int voto = 0;
    int confirmacao;
    int paulo = 0;
    int renata = 0;
    int branco = 0;
    int nulo = 0;
    int total = 0;

    puts("-------URNA ELETRONICA-------\n");
    puts("Escolha seu voto:\n");
    puts("[5] Paulo\n");
    puts("[7] Renata\n");
    puts("[0] Voto em branco");
    puts("*numero negativo encerra o programa.");

    scanf("%d", &voto);

    while (voto >= 0)
    {
        switch (voto)
        {
        case 5:
            puts("Voce escolheu o candidato Paulo[5].");
            break;

        case 7:
            puts("Voce escolheu o candidato Renata[7].");
            break;

        case 0:
            puts("Seu voto sera em branco.");
            break;

        default:
            puts("Seu voto sera nulo.");
            break;
        }

        puts("Confirma seu voto?");
        puts("[1] Sim");
        puts("[2] Nao");

        scanf("%d", &confirmacao);

        if (confirmacao == 1)
        {
            switch (voto)
            {
            case 5:
                puts("Voto confirmado em Paulo[5].");
                paulo++;
                break;

            case 7:
                puts("Voto confirmado em Renata[7].");
                renata++;
                break;

            case 0:
                puts("Voto confirmado em branco.");
                branco++;
                break;

            default:
                puts("Voto confirmado como nulo.");
                nulo++;
                break;
            }

            total++;
        }
        else
        {
            puts("Voto cancelado.");
        }

        puts("---------------------");
        puts("Escolha seu voto:\n");
        puts("[5] Paulo\n");
        puts("[7] Renata\n");
        puts("[0] Voto em branco");
        puts("*numero negativo encerra o programa.");

        scanf("%d", &voto);
    }

    puts("----------------------");
    puts("Votacao encerrada.\n");
    puts("APURACAO DOS VOTOS\n");

    if (total > 0)
    {
        printf("Paulo[5]: %.2f%% dos votos\n", (paulo * 100.0) / total);
        printf("Renata[7]: %.2f%% dos votos\n", (renata * 100.0) / total);
        printf("Brancos: %.2f%% dos votos\n", (branco * 100.0) / total);
        printf("Nulos: %.2f%% dos votos\n", (nulo * 100.0) / total);

        if (paulo > renata)
        {
            puts("Novo Presidente do pais: Paulo.");
        }
        else if (renata > paulo)
        {
            puts("Nova Presidente do pais: Renata.");
        }
        else
        {
            puts("Houve empate entre Paulo e Renata.");
        }
    }
    else
    {
        puts("Nenhum voto foi registrado.");
    }

    return 0;
}
