#include <stdio.h>
int main(){
    unsigned char x, xmin, xmax;
    double xnorm;
    int n;
    
    puts("Entre com a quantidade de pixels: ");
    scanf("%d", &n);

    puts("x1 = ");
    scanf("%hhu", &x);
    xmin = x;
    xmax = x;

    for (int i = 0; i < n - 1; i++)
    {
        printf("x%d = ", i+2);
        scanf("%hhu", &x);

        if (x > xmax)
        {
            xmax = x;
        }
        else if(x < xmin)
        {
            xmin = x;
        }
        
    }
    printf("xmin = %hhu\nxmax = %hhu\n", xmin, xmax);

    printf("Entre com um valor x entre %hhu e %hhu: ", xmin, xmax);
    scanf("%hhu", &x);

    xnorm = (double)(x - xmin) / (xmax - xmin);
    printf("x normalizado = %lf\n", xnorm);

    return 0;
}
