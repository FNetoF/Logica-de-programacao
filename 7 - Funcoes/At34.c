#include <stdio.h>
#include <math.h>
#define pi 3.14159

float volume_esfera(float raio){
    float volume;

    volume= 4.0 / 3.0 * (pi* pow(raio,3));
    return volume;
}

int main(){
    float result, r;

    printf("Informe o valor do raio: \n");
    scanf("%f",&r);

    result= volume_esfera(r);
    printf("Volume= %.2f\n", result);
}
