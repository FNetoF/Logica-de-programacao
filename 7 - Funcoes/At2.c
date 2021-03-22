#include <stdio.h>

int potencia(int x, int y){
    int potencia=1, i=0;

    while(i != y){
        potencia *= x;
        i+=1;
    }
  return potencia;
}

int main(){
    int n1, n2, result;

    printf("Informe a base: \n");
    scanf("%d", &n1);
    printf("Informe o expoente: \n");
    scanf("%d", &n2);

    result= potencia(n1, n2);
    printf("A base de %d elvado a %d eh: %d\n", n1, n2, result);
}
