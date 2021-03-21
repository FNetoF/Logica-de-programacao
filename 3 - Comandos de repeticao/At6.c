#include <stdio.h>

int main(){
    int a= 3, b= 5, i, result;

    for (i = 1; i <= 1000; i++){
        if (i % a || i % b){
            result += i;
        }
    }
    printf("A soma dos multiplos de 3 e 5 abaixo de 1000 eh: %d\n", result);
    return 0;
}
