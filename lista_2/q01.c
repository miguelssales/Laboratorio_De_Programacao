#include <stdio.h>
int main(){
    unsigned char diaDaSemana;
    puts("Entre com um valor de 1 a 7: ");
    scanf("%d", &diaDaSemana);

    while(diaDaSemana != 0){
        
            switch (diaDaSemana){
                case(1):
                    puts("Domingo\n");
                    break;
                
                case(2):
                    puts("Segunda-feira\n");
                    break;
                
                case(3):
                    puts("Terca-feira\n");
                    break;

                case(4):
                    puts("Quarta-feira\n");
                    break;

                case(5):
                    puts("Quinta-feira\n");
                    break;

                case(6):
                    puts("Sexta-feira\n");
                    break;
                
                case(7):
                    puts("Sabado\n");
                    break;

                default:
                    puts("Numero do dia invalido!\n");
            }
        
        puts("Entre novamente com um valor de 1 a 7: ");
        scanf("%d", &diaDaSemana);
    }


    return 0;
}