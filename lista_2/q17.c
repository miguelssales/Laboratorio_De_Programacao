#include <stdio.h>
int main(){
    float fahrenheit;

    for(int celsius = 10; celsius <= 100; celsius += 10){
        fahrenheit = celsius * 1.8 + 32;

        printf("%.0f °C = %.1f °F\n", (float)celsius, fahrenheit);
    }

    return 0;
}