#include <stdio.h>

int main(){
    int num, i;

    printf("Digite um numero: \n");
    scanf("%d", &num);
    printf("\n");

    for (i = num; i >= 0; i--){
        printf("%d\n", i);
    }
    return 0;
}
