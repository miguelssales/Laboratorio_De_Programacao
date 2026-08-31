#include <stdio.h>
#include <math.h>
int main(){
    float x1, y1, x2, y2, distancia;

    puts("Digite a coordenada x do primeiro ponto:");
    scanf("%f", &x1);

    puts("Digite a coordenada y do primeiro ponto:");
    scanf("%f", &y1);

    puts("Digite a coordenada x do segundo ponto:");
    scanf("%f", &x2);

    puts("Digite a coordenada y do segundo ponto:");
    scanf("%f", &y2);

    distancia = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));

    printf("Distancia entre os pontos: %.2f\n", distancia);

    return 0;
}