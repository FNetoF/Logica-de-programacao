#include <stdio.h>

int main() {
    int matriz[4][4], i, j;

    //preenhendo a matriz
    printf("Informe 16 valores para carregar a matriz 4x4\n");
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            printf("Informe o valor da posicao %dx%d: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    //Imprimindo a matriz
    printf("\n");
    for (i=0;i<4;i++){
        for (j=0;j<4;j++){
            //Se o índice da coluna for maior que o da linha, 
            //significa que estes elementos irão receber 0
            if (j>i) { 
                matriz[i][j] = 0;
                printf("[ %d ] ",matriz[i][j]);
            } else {
                printf("[ %d ] ",matriz[i][j]);
            }
        }
        printf("\n");
    }
    return 0;
}

