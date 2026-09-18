#include <stdio.h>
#include <stdlib.h>

int main() {

    unsigned char armarios = 0;
    int opcao;
    int i;

    do {

        printf("\nArmarios:\n");

        for (i = 0; i < 8; i++) {

            if (armarios & (1 << i)) {
                printf("Armario %d: Ocupado\n", i + 1);
            } else {
                printf("Armario %d: Livre\n", i + 1);
            }
        }

        printf("\n1 - Ocupar armario\n");
        printf("2 - Liberar armario\n");
        printf("3 - Sair\n");
        printf("Escolha: ");
        scanf("%d", &opcao);

        if (opcao == 1) {

            int escolhido;

            escolhido = rand() % 8;

            while (armarios & (1 << escolhido)) {
                escolhido = rand() % 8;
            }

            armarios = armarios | (1 << escolhido);

            printf("Armario %d ocupado!\n", escolhido + 1);

        } else if (opcao == 2) {

            int posicao;

            printf("Digite o numero do armario (1 a 8): ");
            scanf("%d", &posicao);

            armarios = armarios & ~(1 << (posicao - 1));

            printf("Armario %d liberado!\n", posicao);

        }

    } while (opcao != 3);

    return 0;
}
