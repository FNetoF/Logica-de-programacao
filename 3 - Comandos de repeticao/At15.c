#include <stdio.h>

int main(){
    int a= 0, i;

    printf("Digite 10 valores: \n");

    for(i= 1; i <= 10; i++){
        scanf("%d", &i);
        a += i;
    }
    printf("\nSoma= %d\n", a);
    return 0;
}
