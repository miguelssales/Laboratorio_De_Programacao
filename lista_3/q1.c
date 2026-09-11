#include <stdio.h>
int main(){
    float areaA, areaB, perimetroA, perimetroB, verticesA, verticesB;
    float areaD, perimetroD, verticesD, max;

    puts("Area do objeto A: ");
    scanf("%f", &areaA);
    puts("Perimetro do objeto A: ");
    scanf("%f", &perimetroA);
    puts("Numero de vertices do objeto A: ");
    scanf("%f", &verticesA);
    puts("---------------------------------");
    puts("Area do objeto B: ");
    scanf("%f", &areaB);
    puts("Perimetro do objeto B: ");
    scanf("%f", &perimetroB);
    puts("Numero de vertices do objeto B: ");
    scanf("%f", &verticesB);

    areaD = areaA - areaB;
    perimetroD = perimetroA - perimetroB;
    verticesD = verticesA - verticesB;

    areaD = (areaD >= 0) ? areaD : (-1) * areaD; 
    perimetroD = (perimetroD >= 0) ? perimetroD : (-1) * perimetroD;
    verticesD = (verticesD >= 0) ? verticesD : (-1) * verticesD;

    if (areaD >= perimetroD && areaD >= verticesD)
    {
        max = areaD;
    }
    else if(perimetroD >= areaD && perimetroD >= verticesD)
    {
        max = perimetroD;
    }
    else
    {
        max = verticesD;
    }
    

    puts("--------------------------------");
    puts("Distancia de Chebyshev");
    printf("Max(%.2f,%.2f,%.2f) = %.2f", areaD, perimetroD, verticesD, max);

    return 0;
}