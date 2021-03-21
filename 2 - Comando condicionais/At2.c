#include <stdio.h>
#include <math.h>

int main(){
    float a;

    scanf("%f", &a);

    if (a >= 0){
        a= sqrt(a);
        printf("Raiz quadrada: %.2f\n", a);
    }else{
        a= pow(a, 2);
        printf("Numero quadrado: %.2f\n", a);
    }
    return 0;
}
