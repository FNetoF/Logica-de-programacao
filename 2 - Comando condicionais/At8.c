#include <stdio.h>

int main(){
    float altura, peso;

    printf("Altura: \n");
    scanf("%f", &altura);
    printf("Peso: \n");
    scanf("%f", &peso);

    if(altura <= 1.20 && peso <= 60){
        printf("A\n");
    }else if(altura >= 1.21 && altura <= 1.70 && peso <= 60){
        printf("B\n");
    }else if(altura >= 1.70 && peso <= 60){
        printf("C\n");
    }else if(altura <= 1.20 && peso >= 61 && peso <= 90){
        printf("D\n");
    }else if(altura >= 1.21 && altura <= 1.70 && peso >= 61 && peso <= 90){
        printf("E\n");
    }else if(altura >= 1.71 && peso >= 61 && peso <= 90){
        printf("F\n");
    }else if(altura <= 1.20 && peso >= 91){
        printf("G\n");
    }else if(altura >= 1.21 && altura <= 1.70 && peso >= 91){
        printf("H\n");
    }else{
        printf("I\n");
    }
    return 0;
}
