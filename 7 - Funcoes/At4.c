#include <stdio.h>

void verificador(int a, int b, int c){

    if (a<b + c && b<a + c && c<a + b){
        if (a==b && b==c){
            printf("\nEquilatero\n");
        }else if(a==b || a==c || b==c){
            printf("\nIsosceles\n");
        }else{
            printf("\nEscaleno\n");
        }   
    }else{
        printf("\nNao eh triangulo\n");
    }
}

int main(){
    float lado1, lado2, lado3;

    printf("Primeiro lado: \n");
    scanf("%f", &lado1);
    printf("Segundo lado: \n");
    scanf("%f", &lado2);
    printf("Terceiro lado: \n");
    scanf("%f", &lado3);

    verificador(lado1,lado2, lado3);
}
