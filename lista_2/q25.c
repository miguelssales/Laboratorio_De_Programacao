#include <stdio.h>
#include <math.h>
int main(){
    double pi = 0.0;
    int dem, j = 1;
    for(int i = 0; i < 50; i++)
    {
        dem = j * pow(-1 , i);
        pi += (double)(4.0) / dem;
        j += 2;
        printf("%d termo(s): pi = %lf\n", i + 1, pi);
    }

    return 0;
}