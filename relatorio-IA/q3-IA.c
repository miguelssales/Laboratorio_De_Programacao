#include <stdio.h>

int main() {
    int n, x;
    int xmin, xmax;
    float xp;

    scanf("%d", &n);

    scanf("%d", &x);
    xmin = x;
    xmax = x;

    for (int i = 1; i < n; i++) {
        scanf("%d", &x);

        if (x < xmin) {
            xmin = x;
        }

        if (x > xmax) {
            xmax = x;
        }
    }

    scanf("%d", &x);

    xp = (float)(x - xmin) / (xmax - xmin);

    printf("%.2f\n", xp);

    return 0;
}