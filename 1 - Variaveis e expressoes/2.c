#include <stdio.h>

int main(){
    float c,f;

    printf("Temperatura em Grau Celsius:\n");
    scanf("%f", &c);

    f= c * (9.0 / 5.0) + 32.0;

    printf("%.2f grau Celsius eh %.2f Fahrenheit.\n", c, f);
    return 0;
}
