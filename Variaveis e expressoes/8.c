#include <stdio.h>
#include <math.h>
#define pi 3.141592

int main(){
    float raio, result;

    scanf("%f", &raio);

    result= pi * pow(raio,2);

    printf("O valor do raio= %.2f\n", result);
    return 0;
}
