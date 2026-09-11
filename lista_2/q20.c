#include <stdio.h>
int main() {
    int fatorial;

    for (int i = 1; i <= 10; i += 2) {
        fatorial = 1;

        for (int j = 1; j <= i; j++) {
            fatorial *= j;
        }

        printf("%d! = %d\n", i, fatorial);
    }

    return 0;
}