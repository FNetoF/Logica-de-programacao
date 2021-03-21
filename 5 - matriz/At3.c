#include <stdio.h>

int main(){
    int matriz1[4][4], matriz2[4][4], matriz3[4][4], i, j;

    //preenhendo a 1º matriz
    printf("Informe 16 valores para carregar a 1º matriz 4x4\n");
    for(i = 0; i < 4; i++) {
        for(j = 0; j < 4; j++) {
            printf("Informe o valor da posicao %dx%d: ", i, j);
            scanf("%d",&matriz1[i][j]);
        }
    }

    //preenhendo a 2º matriz
    printf("\nInforme 16 valores para carregar a 2º matriz 4x4\n");
    for(i = 0; i < 4; i++) {
        for(j = 0; j < 4; j++) {
            printf("Informe o valor da posicao %dx%d: ", i, j);
            scanf("%d",&matriz2[i][j]);
        }
    }

    //Localizando a maior matriz
    for(i = 0; i < 4; i++) {
        for(j = 0; j < 4; j++) {
            if(matriz1[i][j] > matriz2[i][j]){
                matriz3[i][j] = matriz1[i][j];
            }else {
                matriz3[i][j] = matriz2[i][j];
            }
        }
    }

    //Imprimindo a matriz
    for (i = 0; i < 4; i++) {
        for(j = 0; j < 4; j++){
            printf("C[ %d ] ", matriz3[i][j]);
        }
        printf("\n");
    }
    return 0;
}

