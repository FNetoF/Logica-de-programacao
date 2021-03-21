#include <stdio.h>
#include <math.h>

int main(){
    int a[5][10], i, j, b;

    //preenhendo a matriz
    printf("Informe 50 valores para carregar a matriz 5x10\n");
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 10; j++) {
            printf("Informe o valor da posicao %dx%d: ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    //Imprimindo matriz  
    printf("\n");
    for (i = 0; i < 2; i++){
        for (j = 0; j < 2; j++){
            b = pow(a[i][j],2);
            printf("[ %d ] ", b);
        }
        printf("\n");
    }
    return 0;
}

