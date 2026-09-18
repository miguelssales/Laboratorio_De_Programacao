#include <stdio.h>
int main(){
    int n, x;
    double y;
    printf("Entre com a quantidade de amostras: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &x);
        if (i != 0 & i != n-1)
        {
            for (int j = 2; j < n - 1; j++)
            {
                y += x;
            }
        
        }
    }
    

    return 0;
}
