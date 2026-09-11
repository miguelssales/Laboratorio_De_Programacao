#include <stdio.h>
int main() {
    float area1, area2, perimetro1, perimetro2, vertices1, vertices2;
    float areaX, perimetroX, verticesX;
    float areaD1, perimetroD1, verticesD1;
    float areaD2, perimetroD2, verticesD2;
    float distancia1, distancia2;
    int n;

    puts("Caracteristicas do centroide C1:");
    printf("Area: ");
    scanf("%f", &area1);
    printf("Perimetro: ");
    scanf("%f", &perimetro1);
    printf("Numero de vertices: ");
    scanf("%f", &vertices1);

    puts("---------------------------------");

    puts("Caracteristicas do centroide C2:");
    printf("Area: ");
    scanf("%f", &area2);
    printf("Perimetro: ");
    scanf("%f", &perimetro2);
    printf("Numero de vertices: ");
    scanf("%f", &vertices2);

    printf("Quantidade de objetos: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        puts("---------------------------------");
        printf("Objeto %d\n", i);

        printf("Area: ");
        scanf("%f", &areaX);
        printf("Perimetro: ");
        scanf("%f", &perimetroX);
        printf("Numero de vertices: ");
        scanf("%f", &verticesX);

        areaD1 = areaX - area1;
        perimetroD1 = perimetroX - perimetro1;
        verticesD1 = verticesX - vertices1;

        areaD1 = (areaD1 >= 0) ? areaD1 : -areaD1;
        perimetroD1 = (perimetroD1 >= 0) ? perimetroD1 : -perimetroD1;
        verticesD1 = (verticesD1 >= 0) ? verticesD1 : -verticesD1;

        if (areaD1 >= perimetroD1 && areaD1 >= verticesD1) {
            distancia1 = areaD1;
        } else if (perimetroD1 >= areaD1 && perimetroD1 >= verticesD1) {
            distancia1 = perimetroD1;
        } else {
            distancia1 = verticesD1;
        }

        areaD2 = areaX - area2;
        perimetroD2 = perimetroX - perimetro2;
        verticesD2 = verticesX - vertices2;

        areaD2 = (areaD2 >= 0) ? areaD2 : -areaD2;
        perimetroD2 = (perimetroD2 >= 0) ? perimetroD2 : -perimetroD2;
        verticesD2 = (verticesD2 >= 0) ? verticesD2 : -verticesD2;

        if (areaD2 >= perimetroD2 && areaD2 >= verticesD2) {
            distancia2 = areaD2;
        } else if (perimetroD2 >= areaD2 && perimetroD2 >= verticesD2) {
            distancia2 = perimetroD2;
        } else {
            distancia2 = verticesD2;
        }

        if (distancia1 < distancia2) {
            printf("Classe: C1\n");
        } else if (distancia2 < distancia1) {
            printf("Classe: C2\n");
        } else {
            printf("Classe: empate\n");
        }
    }

    return 0;
}