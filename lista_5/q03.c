#include <stdio.h>
int main(){
    int n = 0 , menor;
    int *pn = &n, *pmenor = &menor;

    for(int i = 0; n != -1; i++) // -1 encerra programa
    {
        puts("Entre com um valor(-1 para sair):");
        scanf("%d", pn);

        if(i == 0)
        {
            *pmenor = *pn;
        }
        else if (*pn < *pmenor && *pn != -1)
        {
            *pmenor = *pn;
        }
    }

    printf("menor valor digitado: %d", *pmenor);

    return 0;
}